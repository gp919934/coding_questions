#include<bits/stdc++.h>
using namespace std;
#define sync {ios_base ::sync_with_stdio(false); cin.tie(NULL);
void pairsum(int arr[],int n,int target){
    

}
int main(){
int n;
cin>>n;
int arr[n];
int target;
cin>>target;
for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        for (int k = j+1; k < n; k++)
        {
            if (arr[i]+arr[j]+arr[k]==target)
            {
                cout<<i<<" "<<j<<" "<<k<<" ";
            }
            else
            {
                cout<<"Not Found ";
                
            }
            
        }
        
    }
    
}

return 0;
}