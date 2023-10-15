#include <iostream>
#include<math.h>
using namespace std;

double pi=3.14159;
float area(int rad){
    float a;
    a = pi*pow(rad,2);
    return a;
}

int main()
{
    int radius;
    do
    {
        cout<<"Enter radius of a circle: "; cin>>radius;

        if (radius<0)
        {
            cout<<"Enter a valid radius! (>0)"<<endl;
        }
        
    } while (radius<0);
    cout<<"Radius of circle is: "<<area(radius);
    return 0;
}
