#include<iostream>
using namespace std;
void evenodd(int number1);
main()
{
 int number1;
 evenodd(1);
}
  void evenodd(int number1)
  {
    int module;
    cout<<"enter first number"<<endl;
   
    module =number1%2;
    if(module==0)
    {
     cout<<"the nunber is even"<<endl;

    }
    if(module!=0)
    {
      cout<<"number is odd";
    }
}