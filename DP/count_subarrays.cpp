#include <bits/stdc++.h>
using namespace std;
#define ll long long int 



//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t ;
    cin>>t ;
    while(t--) {
        ll n , i , j , count=0 , jj ;
        cin>>n;
        ll a[n] ;
        for(i=0;i<=n-1;i++) {
            cin>>a[i] ;
        }
        for(i=0;i<=n-1;i++) {
            if(i==0) {
                count=1;
                jj=1;
            }
            else {
                if(a[i]>=a[i-1]) {
                    jj++;
                    count += jj;
                }
                else {
                    jj=1;
                    count+= 1 ;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
