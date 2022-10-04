#include <bits/stdc++.h>
 
using namespace std;
void countodd(int arr[],int n){
    int odd=0;
    vector<int> vleft,vright;
    vleft.push_back(odd);
    for(int i=0;i<n-1;i++){
        if(arr[i]%2!=0){
            odd++;
        }
        vleft.push_back(odd);
    }
    odd=0;
    vright.push_back(odd);
    for(int i=n-1;i>0;i--){
        if(arr[i]%2!=0){
            odd++;
        }
        vright.push_back(odd);
    }
    reverse(vright.begin(),vright.end());
    for(int i=0;i<vleft.size();i++){
        if(vleft[i]==vright[i]){
            cout<<arr[i]<<" ";
        }
        else{
            cout<<"-1"<<" ";
        }
    }
}
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    countodd(arr,n);


}