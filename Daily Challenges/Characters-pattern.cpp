#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    char ch1,ch2;
    int n;
    cin>>ch1>>ch2>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<=i){
                cout<<ch1<<" ";
            }
            else{
                cout<<ch2<<" ";
            }
        }
        cout<<endl;
    }


}