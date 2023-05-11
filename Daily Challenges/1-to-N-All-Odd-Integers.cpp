#include <bits/stdc++.h>
 
using namespace std;
bool isodd(int x){
    while(x>0){
        if(x%10%2==0)
            return false;
        x/=10;
    }
    return true;
}
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(isodd(i)){
            cout<<i<<" ";
        }
    }


}
