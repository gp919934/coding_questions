#include<bits/stdc++.h>
using namespace std;
#define sync {ios_base ::sync_with_stdio(false); cin.tie(NULL);
// bool isprime(int n){
//        if (n<=1)
//        {
//            return false;
//        }
//         for (int i = 2; i <=sqrt(n); i++)
//         {
//             if (n%i==0)
//             {
//                 return false;
//             }
//         }
//             return true;
//  }
// int stringtobinary(string temp){
//     int val=0;
//     int base=1;
//     for (int i = temp.length()-1; i>=0; i--)
//     {
//         if (temp[i]=='1')
//         {
//             val+=base;
//         }
//         base=base*2;
//     }
//         return val;
// }
// bool check(string temp){
//     int n=stringtobinary(temp);
//     if(isprime(n))return true;
//     return false;
// }
void solve(string s,int n){
    if(n==1){
        cout<<"No"<<endl;
        return;
    }

int one=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='1')
        {
            one++;
        }
    }
    if(one==0 || (one==1 and s[n-1]=='1')){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        solve(s,s.length());
    }

return 0;
}