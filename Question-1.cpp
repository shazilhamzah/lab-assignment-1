#include <iostream>
#include <math.h>
using namespace std;

int add(int a, int b){
    int sum;
    sum=a+b;
    return sum;
}

int subt(int a, int b){
    int diff = a-b;
    return diff;
}

int mult(int a, int b){
    int prod = a*b;
    return prod;
}

float divis(int a,int b){
    float quotient = a/b;
    return quotient;
}

int mod(int a,int b){
    int remainder=a%b;
    return remainder;
}

int exp(int a,int b){
    int power = pow(a,b);
    return power;
}

int main()
{
    char oper,again;
    int x,y;
    do{   
    cout<<"\nWelcome to the calculator!"<<endl;
    cout<<"What operation do you want to perform?"<<endl;
    cout<<"1.Addition (Enter +)"<<endl;
    cout<<"2.Subtraction (Enter -)"<<endl;
    cout<<"3.Multiplication (Enter *)"<<endl;
    cout<<"4.Division (Enter /)"<<endl;
    cout<<"5.Modulus (Enter %)"<<endl;
    cout<<"6.Exponentiation (Enter ^)"<<endl;
    cout<<"6.Quit (Enter q)"<<endl;
    cin>>oper;

    if (oper=='+')
    {
        cout<<"Enter first value: "; cin>>x;
        cout<<"Enter second value: "; cin>>y;
        cout<<"Answer is: "<<add(x,y);
    }
    else if (oper=='-')
    {
        cout<<"Enter first value: "; cin>>x;
        cout<<"Enter second value: "; cin>>y;
        cout<<"Answer is: "<<subt(x,y);
    }
    else if (oper=='*')
    {
        cout<<"Enter first value: "; cin>>x;
        cout<<"Enter second value: "; cin>>y;
        cout<<"Answer is: "<<mult(x,y);
    }
    else if (oper=='/')
    {
        cout<<"Enter first value: "; cin>>x;
        cout<<"Enter second value: "; cin>>y;
        cout<<"Answer is: "<<divis(x,y);
    }
    else if (oper=='%')
    {
        cout<<"Enter first value: "; cin>>x;
        cout<<"Enter second value: "; cin>>y;
        cout<<"Answer is: "<<mod(x,y);
    }
    else if (oper=='^')
    {
        cout<<"Enter first value: "; cin>>x;
        cout<<"Enter second value: "; cin>>y;
        cout<<"Answer is: "<<exp(x,y);
    }
    else if (oper=='q')
    {
        return 0;
    }
    else if (oper!='+' || oper!='-' || oper!='*' || oper!='-' || oper!='/' || oper!='^' || oper!='%' || oper!='q')
    {
        cout<<"Enter a valid operator!"<<endl;
    }
    cout<<"\nDo you want to enter again? (y/n): "; cin>>again;

    

    }while(again=='y'); 
}
