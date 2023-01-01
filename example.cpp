#include<iostream>
using namespace std;
void add();
void product();
main()
{
  add();
  
  product();
  add();
  product();


}

  void add()
  {
  int number2;
  int number1;
  int sum;
  cout<<"enter first number";
  cin>>number1;

  cout<<"enter second number";
  cin>>number2;
  sum = number1+number2;

  cout<<"the sum"<<sum<<endl;
  
  }
  void product()
  {
  int number1;
  int number2;
  int product;
  cout<<"enter first number";
  cin>>number1;
  cout<<"enter second number";
  cin>>number2;
  product = number1*number2;
  cout<<"product is :"<<product<<endl;


  }