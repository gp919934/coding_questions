/* C++ program to count minimum number of operations
   to get the given target array */
#include <bits/stdc++.h>
using namespace std;
 
//we make the target array to zero array
//count the number of moves
//it is nothing but converting zero array into target array
int Minimum_Operations(int target[], int n)
{
    int min_moves = 0;
    //Till all elements become zero
    while(1)
    {
        //count of zeroes
        int zeroes = 0;
        int i;
        // i is index of first odd number
        for(i=0; i<n; i++)
        {
            if (target[i] & 1)// odd number
                {
                  break;
                }
            else if (target[i] == 1)//zeroes in target array
                {
                  zeroes++;
                }
        }
        //return moves when all the elements in target array are zero
        if (zeroes == n)
          {
            return min_moves;
          }
        //if i = n odd number is not found in the array
        // so all are even
        //Divide by two and increment 1 move
        if (i == n)
        {
            for (int j=0; j<n; j++)
            {
               target[j] = target[j]/2;
            }
            min_moves++;
        }
 
        //if odd number found decrese it by 1 
        // increment moves by 1
        for (int j=i; j<n; j++)
        {
           if (target[j] & 1)
           {
              target[j]--;
              min_moves++;
           }
        }
    }
}
 
//main function
int main()
{
    int n ;
    cin>>n;
     int target[n];
     for (int i = 0; i < n; i++)
     {
        cin>>target[i];
     }
     
    cout << Minimum_Operations(target, n);
    return 0;
}