#include<bits/stdc++.h>
using namespace std;
#define sync {ios_base ::sync_with_stdio(false); cin.tie(NULL);
int main(){
int n;
cin>>n;
int a,b,c,d;
do
{
   n++,a=(n/1000),b=(n/100)%10,c=(n/10)%10,d=(n%10);
} while (a==b||a==c||a==d||b==c||b==d||c==d);
cout<<n<<endl;
return 0;
}