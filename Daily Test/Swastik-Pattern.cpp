#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
int n;cin>>n;

int half = n/2;

int k = half+1;

cout<<1<<" ";
for(int j=1;j<half;j++) cout<<"* ";
for(int j = k;j>=1;j--) cout<<j<<" ";
cout<<"\n";
for(int i=2;i<=half;++i){
    cout<<i<<" ";
    for(int j=1;j<half;j++)
    cout<<"* ";
    cout<<++k<<" ";
    for(int j=1;j<=half;j++)
    cout<<"* ";
    cout<<"\n";
}

for(int j=half+1;j<n;j++) cout<<j<<" ";
for(int j=n;j>half;j--) cout<<j<<" ";
cout<<"\n";

for(int i = half+1;i>2;i--){
    for(int j=1;j<=half;j++)
    cout<<"* ";
    cout<<k--<<" ";
    for(int j=1;j<half;j++)
    cout<<"* ";
    cout<<i-1<<"\n";
}

for(int j=1;j<=half+1;j++)
cout<<j<<" ";
for(int j=1;j<half;j++)
cout<<"* ";
cout<<1;

}