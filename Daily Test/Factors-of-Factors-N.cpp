#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            arr.push_back(i);
        }
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        for(int j=1;j<=arr[i];j++){
            if(arr[i]%j==0){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }


}