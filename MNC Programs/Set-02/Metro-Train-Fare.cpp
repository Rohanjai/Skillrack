#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    vector<string> stat;
    vector<int> dist;
    string st,dt;
    int x;
    cin>>n;
    for(int i=0;i<n;i++){
        string t;
        cin>>t;
        stat.push_back(t);
    }
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        dist.push_back(t);
    }
    cin>>st>>dt>>x;
    auto a=find(stat.begin(),stat.end(),st);
    auto b=find(stat.begin(),stat.end(),dt);
    int p=a-stat.begin(),q=b-stat.begin();
    int tot=0,i;
    for(i=p+1;i%n!=q;i++){
        tot+=dist[i%n];
    }
    tot+=dist[i%n];
    cout<<ceil(((float)tot/1000.0)*x);

}