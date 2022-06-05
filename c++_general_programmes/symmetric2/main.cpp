#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int lenght;

void encrypt(int key,string message,char cipher[]);
void decrypt(int key,char cipher[],char plaintxt[]);

int main()
{
    string message;
    char cipher[100];
    char plaintxt[100];
    int key = 2;
    cout<<"enter plain text to encrypt"<<endl;
    getline(cin,message);
    encrypt(key,message,cipher);
    decrypt(key,cipher,plaintxt);
    return 0;
}

void encrypt(int key,string message,char cipher[])
{
    cout<<"cipher text is ";
    for(unsigned int i =0;i<message.length();i++)
    {
        cipher[i] = message[i]^key;
        cout<<cipher[i];
    }
    lenght = message.length();
    cout<<endl;
}


void decrypt(int key,char cipher[],char plaintext[])
{
    cout<<"plain text after decryption is ";

    for(unsigned int i=0;i<lenght;i++)
    {
        plaintext[i]=cipher[i]^key;
        cout<<plaintext[i];
    }

}
