#include<bits/stdc++.h>
using namespace std;


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n+1);
        for(int i=1; i<=n; i++)
            cin>>a[i];
        
        vector<int> b = a;
        reverse(b.begin()+1, b.end());

        int ans = 0; int x = 1;

        while(x < n){
            if(b[x+1] == b[1]){
                x++;
                continue;
            }
            ans++;
            x *= 2;
        }
        cout<< ans << endl;
    }   
}
