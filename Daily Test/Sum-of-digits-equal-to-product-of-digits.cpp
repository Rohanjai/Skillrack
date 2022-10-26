#include <bits/stdc++.h>
 
using namespace std;
bool isSame(int n){
    int sum=0,pro=1;
    while(n>0){
        sum+=n%10;
        pro*=n%10;
        n/=10;
    }
    if(sum==pro){
        return true;
    }
    else{
        return false;
    }
}
int main(int argc, char** argv)
{
    int n1,n2;
    bool printed=false;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++){
        if(isSame(i)){
            cout<<i<<" ";
            printed=true;
        }
    }
    if(!printed){
        cout<<-1;
    }


}