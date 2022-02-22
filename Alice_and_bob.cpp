#include<bits/stdc++.h>
using namespace std;
#define sync {ios_base ::sync_with_stdio(false); cin.tie(NULL);
int main(){
int t;
cin>>t;
while (t--)
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int a1=c/a;
    int b1=d/b;
    int ans=a1+b1;
    cout<<ans<<endl;
}

return 0;
}