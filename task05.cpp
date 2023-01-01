#include<iostream>
using namespace std;
void larger(int number1, int number2);
main()
{
  int number1;
  int number2;
  cout<<"enter one numbers";
  cin>>number1;
  cout<<"enter second number";
  cin>>number2;
  larger(number1, number2);


}
  void larger(int number1, int number2)
  {
    if(number1>number2)
    {
      cout<<"first number is greater";
    }
      if(number1<number2)
      {
        cout<<"number two is greater";
      }
  }