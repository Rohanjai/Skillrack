#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<char>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=tolower(arr[i]);
    }
    reverse(arr.begin(),arr.end());
    for(char &c:arr){
        int x = c-'a';
        cout<<x+1<<" ";
    }
    


}
