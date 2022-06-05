#include <iostream>

using namespace std;
int main ()
{
    float weight;
    float height;
    float BMI;
  cout<<"enter your height and weight to calculate your body mass index(BMI)"<<endl;
  cout<<"enter your height in inches"<<endl;
  cin>>height;
  cout<<"enter your weight in kg"<<endl;
  cin>>weight;
  BMI = weight/(height*height);
  if(BMI>=18.5&BMI<=25)
  {
      cout<<"YOUR WEIGHT IS OPTIMAL!"<<endl;
  }
  else if (BMI<18.5)
  {
      cout<<"YOUR WEIGHT UNDERWEIGHT"<<endl;
  }
  else if(BMI>25)
  {
    cout<<" YOUR WEIGHT IS OVER WEIGHT"<<endl;
  }
  else
  {
      cout<<"invalid input try again"<<endl;
  }
    return 0;
}
