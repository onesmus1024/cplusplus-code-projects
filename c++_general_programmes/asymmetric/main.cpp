#include <iostream>
#include <string>
#include<sstream>
#include <math.h>
#include <cstring>

using namespace std;
char  message[]= "ABCD"; //plain text
int ciphertext;//encrypted message
int n;
int phi;
void encryptionFun(char message[],int e, int phi);
void decryptionFun(int ciphertext, int d, int phi);

int main()
{
    int e;
    int d;
    int p;
    int q;
    p = 3;
    q = 7;
    n = p*q;
    e=5;
    d= 12;
    phi =(p-1)*(q-1);
    encryptionFun(message,e,phi);
    decryptionFun(ciphertext,d,phi);

    return 0;
}
void encryptionFun(char message[],int e, int phi)
{
    unsigned int i=0;
    while(i<strlen(message))
    {
    cout<<message<<endl;
    int messagenum = message[i];
    cout<<messagenum<<endl;
    ciphertext = pow(messagenum,e);
    ciphertext = ciphertext%phi;
    char ciphertxtstring[strlen(message)] ;
    ciphertxtstring[i]= ciphertext;
    cout<<"the ciphertext is "<<ciphertxtstring[i];
    i++;
    }
}
void decryptionFun(int ciphertext, int d, int phi)
{   stringstream ss;
    int decryptedmessage = pow(ciphertext,d);
    decryptedmessage%=phi;
    ss << decryptedmessage;
    string decryptedmessagestring = ss.str();
    cout<<"the decrypted message is "<<decryptedmessagestring<<endl;
}

