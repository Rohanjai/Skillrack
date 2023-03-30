#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x;
    cin>>n>>x;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    for(int i=0;i<n;i+=x){
        int m=arr[i];
        for(int j=i;j<i+x;j++){
            m=min(m,arr[j]);
        }
        cout<<m<<" ";
    }


}