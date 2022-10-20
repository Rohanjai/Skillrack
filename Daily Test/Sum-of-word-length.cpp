#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    vector<string> arr;
    while(cin>>s){
        arr.push_back(s);
    }
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i].length();
    }
    cout<<sum;


}