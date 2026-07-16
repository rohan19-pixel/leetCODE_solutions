class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n =nums.size();
        int i;
        double average =0;
        int sum=0;
        int maxsum=INT_MIN;
        for(i=0;i<k;i++){
            sum+=nums[i];
        }
            maxsum=sum;
        
            for(i=k;i<n;i++){
                sum= sum -nums[i-k]+nums[i];

            
                if(maxsum<sum){
                maxsum=sum;
                }
            }
            average=(double)maxsum / k;
            
        
        return average ;
        
    }
};