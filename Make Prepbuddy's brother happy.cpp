#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
  //write your code here
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  long long int n,k,sum=0;
  cin>>n>>k;
  long long int A[n];
  for(int i=0;i<n;i++)
  cin>>A[i];
  
  
  sort(A,A+n);
  
  
  
    for(int i=n-1;i>=(n-k);i--){
      sum += A[i];
    }
  
  
  cout<<sum<<endl;
  return 0;
}
