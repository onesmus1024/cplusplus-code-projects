#include <iostream>

using namespace std;

class shape{
private:
    int length;
    int width;
public:
    shape(int length,int width);
    shape(int length);
    int area();
};
shape::shape(int length,int width)
{
    this->length = length;
    this->width=width;
}
shape::shape(int length)
{
    this->length = length;
}
int shape::area()
{
    return (length*width);
}
int shape::area()
{
    return (length*length);
}


int main()
{
    shape shape1(2,3);
    cout<<"THE AREA IS "<<shape1.area()<<endl;
    return 0;
}
