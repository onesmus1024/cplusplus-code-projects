#include <iostream>

using namespace std;
float average (float num1, float num2);

int main()
{
    float average1;
    float  num1;
    float num2;
    cout << "enter two numbers!" << endl;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    average1 = average(num1,num2);

    cout<<"AVERAGE = "<<average1<<endl;

    return 0;
}

float average(float num1, float num2)
{
    float average;
    average = (num1+num2)/2;
    return average;
}
