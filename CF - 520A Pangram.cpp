#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    string s;
    cin>>s;
    
    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    bool a[26]={false};
    
    for(int i=0;i<n;i++){
        a[s[i]-'a']=true;
    }
    
    for(int i=0;i<26;i++){
        if(a[i]==true)
        c++;
    }
    
    // for(int i=0;i<26;i++){
    // cout<<a[i]<<" ";
    // }
    if(c==26)cout<<"YES\n";
    else
    cout<<"NO\n";
    
    

    return 0;
}
