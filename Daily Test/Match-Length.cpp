#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    vector<pair<string,int>> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        string s;
        cin>>s>>x;
        arr.push_back({s,x});
    }
    for(int i=0;i<n;i++){
        cout<<arr[i].first<<" ";
        int cmp = arr[i].first.size();
        for(int j=0;j<n;j++){
            if(cmp==arr[j].second){
                cout<<j+1<<endl;
            }
        }
    }


}