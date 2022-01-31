#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string str;
        cin >> str;
        int l=0, h=n+1;
        while(h - l > 1)
        {
            int mid = (h+l) /2;
            int ops = 0;
            for(int i=mid-1; i>=0; i--){
                 int req = (ops + str[i] - '0')%10;
                 if(req != 0)
                    ops += 10 - req;
            }
            if(ops <= k)
               l = mid;
            else
               h = mid;
        }
        cout<<l<<endl;
    }
}
