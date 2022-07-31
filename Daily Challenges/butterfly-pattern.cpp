#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int N; cin >> N;
    int pre = 0, mid = N-2, ctr = 1, len = N/2+1, tog=1;
    if(N==1){
        cout << 0;
        return 0;
    }
    for(int i=1; i<=N; i++){
        cout << string(pre, '-');
        string pat = "", patRev = "";
        for(int j=1; j<=len; j++){
            pat+=to_string(ctr)+"-";
            patRev = to_string(ctr)+"-"+patRev;
            ctr++;
        }
        pat.pop_back();
        patRev.pop_back();
        cout << (tog&1 ? pat : patRev);
        if(i!=N/2+1) cout << string(mid, '-') << (tog&1 ? patRev : pat);
        cout << endl;
        if(i<=N/2) pre+=3, mid-=2, len--;
        else pre-=3, mid+=2, len++;
        if(i==N/2) ctr=0, tog = 1;
        else tog^=1;
    }
}