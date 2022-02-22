#include<bits/stdc++.h>
using namespace std;
#define sync {ios_base ::sync_with_stdio(false); cin.tie(NULL);
int count(string s,char c){
    int res=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]==c)
        {
            res++;
        }
    }
    return res;
}
int main(){
int n;
cin>>n;
string s;
cin>>s;
int k=count(s,'A');
int l=count(s,'D');
if (k>l)
{
    cout<<"Anton"<<endl;
}
if (k<l)
{
    cout<<"Danik"<<endl;
}
if (k==l)
{
    cout<<"Friendship"<<endl;
}


return 0;
}