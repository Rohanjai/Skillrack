#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x,y,z;
    cin>>x>>y>>z;
    int a =x*y,b=y*z,c=z*x;
   set<int> s;
   s.insert(a);
   s.insert(b);
   s.insert(c);
   int sum=0;
   for(auto i:s){
       sum+=i;
   }
   cout<<sum;


}