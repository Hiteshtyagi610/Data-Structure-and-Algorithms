class Solution {
public:
    vector<int> sortArray(vector<int>& nums ) {
        int n= nums.size();
        bool swapped= false;
        for(int i=1;i<n;i++){
               for(int j=0;j<n-i;j++){
                if(nums[j]>nums[j+1]){
                      swap(nums[j],nums[j+1]);
                      swapped =true;                   
                }
              
            
            }
            if(swapped== false){
                break;
            }
            
        }
        return nums;
    }
};