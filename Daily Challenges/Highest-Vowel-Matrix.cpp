#include <bits/stdc++.h>
 
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);
    return (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u');
}
int getv(vector<vector<char>> &arr,int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(isVowel(arr[i][j])){
                cnt++;
            }
        }
    }
    return cnt;
}
void print(vector<vector<char>> &arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<vector<char>> arr(n,vector<char>(n));
    vector<vector<char>> mat(n,vector<char>(n));
    int cnt1 = getv(arr,n);
    int cnt2 = getv(mat,n);
    if(cnt1 >= cnt2){
        print(arr,n);
    }
    else{
        print(mat,n);
    }


}
