#include <iostream>
#include<exception>

using namespace std;

int main()
{   float num1,num2;
    float div;
    cout << "enter two numbers" << endl;
    cin>>num1;
    cin>>num2;
    try
    {
       if(num2==0)
       {
          throw(0);
       }
       else{
          div = num1/num2;
          cout<<"division = "<<div<<endl;
       }
    }catch(int x)
    {
       cout<<"error dividing by "<<x<<endl;
    }




    return 0;
}
