#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,c;
    cin>>n>>c;
    string name[n];
    string ip[n];
    string action[c];
    string ip1[c];
    int ip2[c];
    string add(";"); 
    
    for(int i=0;i<n;i++){
        cin>>name[i]>>ip[i];
    }
    
    for(int i=0;i<n;i++){
        ip[i] = ip[i]+add;
    }
    for(int i=0;i<c;i++){
        cin>>action[i]>>ip1[i];
        for(int j=0;j<n;j++){
           if(ip1[i] == ip[j]){
            ip2[i]=j;
        }
    }
    
    }
    
    
     for(int i=0;i<c;i++){
        cout<<action[i]<< " "<<ip1[i]<< " #"<<name[ip2[i]]<<endl;
    }
    
    
}
 
