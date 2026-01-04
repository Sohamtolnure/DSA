
#include <iostream>
using namespace std;

void Digonal_sum(int arr[][4],int n){
    int sum =0;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i==j){
                sum += arr[i][j];
            }else if( j== n-i-1){
                sum += arr[i][j];
            }
        }
    }
    cout<<"digonal sum is equal to :"<<sum;