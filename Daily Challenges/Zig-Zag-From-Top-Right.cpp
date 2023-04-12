#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,cnt=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        vector<int> arr(n);
        for(int j=0;j<n;j++){
            arr[j]=cnt++;
        }
        if(i&1){
            reverse(arr.begin(),arr.end());
        }
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }


}