#include<bits/stdc++.h> 
using namespace std;
 int main()
 {
     int a,b,c;
     cout<<"enter the values of a,b,c";
     cin>>a>>b>>c;
     if (a>=b && a>=c)
     cout<<"a is greater";
     else if (b>=a && b>=c)
     cout<<"b is greater";
     else 
     cout<<"c is greater";

     return 0;
 }