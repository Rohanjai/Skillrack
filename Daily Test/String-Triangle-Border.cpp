#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string S;
    cin>>S;
    int first, second, third, len=S.size()/3, last, odd=1;
    first=0, second=len, last=S.size()-1;
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len-i; j++)
        {
            cout<<"-";
        }
        if(i==0)
            cout<<S[first++];
        else
        {
            cout<<S[last--];
            for(int j=0; j<odd; j++)
            {
                cout<<"-";
            }
            odd+=2;
            cout<<S[first++];
        }
        cout<<endl;
    }
    for(int i=0; i<=len; i++)
    {
        cout<<S[last--];
        if(i<len)
            cout<<"-";
    }
}