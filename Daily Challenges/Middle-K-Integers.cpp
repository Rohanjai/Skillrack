#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mid = n/2 - k/2 + k-1;
    for(int i=0;i<k;i++){
        cout<<arr[mid--]<<" ";
    }
    

}
