#include <bits/stdc++.h>
 
using namespace std;
bool checkCol(vector<vector<char>> &arr,int &r,int &c,string &s){
    unordered_set<char> st(s.begin(),s.end());
    for(int i=0;i<c;i++){
        unordered_set<char> ans;
        for(int j=0;j<r;j++){
            if(st.find(arr[j][i])!=st.end()){
                ans.insert(arr[j][i]);
            }
        }
        if(st==ans){
            return true;
        }
    }
    return false;
}
bool checkRow(vector<vector<char>> &arr,int &r,int &c,string &s){
    unordered_set<char> st(s.begin(),s.end());
    for(int i=0;i<r;i++){
        unordered_set<char> ans;
        for(int j=0;j<c;j++){
            if(st.find(arr[i][j])!=st.end()){
                ans.insert(arr[i][j]);
            }
        }
        if(ans==st){
            return true;
        }
    }
    return false;
}
int main(int argc, char** argv)
{
    int r,c;
    cin>>r>>c;
    vector<vector<char>> arr(r,vector<char>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    string s;
    cin>>s;
    if(checkRow(arr,r,c,s) or checkCol(arr,r,c,s)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}
