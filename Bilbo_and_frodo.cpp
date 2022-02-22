#include<bits/stdc++.h>
using namespace std;
#define sync {ios_base ::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
void minimum_coins(ll B,ll F,ll C){
    ll ans=-1;
    ll l=1;
    ll r=1e9+1;
    while (r>=l)
    {
        ll m=l+(r-l)/2;
        ll diff=(B*m)-(F/m);
        if (diff>=C)
        {
            r=m-1;
            ans=m;
        }
        else
        {
            l=m+1;
        }
    }
    cout<<ans<<endl;

}
int main(){
ll t;
cin>>t;
while (t--)
{
    ll B,F,C;
    cin>>B>>F>>C;
    minimum_coins(B,F,C);
}

return 0;
}