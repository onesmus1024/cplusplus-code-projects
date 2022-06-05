#include<iostream>
using namespace std;
void tower(int n,char source , char destination , char via)
{
    if(n==1)
    {
        cout<<"Moved the ring "<<n<<"   from    "<<source<<"   to   "<<destination<<"   via   "<<via<<"\n";

    }else{
        tower(n-1,source,via,destination);
        cout<<"Moved the ring "<<n<<"   from     "<<source<<"   to   "<<destination<<"   via   "<<via<<"\n";
        tower(n-1,via,destination,source);
    }
}

int main()
{
    int rings;
    char source ='S';
    char destination='D';
    char via='A';

    cout<<"Enter number of rings :";
    cin>>rings;

    tower(rings,source,destination,via);

    return 0;
}