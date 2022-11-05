#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    bool present=false;
    int n;
    cin>>n;
    int arr[n];
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    int sum=0;
    for(auto i=s.begin();i!=s.end();i++){
        if(count(arr,arr+n,*i)>1){
            sum+=*i;
            present=true;
        }
    }
    cout<<(present? sum: -1);


}