#include <bits/stdc++.h>
using namespace std;

int  first(string s,int i=0)
{
  if(s[i] == '\0') return -1;
  if(isupper(s[i])) return i;
  
  return first(s,i+1);
  
  
}


int main()
{
  //write your code here
  int t;
  cin>>t;
  
  while(t--){
    string s;
    cin>>s;
    int res = first(s);
    
   cout<<res<<endl;
  
    
  }
  
  
  return 0;
}
