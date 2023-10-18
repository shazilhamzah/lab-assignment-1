#include <iostream>
using namespace std;

void findMinMax(){
    int max,min;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    max=n;
    min=n;
    do{
        cout<<"Enter number: ";
        cin>>n;
        if (n==-1)
        {
            break;
        }
        else if (n>max)
        {
            max=n;
        }
        else if (n<min)
        {
            min=n;
        }
    }while(n!=-1);

    cout<<"Maximum number is: "<<max<<endl;
    cout<<"Minimum number is: "<<min<<endl;
}


int main()
{
    findMinMax();
    return 0;
}
