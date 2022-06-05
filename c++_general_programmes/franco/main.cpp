#include <iostream>
#include <string>

using namespace std;

enum units{ucc202='ucc'};
int main()
{
    units code = ucc202;
    string name;
    name = code;
    cout<<name<<endl;

    return 0;
}
