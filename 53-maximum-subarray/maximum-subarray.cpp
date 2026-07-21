class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n =nums.size();
        int i;
        int ele=INT_MIN;
        int sum=0;
        for(i=0;i<n;i++){
             sum+=nums[i];

            if(ele<sum){
                ele= sum;
            }
            if(sum<0){
                sum =0;
            }  

        }
        return ele;
        
    }
};