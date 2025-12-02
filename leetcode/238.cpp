class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long totalProduct = 1;
        int zeroCount = 0;
        int n = nums.size();

     
        for (int x : nums) {
            if (x == 0) zeroCount++;
            else totalProduct *= x;
        }

        vector<int> answer(n, 0);

  
        if (zeroCount > 1) return answer;

     
        if (zeroCount == 1) {
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0) answer[i] = totalProduct;
                else answer[i] = 0;
            }
            return answer;
        }

        
        for (int i = 0; i < n; i++) {
            answer[i] = totalProduct / nums[i];
        }

        return answer;
    }
};
