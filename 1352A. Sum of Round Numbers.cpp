
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    while(n--){
        long long int a,c=1,d;
        cin>>a;
        std::vector<long long int>v={};
        
        while(a){
            d=a%10;
            a/=10;
            if(d!=0)
            v.push_back(d*c);
            c*=10;
            
        }
        
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        
        cout<<endl;
    }
    
    return 0;
}
