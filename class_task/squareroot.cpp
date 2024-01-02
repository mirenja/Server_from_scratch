#include<iostream>
#include<cmath>

using namespace std;


int main ()
{
    float value;
    cout<<"enter a value: \n";
    cin>> value;

    if (value >= 0.0)
    {
        float squareroot  = sqrtf(value);
        cout<<"the sqaure root of : "<<value <<" is : " <<squareroot <<endl;
    }
    return 0;
}