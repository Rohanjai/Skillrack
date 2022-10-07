#include <bits/stdc++.h>
using namespace std;
void findElement(int arr[],int n){
    int ls=0;
    vector<int> vleft,vright;
    vleft.push_back(ls);
    for(int i=0;i<n-1;i++){
        ls+=arr[i];
        vleft.push_back(ls);
    }
    int rs=0;
    vright.push_back(rs);
    for(int i=n-1;i>0;i--){
        rs+=arr[i];
        vright.push_back(rs);
    }
    reverse(vright.begin(),vright.end());
    for(int i=0;i<vleft.size();i++){
        cout<<vleft[i]<<" "<<vright[i]<<endl;
        if(vleft[i]==vright[i]){
            cout<<arr[i]<<" ";
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
    findElement(arr,n);

}