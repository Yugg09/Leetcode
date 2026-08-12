class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int n = nums.size();
        int count = 0;
        int sum = 0;

        for(int i = 0;i<k;i++){
            sum += nums[i];
        }

             if(sum >= threshold * k){
                count++;
            }

        int start = 0;
        int end = k;

        while(end < n){
            sum -= nums[start];
            start++;

            sum += nums[end];
            end++;

            if(sum >= threshold * k){
                count++;
            }
        }

        return count;
        
    }
};