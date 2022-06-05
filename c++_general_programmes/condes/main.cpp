#include <iostream>
#include <string>

using namespace std;
class square{
    char * name[5];
public:
    void setname();
    void getName();
};
void square::setname()
{
    char nam[20];
    cout<<"ENTER NAME OF THE SHAPE"<<endl;
    cin.get(nam,20);
    *name =nam;

}
void square::getName()
{
    cout<<"NAME = "<<*name<<endl;
}

int main()
{
    square square1;
    square1.setname();
    square1.getName();
    return 0;
}
