#include <iostream>

using namespace std;

int main()
{
    string item;
    cout << "enter item to know it's price!" << endl;
    getline(cin,item);
    switch(){
    case "maize flour 1kg":
        cout<<"price 55 daddy's"<<endl;
        cout<<"lisha 50"<<endl;
        break;
    case "wheat flour 1kg":
        cout<<"price 70 soko"<<endl;
        break;
    case "sugar 1kg":
        cout<<"110"<<endl;
        break;
    case "rice 1kg":
        cout<<"price 90 "<<endl;
        break;
    case "cooking oil 1 litre":
        cout<<"200"<<endl;
        break;
    case "jik":
        cout<<"30"<<endl;
        break;
    case "topex":
        cout<<"20"<<endl;
        break;
    case "sawa":
        cout<<"50"<<endl;
        break;
    case "indomie":
        cout<<"30"<<endl;
        break;
    case "tissue rossy":
        cout<"25"<<endl;
        break;
    case "tissue toilets":
        cout<"30"<<endl;
        break;
    case "tissue neptune":
        cout<"25"<<endl;
        break;
    case "tissue stelly":
        cout<"20"<<endl;
        break;
    }
    return 0;
}
