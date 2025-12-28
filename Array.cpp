#include <iostream>
using namespace std;

// To  find largest element in Array
int largest(int *arr,int n){
    int largest = __WINT_MIN__;
    
    for(int i = 0;i <n;i++){
        largest = max(arr[i],largest);
    }
    return largest;
}
int main(){
    int m;
    cout << "Entre number of element going to store in array :";
    cin >>m;
    
    int arr[m];
    for(int i = 0;i<m;i++ ){
        cout << "Entre element at index "<<i<<":";
        cin >> arr[i];
    }
    cout << largest(arr,m);

}