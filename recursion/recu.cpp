#include<iostream>
using namespace std;

int testrecursion(int n);
int main(){

    int k;
    cout<<"enter a number "<<endl;
    cin>>k;
    cout<<testrecursion(k)<<endl;
    return 0;
}

int testrecursion(int n){
    if(n==1){
        return n;
    }
    else{
        return testrecursion(n-1);
    }
}
