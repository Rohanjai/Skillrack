#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int>st(arr.begin(),arr.end());
    
    for(int i=1;i<=n;i++){
        if(st.find(i)==st.end()){
            cout<<i<<" ";
        }
    }
    


}
