#include <iostream>
#include <string>
using namespace std;

int main()
{
    int  * p,k;
    k =20;
    p = &k;
    int j =30;
    int pass = 100;
    cout<<*p<<endl;
    for(int i=0;i<10;i++)
    {

        p++;
        cout<<*p<<endl;
        if (*p==pass)
        {
           cout<<"GRANTED ACCESS!!"<<endl;
        }
    }
    return 0;
}
