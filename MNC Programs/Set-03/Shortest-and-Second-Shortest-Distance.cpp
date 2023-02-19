#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    set<int> st(arr.begin(),arr.end());
    if(st.size()==1){
        cout<<"Equal";
        return 0;
    }
    else{
        cout<<arr[0]<<" ";
        for(int i=1;i<n;i++){
            if(arr[i-1]!=arr[i]){
                cout<<arr[i];
                break;
            }
        }
    }


}