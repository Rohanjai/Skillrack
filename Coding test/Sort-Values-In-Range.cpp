#include <bits/stdc++.h>
 
using namespace std;
int x,y;
bool check(int n){
    if((n>=x and n<=y) or(n>=y and n<=x)){
        return true;
    }
    return false;
}
int main(int argc, char** argv)
{
    int n,cnt=0;
    cin>>n>>x>>y;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // if(check(arr[i])){
        //     cnt++;
        // }
        
    }
    //cout<<cnt<<endl;
    vector<int> ans;
    for(int i:arr){
        if(check(i)){
            ans.push_back(i);
        }
    }
    sort(ans.begin(),ans.end());
    int ctr=0;
    for(int i=0;i<n;i++){
        if(!check(arr[i])){
            continue;
        }
        if(check(ans[ctr]) and check(arr[i])){
            arr[i]=ans[ctr++];
        }
        
    }
    for(int i:arr){
        cout<<i<<" ";
    }
    


}