#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
int n,k=1,l=1;
cin>>n;
if(n>0){
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j<=i)
        cout<<k++<<" ";
        else cout<<"* ";
    }cout<<endl;
}
}
else{
for(int i=1;i<=abs(n);i++){
    for(int j=1;j<=abs(n);j++){
        if(i+j<=abs(n))cout<<"* ";
        else {cout<<k--<<" ";l++;}
    }
    k=l+i;
    cout<<endl;
}
}

}
