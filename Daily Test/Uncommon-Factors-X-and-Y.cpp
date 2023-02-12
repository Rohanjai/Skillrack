#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x,y;
    cin>>x>>y;
    if(x==y){
        cout<<-1;
        return 0;
    }
    set<int> arr,mat;
    vector<int> ans;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            arr.insert(i);
        }
    }
    for(int i=1;i<=y;i++){
        if(y%i==0){
            mat.insert(i);
        }
    }
    for(int i=1;i<=x;i++){
        if(x%i==0 and mat.find(i)==mat.end()){
            ans.push_back(i);
        }
    }
    for(int i=1;i<=y;i++){
        if(y%i==0 and arr.find(i)==arr.end()){
            ans.push_back(i);
        }
    }
    sort(ans.begin(),ans.end());
    for(auto i: ans){
        cout<<i<<" ";
    }
    


}