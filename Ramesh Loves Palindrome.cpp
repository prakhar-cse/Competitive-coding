#include <bits/stdc++.h>
#define NO_OF_CHARS 256
#define endl "\n"
using namespace std;

int main()
{
  //write your code here
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int t;cin>>t;
  while(t--)
  {
    int n,c=0;
    cin>>n;
    while(n--){
      string s;
      cin>>s;
      
      int count[NO_OF_CHARS] = {0}; 
      for (int i = 0; s[i];  i++) 
        count[s[i]]++; 
     int odd = 0; 
    for (int i = 0; i < NO_OF_CHARS; i++) 
      { 
        if (count[i] & 1) 
            odd++; 
  
            } 
     
      if (odd == 1 || odd ==0) 
       c++;
    
        }
    
    cout<<c<<endl;
      }
  return 0;
}
