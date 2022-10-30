#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    unsigned long long int N;
    cin>>N;
    int arr[10]={0};
    while(N>0){
        arr[N%10]++;
        N/=10;
    }
    int ctr=1;
    while(ctr<=9){
        if(arr[ctr]>ctr){
            cout<<"No";
            return 0;
        }
        ctr++;
    }
    cout<<"Yes";


}