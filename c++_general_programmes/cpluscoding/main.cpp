#include <iostream>

using namespace std;

class pet
{
public:
    int number_of_legs;
    string name;
public:
     pet(string,int);
     int getdetail()
    {
       return number_of_legs;
    };
};//end of class

//definition of class constructor
pet::pet(string name1,int number_of_legs1){
        name=name1;
        number_of_legs=number_of_legs1;

};

int main()
{
    pet pet1("dog",4);
    pet * pet2 = new pet("cat",6);
    cout<<"my pet has got "<<pet2->name<<" legs"<<endl;
    return 0;
}
