#include <iostream>
using namespace std;

bool isPalindrome(int num){
    int original=num;
    int remainder,reversedNumber=0;
    while (num!=0)
    {
        remainder = num%10;  
        reversedNumber = (reversedNumber*10)+remainder;
        num=num/10;
    }
    return reversedNumber==original;   
}

int main()
{
    int number;
    cout<<"Enter a number: "; cin>>number;
    if (isPalindrome(number))
    {
        cout<<"It is a palondrome."<<endl;
    }
    else{
        cout<<"It is not a palindrome."<<endl;
    }
    return 0;
}
