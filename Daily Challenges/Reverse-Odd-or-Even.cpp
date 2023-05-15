#include <bits/stdc++.h>
 
using namespace std;
void print(vector<int> &a,vector<int> &b){
    reverse(a.begin(),a.end());
    for(int i:a){
        cout<<i<<" ";
    }
    for(int i:b){
        cout<<i<<" ";
    }
}
int main(int argc, char** argv)
{
    int n,oc=0,ec=0;
    cin>>n;
    vector<int> even,odd,arr;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(t&1){
            oc++;
            odd.push_back(t);
        }
        else{
            ec++;
            even.push_back(t);
        }
        arr.push_back(t);
    }
    if(oc==ec){
        reverse(arr.begin(),arr.end());
        for(int i:arr){
            cout<<i<<" ";
        }
    }
    else if(ec>oc){
        print(even,odd);
    }
    else{
        print(odd,even);
    }
    
    
    
    
    


}
