#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	     int n, k;
	     cin>>n>>k;
	     if(n == 1 && k == 1){
	          cout<<"1";
	          cout<<endl;
	     }else if(k== 1){
	          cout<<"-1"<<endl;
	     }else{
	          for(int i=1; i<=k-1; i++){
	               cout<<i<<" ";
	          }    
     	     for(int i=n; i>=k; i--){
     	          cout<<i<<" ";
     	     }
	     cout<<endl;
	     }
	     
	}
	return 0;
}
