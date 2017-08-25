#include<iostream>
using namespace std;
bool Multiple(int n)
{
   if(n%5 ==0)
     return true;
   else
     return false;
}
int main()
{
char a[50];
float b;
int c;
double d, e, f, g;
cout<<"Hi! Enter your name ";
cin>>a;
cout<<"Enter a number(decimal):";
cin>>b;
cout<<"Enter another number:";
cin>>c;
cout<<"Your name is "<<a;
cout<<"."<<endl;
d=b+c;
cout<<"Sum="<<d<<endl;
e=b-c;
cout<<"Difference="<<e<<endl;
f=b*c;
cout<<"Product="<<f<<endl;
g=b/c;
cout<<"Divide="<<g<<endl;
   int p;
   cout<<"Enter a number=";
   cin>>p;
   if (Multiple(p))
   cout<<"Number is a multiple of 5."<<endl;
   else
   cout<<"Number is not a multiple of 5."<<endl;
}
