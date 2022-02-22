class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double average=0;
       int n=v.size();
        int sum=0;
       for (int i = 0; i < k; i++)
       {
            sum+=v[i];
            average=sum/k;
       }
       double windows_average=average;
       int windows_sum=sum;
        for (int i = k; i < n; i++)
        {
           windows_sum+=v[i]-v[i-k];
           windows_average=windows_sum/k;
        }
        average=max(windows_average,average);
    }
    return average;
};