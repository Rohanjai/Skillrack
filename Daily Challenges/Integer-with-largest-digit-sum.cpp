#include <bits/stdc++.h>
using namespace std;
int getSum(int n){
    if(n == 0)
    return 0;
    
    return (n%10)+getSum(n/10);
}
int main(int argc, char** argv)
{
    int n;
    
    cin>>n;
    
    int maxSum = 0;
    int ele = 0;
    for(int i = 1;i<=n;i++){
        int s = getSum(i);
        
        if(s>=maxSum){
            maxSum = s;
            ele = i;
        }
    }
    
    cout<<ele;
    return 0;


}