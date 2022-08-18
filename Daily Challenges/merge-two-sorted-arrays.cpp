#include <bits/stdc++.h>
 
using namespace std;

void main(int argc, char** argv)
{
    int m,n;
    cin>>m>>n;
    int val;
    vector<int> nums;
    for(int i = 0 ;i<n+m;i++){
        cin>>val;
        nums.push_back(val);
    }
    sort(nums.begin(),nums.end(),greater<int>());
    for(int num:nums){
        cout<<num<<" ";
    }
}