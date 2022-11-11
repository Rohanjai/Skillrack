#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    vector<string> arr;
    while(cin>>s){
        arr.push_back(s);
    }
    for(int i=0;i<arr.size();i++){
        if(i==0 || i==arr.size()-1)
        cout<<arr[i]<<" ";
        else{
            reverse(arr[i].begin(),arr[i].end());
            cout<<arr[i]<<" ";
        }
    }
    

}