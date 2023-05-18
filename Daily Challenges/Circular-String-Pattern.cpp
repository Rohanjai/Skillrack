#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    string s;
    cin>>n>>s;
    int ind=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<s[ind];
            ind=(ind+1) %s.size();
            
        }
        cout<<endl;
    }


}
