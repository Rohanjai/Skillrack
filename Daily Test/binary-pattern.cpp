#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                cout<<0;
            }
            else{
                cout<<1;
            }
        }
        cout<<endl;
    }


}