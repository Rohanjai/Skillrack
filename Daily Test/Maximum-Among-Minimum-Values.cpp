#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    vector<int>ans;
    for(int i=0;i<n;i+=3){
        ans.push_back(min({arr[i],arr[i+1],arr[i+2]}));
    }
    
    cout<<*max_element(ans.begin(),ans.end());
    


}