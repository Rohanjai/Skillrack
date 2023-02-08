#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int n=s.size();
    int x=stoi(s);
    if(x&1){
        swap(s[n-2],s[n-1]);
        cout<<s;
        return 0;
    }
    else{
        for(int i=0;i<n-2;i++){
            cout<<s[i];
        }    
    }
    


}