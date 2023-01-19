#include <iostream>
using namespace std;

bool isPalindrome(int x) {

    int initNum = x;
    int reverseNum = 0, remainder;
    while(x!=0){
        remainder = x % 10;
        reverseNum = reverseNum * 10 + remainder;
        x /= 10;
    }

    return initNum == reverseNum;    
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}