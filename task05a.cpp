#include<iostream>
using namespace std;
void larger(int number1, int number2);
main()
{
  int number1;
  int number2;
  larger(26, 24);


}
  void larger(int number1, int number2)
  {
    
    if(number1>number2)
    {
      cout<<"first number is greater";
    }
     if(number1<number2)
     {
      cout<<"second number greater";
     }
  }