#include<iostream>
using namespace std;
float area(int, float pi=3.14);
int main()
{
 int r;
 float ans;
 cout<<"Enter any value of radius: ";
 cin>>r;
 ans = area(r);
 cout<<"Area of Circle = "<<ans;
 return 0;
}
float area(int r, float pi)
{
 float a = pi * r * r;
 return(a);
 }