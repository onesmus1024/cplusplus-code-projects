#include <iostream>

using namespace std;
class shape{
protected:
    int length;
    int width;
public:
    shape(int a,int b);
    int area();

};

shape::shape(int a,int b)
{
    this->length = a;
    this->width = b;
}
int shape::area()
{
    return (length*width);
}

class square:public shape
{
public:
    square(int length);
    int area();
};
square::square(int length)
{
    this->length = length;
}
int square::area()
{
    return (length*length);
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
