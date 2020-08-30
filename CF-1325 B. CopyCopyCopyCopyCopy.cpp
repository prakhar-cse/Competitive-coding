    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int t;cin>>t;
        while(t--){
            int n;
            cin>>n;
            int A[n];
            for(int i=0;i<n;i++)
            cin>>A[i];
            
            unordered_set <int> s;
            int co=0;
            for(int i=0;i<n;i++){
                if(s.find(A[i])==s.end()){
                    s.insert(A[i]);
                    co++;
                }
            }
            
            cout<<co<<endl;
        }
        return 0;
    }
