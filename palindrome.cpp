#include <iostream>
using namespace std;



class Solution {
public:
    bool isPalindrome(int x) {
        int rem ;
      long long  int reverse =0;
        int num = x;
        while(x>0){
            rem = x%10;
            reverse = reverse *10 + rem ;
            x /= 10;
        }
        if(num == reverse){
            return true;
        }else{
            return false;
        }
    }
};
int main(){

    Solution s;

    int x = 121;   // you can change this number

    if (s.isPalindrome(x)) {
        cout << x << " is a palindrome";
    } else {
        cout << x << " is not a palindrome";
    }

    return 0;
}

