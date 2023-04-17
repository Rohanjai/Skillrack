#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x;
    cin>>n>>x;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long s=0;
    for(string i:arr){
        if(i.size()!=x){
        long a = stol(i);
        s+=a;
        }
    }
    cout<<(s==0 ? -1: s);


}