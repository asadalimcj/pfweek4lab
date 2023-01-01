  #include<iostream>
  using namespace std;
  void add(int number1, int number2);
  void product(int number1, int number2);
  void subtract(int number1, int number2);
  void division(int number1, int number2);
  main()
{
    int number1;
    int number2;
    cout<<"enter number one:";
    cin>>number1;
    cout<<"enter second number";
    cin>>number2;
    char operation;
    cout<<"enter operator";
    cin>>operation;
    if(operation== '+')
   {
      add(number1, number2);
   }
    if(operation=='-')
   {
      subtract(number1, number2);
   }
    if(operation== '*')
   {
      product(number1, number2);
   }
    if(operation =='/')
   {
    division(number1, number2);
   }
}
  void add(int number1, int number2)
  {
  int sum;
  sum = number1+number2;
  cout<<"the sum is :"<<sum<<endl;
  }
   void product(int number1, int number2)
  {
  int multiply;
  multiply = number1*number2;
  cout<<" the product is :"<<multiply<<endl;
  }

  void subtract(int number1, int number2)
  {
  int subtraction;
  subtraction = number1-number2;
  cout<<"the negative is :"<<subtraction<<endl;
  }
    void division(int number1, int number2)
  {
     int divide;
     divide = number1/number2;
     cout<<"the division is :"<<divide;

  }