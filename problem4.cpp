#include<iostream>
#include<string>
using namespace std;
int main()
{
  string a,b;
  cout<<"Enter any string:"<<endl;
  getline(cin,a);
  cout<<"Enter another string:"<<endl;
  getline(cin,b);
  cout<<endl;
  if(a==b)
    {
     cout<<"Duplicate."<<endl;
  }else
  {
     cout<<"Different.";
  }
  return 0;
}
