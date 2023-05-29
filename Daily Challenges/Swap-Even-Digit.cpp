#include <bits/stdc++.h>
 
using namespace std;
long long int f(string str)
{
    
    int size=str.size();
    for(int i=0;i<size;i++)
    {
        if(str[i]%2==0)
        {
            int j=i+1;
            while(j<size)
            {
                if(str[j]%2==0)
                {
                    swap(str[i],str[j]);
                    i=j;
                    break;
                }
                j++;
            }
        }
    }
    return stoll(str);
}
int main()
{
    int n;
    cin>>n;
    string temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        cout<<f(temp)<<endl;
        
    }

}
