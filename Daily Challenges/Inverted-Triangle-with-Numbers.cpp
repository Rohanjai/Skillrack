#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int n;
    
    cin >> n;
    int odd=1, even=1, counter=n;
    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<i; k++)
        cout << "- ";
        
        for(int j=n; j>=i; j--)
        {
            if(i%2!=0){
                cout << odd;
                if(j!=i) cout << " * ";
                odd++;
            }
            else {
                if(j==n)
                even=odd+counter-1;
                
                cout << even;
                if(j!=i) cout << " * ";
                even--;
                odd++;
            }
        }
        counter--;
        cout << endl;
    }
}