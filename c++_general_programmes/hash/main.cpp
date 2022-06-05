#include <iostream>
#include <string>
#include <sstream>

using namespace std;
unsigned long int hashFun(string message,unsigned long int hashtext[]);

int main()
{
    string message;
    stringstream digest;
    string digestHex;
    unsigned long int hashtext[100];
    string hashHex[100];
    cout << "ENTER YOUR TEST TO PRODUCE IT'S DIGEST" << endl;
    getline(cin,message);
    hashFun(message,hashtext);
    for(unsigned int i=0;i<message.length();i++)
    {
        digest<<hex<<hashtext[i];
        hashHex[i] = digest.str();
    }
    cout<<".........DIGEST IS........."<<endl;
    for(unsigned int i=0;i<message.length();i++)
    {
        cout<<hashHex[i];
    }
    return 0;
}

unsigned long int hashFun(string message,unsigned long int hashtext[])
{
    int magic = 100;
    for(unsigned int i=0;i<message.length();i++)
    {
            hashtext[i] = message[i]^magic;
            hashtext[i] = hashtext[i]*magic;

    }

    return 0;
}
