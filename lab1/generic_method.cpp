#include<iostream>
using namespace std;
#define SIZE 10
template<typename T>

T linearSearch(T arr[],T searchkey){
    for(int i=0;i<SIZE;i++){
        if(searchkey == arr[i]){
            return i;
            break;
        }
    };
    return -1;
};

int main(){
    int searchkeyinteger = 34;
    double searchkeydouble =89.0;
    char searchkeychar = 'a';
    int arrwithinteger[SIZE]={10,20,30,31,42,45,12,34,33,40};
    double arrwithdouble[SIZE]={50.1,70.0,60.0,80.0,70.0,90.0,89.0,70.2,95.0,99.0};
    char arrwithcharacter[SIZE]={'a','c','y','t','u','k','d','r','s','t'};
    cout<<linearSearch(arrwithinteger,searchkeyinteger)<<endl;
    cout<<linearSearch(arrwithdouble,searchkeydouble)<<endl;
    cout<<linearSearch(arrwithcharacter,searchkeychar)<<endl;
    
    return 0;
}