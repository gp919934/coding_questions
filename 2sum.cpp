#include<bits/stdc++.h>
using namespace std;
 #define sync {ios_base ::sync_with_stdio(false); cin.tie(NULL);
void pairsum(int arr[],int n,int k){
sort(arr,arr+n);
int i=0;
int j=n-1;
while (i<j)
{
    if (arr[i]+arr[j]==k)
    {
        cout<<"Pair Found "<<arr[i]<<" "<<arr[j]<<endl;
        return;
    }
    else if (arr[i]+arr[j]>k)
    {
        j--;
    }
    else if (arr[i]+arr[j]<k)
    {
        i++;
    }
}
    cout<<"Pair Not found "<<endl;
}
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
cout<<arr.size();
int k;
cin>>k;
pairsum(arr,n,k);

return 0;
}