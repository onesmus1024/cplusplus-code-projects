#include <iostream>
#include <string>
#include <cassert>
using namespace std;
class student{
private:
    int age;
    string name;
public:
    student(int a,string b);
    ~student();
    int getage()const;
    string getname()const;
};

student::student(int a,string b)
:age(a),name(b)
{
    if(age<0)
    {
        cout<<"student can not have negative age"<<endl;
        assert(false);
    }


};
int student::getage()const
{
    return age;
};
string student::getname()const
{
    return name;
};
student::~student()
{
    cout<<"object destroyed"<<endl;
}


int main()
{
    int age1;
    cin>>age1;
    student student1(age1,"ones");
    cout<<"the age of the student is "<<student1.getage()<<endl;
    cout<<"the name of the student is "<<student1.getname()<<endl;
    return 0;
}
