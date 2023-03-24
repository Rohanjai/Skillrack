#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int p;
    cin>>p;
    if(p<=1000){
        cout<<fixed<<setprecision(2)<<(float)p*0.1;
    }
    else{
        cout<<fixed<<setprecision(2)<<((float)(p-1000)*0.05 + 100);
    }


}