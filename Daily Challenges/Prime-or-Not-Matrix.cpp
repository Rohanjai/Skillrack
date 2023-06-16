#include <bits/stdc++.h>
 
using namespace std;
bool isPrime(int x){
    if(x==1){
        return false;
    }
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)
            return false;
    }
    return true;
}
int main(int argc, char** argv)
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>>arr(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
            if(isPrime(arr[i][j])){
                cout<<"1 ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    


}
