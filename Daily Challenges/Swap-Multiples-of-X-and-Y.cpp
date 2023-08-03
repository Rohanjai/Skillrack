#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x,y;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x>>y;
    auto it1=find_if(arr.begin(),arr.end(),[x](int i){
        return i%x==0;
    });
    auto it2=find_if(arr.rbegin(),arr.rend(),[y](int i){
        return i%y==0;
    });
    int a = distance(it2,arr.rend()) -1;
    int b = distance(arr.begin(),it1);
    swap(arr[a],arr[b]);
    for(int i:arr){
        cout<<i<<" ";
    }


}
