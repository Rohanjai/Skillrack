#include <bits/stdc++.h>
 
using namespace std;
int a,b,c;
bool check(int &x){
    if(x%a==0 and x%b==0){
        return 1;
    }
    else if(x%b==0 and x%c==0){
        return 1;
    }
    else if(x%c==0 and x%a==0){
        return 1;
    }
    return 0;
}
int main(int argc, char** argv)
{
    int n;
    cin>>n>>a>>b>>c;
    for(int i=1;i<=n;i++){
        if(check(i)){
            cout<<i<<" ";
        }
    }


}
