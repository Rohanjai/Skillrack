#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[10]={0};
    while(n>0){
        arr[n%10]++;
        n/=10;
    }
    int val=0;
    while(val<10){
        cout<<arr[val];
        val++;
    }


}