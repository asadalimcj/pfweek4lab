#include<iostream>
using namespace std;
void ename(string myname);
main()
{  string myname;
  
  while(true)
  {
   ename(myname);
  }
  

}
 void ename(string myname)
 {
   cin>>myname;
   if(myname=="asad")
   {
      cout<<myname;
   }
 }