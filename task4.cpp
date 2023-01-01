#include<iostream>
using namespace std;
void ename(string myname);
main()
{  string myname;
    ename(myname);
}
   void ename(string myname)
   {
    cout<<"enter your name";
    while(true)
    {
       cin>>myname;
       if(myname=="asad")
       {
       cout<<myname<<endl;
       }
     }
   }