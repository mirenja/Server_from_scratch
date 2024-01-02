#include<iostream>
using namespace std;

int main()
{
    int value;

    cout<<"Enter a value and I will square it!! \n";
    cin>> value;

    int square = value * value;

    cout<< "you entered : "<<value<< endl;
    cout<<"the square is : "<< square<<endl;
    return 0;
}