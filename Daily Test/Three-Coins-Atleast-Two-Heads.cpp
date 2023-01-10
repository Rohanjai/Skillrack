#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,ctr=0;
    cin>>n;
    string s;
    scanf("\n");
    for(int i=0;i<n;i++){
        getline(cin,s);
        if(count(s.begin(),s.end(),'H')>=2) ctr++;
    }
    cout<<ctr;
    
    


}