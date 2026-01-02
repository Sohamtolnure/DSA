//Trapping Rain Water
#include <iostream>
using namespace std;

void traprainwater(int *hight,int n){
    int leftmax[2000] ,rightmax[2000];
    rightmax[n-1]=leftmax[n-1];
    leftmax[0]=rightmax[0];

    int currhight = 0;
    int trapraiwater =0;
    for(int i =1;i < n ;i++){
        leftmax[i]=max(leftmax[i-1],hight[i-1]);
        }
    for(int i =n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],hight[i+1]);
    }
    for(int i =0;i<n ;i++){
        currhight=min(leftmax[i],rightmax[i])-hight[i];
        if(currhight>0){
            trapraiwater += currhight;
        }
    }
    cout <<trapraiwater;
    }