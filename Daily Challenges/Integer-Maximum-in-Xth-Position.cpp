#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<string> arr;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        arr.push_back(s);
    }
    int x;
    cin>>x;
    char mx='0';
    for(int i=0;i<n;i++){
        int l = arr[i].size();
        mx=max(arr[i][l-x],mx);
    }
    for(string i:arr){
        if(i[i.size()-x]==mx){
            cout<<i;
            break;
        }
    }
    
}
