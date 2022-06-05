#include <iostream>

using namespace std;
struct student{
    int age;
    int ID;
}student1;

union person{
    int age;
    int ID;
}person1;

int main()
{
    //person person1;
    cout <<"size of union and struct with the same members"<<endl;
    cout<<"UNION SIZE "<<sizeof(person1)<< " BYTES"<< endl;
    cout<<"STRUCT SIZE "<<sizeof(student1)<<" BYTES"<<endl;
    return 0;
}
