#include<bits/stdc++.h>
using namespace std;
#define sync {ios_base ::sync_with_stdio(false); cin.tie(NULL);
int main(){
int w;
cin>>w;
float m;
cin>>m;
float ans;

if ((w%5==0)&&m>(w+0.5))
{
   
    ans=(m-w-0.50);
    cout<<setprecision(2)<<fixed;
    cout<<ans<<endl;
}
else{
    cout<<setprecision(2)<<fixed;
    cout<<m;
}
return 0;
}