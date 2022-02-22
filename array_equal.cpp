// #include <bits/stdc++.h>
// using namespace std;


// int computeCost(int arr[], int n, int X)
// {
// 	int cost = 0;
// 	for (int i = 0; i < n; i++)
// 		cost += abs(arr[i] - X);
// 	return cost;
// }

// int minCostToMakeElementEqual(int arr[], int n)
// {
// 	int low, high;
// 	low = high = arr[0];


// 	for (int i = 0; i < n; i++) {
// 		if (low > arr[i])
// 			low = arr[i];
// 		if (high < arr[i])
// 			high = arr[i];
// 	}
// 	while ((high - low) > 2) {

// 		int mid1 = low + (high - low) / 3;
// 		int mid2 = high - (high - low) / 3;

// 		int cost1 = computeCost(arr, n, mid1);
// 		int cost2 = computeCost(arr, n, mid2);

// 		if (cost1 < cost2)
// 			high = mid2;
// 		else
// 			low = mid1;
// 	}

// 	return computeCost(arr, n, (low + high) / 2);
// }

// // Driver code to test above method
// int main()
// {
// 	int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
// 	        cin>>arr[i];
//         }
//         int X=*max_element(arr,arr+n);
//         cout << minCostToMakeElementEqual(arr, n)<<endl;
        
//     }
    
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int getMinOperations(int *arr, int n)
{
 unordered_map<int, int> hash;
 for (int i = 0;i < n; ++i) {
 hash[arr[i]]++;
 }
 int maxFrequency = 0;
 for (auto elem : hash) {
 if (elem.second > maxFrequency) {
 maxFrequency = elem.second;
 }
 }
 return (n - maxFrequency);
}
int main()
{
int t;
cin>>t;
while (t--)
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<getMinOperations(arr, n) << endl;
}

 return 0;
}
