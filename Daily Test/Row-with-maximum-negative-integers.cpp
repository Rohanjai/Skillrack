#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
int a,b;
cin>>a>>b;
int pos;
int arr[a][b];
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        cin>>arr[i][j];
    }
}
int max=0;
int flag=0;
for(int i=0;i<a;i++){
    int count=0;
    for(int j=0;j<b;j++){
        if(arr[i][j] < 0){
            count++;
        }
    }
    if(count > max){
        flag=1;
        pos = i;
        max=count;
    }
}
if(flag){
    for(int j=0;j<b;j++){
        cout<<arr[pos][j]<<" ";
    }
}
else{
    cout<<"-1";
}
  
}