#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string a,b;
    cin>>a>>b;
    int m=a.length()<b.length() ? a.length() : b.length();
    for(int i=0;i<m;i+=2){
            if(i+1<b.length()){
                swap(a[i],b[i+1]);
            }if(i+1<a.length()){
                swap(a[i+1],b[i]);
            }
    }cout<<a<<endl<<b;

}
