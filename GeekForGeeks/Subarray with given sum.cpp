class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long sum)
    {

    int i = 0, j = 0;
    long long cur_sum = 0;
    vector<int> result;
    if (sum == 0) {
        result.push_back(-1);
        return result;
    }
    while (j <= n ) {
        while (cur_sum > sum && i <= j) {
            cur_sum -= arr[i];
            i++;
        }
        if (cur_sum == sum) {
            result.push_back(i + 1);
            result.push_back(j);
            break;
        }
        if (j < n)
            cur_sum += arr[j];
        
        j++;
        
        }
        if (result.size() == 0) result.push_back(-1);
        return result;
    }
};