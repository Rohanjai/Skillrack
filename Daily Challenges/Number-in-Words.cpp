#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    unordered_map<int,string> map = {{1,"one"},{0,"zero"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"}};
    int n;
    cin>>n;
    vector<string> arr;
    while(n>0){
        arr.push_back(map[n%10]);
        n/=10;
    }
    for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}