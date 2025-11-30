class Solution {
public:
    void merge(vector<int>& nums,int s,int mid,int e){
        int len1=mid-s+1;
        int len2=e-mid;
        int *left= new int[len1];
        int *right= new int[len2];

       int index=s;
        for(int i=0;i<len1;i++){
            left[i]=nums[index++];
        }
        index=mid+1;
        for(int i=0;i<len2;i++){
        right[i]=nums[index++];}

         int ind1=0, ind2=0;index=s;
         while(ind1<len1 && ind2<len2){
            if(left[ind1]<right[ind2]){
                nums[index++]=left[ind1++];
            }
            else{nums[index++]=right[ind2++];}
         }
         while(ind1<len1){
        nums[index++]=left[ind1++];
    }
    while(ind2<len2){
        nums[index++]=right[ind2++];
    }
        
        delete[] left;
        delete[] right;

    }
    void sort(vector<int>& nums,int s,int e){
        if(s>=e) return ;
        int mid=s+((e-s)/2);
        sort(nums,s,mid);
        sort(nums,mid+1,e);
        merge(nums,s,mid,e);

    }
    void sortColors(vector<int>& nums) {
        int s=0,e = nums.size()-1;
        sort(nums,s,e);
       
           }
};