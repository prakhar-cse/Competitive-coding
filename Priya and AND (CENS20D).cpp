#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false)
  

using namespace std;

int main()
{
	IOS;
	cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n,c=0;
    	cin>>n;
    	int A[n];
    	for(int i=0;i<n;i++){
    		cin>>A[i];
		}
		
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(A[i] == (A[i] & A[j]))
				c++;
			}
		}
       
//code 
cout<<c<<endl;

    }

    return 0;
}
