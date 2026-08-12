class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //sum for starting window
        int n = nums.size();
        int sum = 0;
        for(int i =0; i < k ;i++){
            sum += nums[i];
        }
        int maxsum = sum;

        //start sliding window

        int startindex = 0;
        int endindex = k;

        while(endindex < n){

            sum -= nums[startindex]; // remove prev frist element
            startindex++;

            sum += nums[endindex]; // adding next element
            endindex++;

            maxsum = max(maxsum , sum); // updating max sum
        }
        return (double) maxsum/k;
    }
};