#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    for(string s:arr){
        int x =s.size();
        l=max(l,x);
    }
    for(string s:arr){
        if(s.size()<l){
            for(int i=0;i<l-s.size();i++){
                cout<<"*";
            }
        }
        cout<<s<<endl;
    }


}
