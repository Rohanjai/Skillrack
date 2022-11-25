#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    long long int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    float sum=0;
    for(int i=1;i<n-1;i++){
        sum+=arr[i];
    }
    double avg=sum/(n-2);
    printf("%.2f",avg);


}