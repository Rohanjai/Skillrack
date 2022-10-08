#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int val1=1,val2=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==val1 || j ==val2){
                cout<<j;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
        if(val1==val2){
            break;
        }
        val1++;
        val2--;
    }


}