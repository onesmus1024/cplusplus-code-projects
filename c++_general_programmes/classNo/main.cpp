#include <iostream>

using namespace std;

class shape{
protected:
    int length;
    int width;
public:
    int area();
    int setvalue();
};

int shape::area()
{
   return (length*width);
}
int shape::setvalue()
{
    cout<<"ENTER LENGTH "<<endl;
    cin>>length;
    cout<<"ENTER WIDTH"<<endl;
    cin>>width;
}
class square:public shape{
public:
    int setvalue()
    {
        cout<<"ENTER side "<<endl;
       cin>>length;
    }
    int area()
    {
        return (length*length);
    }
};

int main()
{
    shape rectangle;
    rectangle.setvalue();
    cout<<"AREA OF THE RECT "<<rectangle.area()<<endl;
    square square1;
    square1.setvalue();
    cout<<"AREA OF THE SQUARE "<<square1.area()<<endl;
    return 0;
}
