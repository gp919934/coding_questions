#include <bits/stdc++.h>
using namespace std;
#define sync                               \
    {                                      \
        ios_base ::sync_with_stdio(false); \
        cin.tie(NULL);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            int v = 1 + i + k;
            if (v == arr[i])
                k++;
        }
        cout << k << endl;
    }

    return 0;
}