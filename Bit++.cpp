#include<bits/stdc++.h>
using namespace std;
#define sync {ios_base ::sync_with_stdio(false); cin.tie(NULL);
int main(){
int t;int X=0;
cin>>t;
while (t--)
{
    string s;
    cin>>s;
    if (s=="++X"||s=="X++")
    {
        X++;
    }
    else
    {
        X--;
    }
}
cout<<X<<endl;
return 0;
}