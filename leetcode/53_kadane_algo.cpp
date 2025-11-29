class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=nums[0]; int sum =0;
        if(nums.size()==1)return nums[0];
        for(int s=0;s<nums.size();s++){
               sum+=nums[s];
               max_sum=max(max_sum,sum);
               if(sum<0) sum=0;
               
        }
        return max_sum;
    }
};