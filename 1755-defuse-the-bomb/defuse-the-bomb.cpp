class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n =code.size();
        vector<int> ans(n,0);
        int i,j;
        for(i=0;i<n;i++){
            if(k>0){
             for(j=1;j<=k;j++){
                ans[i]+=code[(i+j)%n];
             }
            }
            else{
                for(j=1;j<=abs(k);j++){
                  ans[i] += code[((i - j) % n + n) % n];
                }
            }

        }
        return ans;
    }
};