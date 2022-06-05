#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum;
    cout<<"enter number you want to add"<<endl;
    cout<<"press control z to quit"<<endl;
    while(cin>>num)
    {
        sum +=num;
    }
    cout<<"the sum is "<<sum<<endl;
    return 0;
}
