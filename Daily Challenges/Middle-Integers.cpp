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
    int mid=n/2;
    if(arr.size()%2!=0){
        cout<<arr[mid-1]<<" "<<arr[mid]<<" "<<arr[mid+1];
    }
    else{
        cout<<arr[mid-2]<<" "<<arr[mid-1]<<" "<<arr[mid]<<" "<<arr[mid+1];
    }


}