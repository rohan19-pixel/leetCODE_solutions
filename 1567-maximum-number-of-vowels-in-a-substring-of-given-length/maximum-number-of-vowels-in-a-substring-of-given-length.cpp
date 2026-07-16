class Solution {
public:
     
    int maxVowels(string s, int k) {
        int n=s.length();
        int count =0;
        int i ;
        int maxcount=INT_MIN;
        for(i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u'){
                count ++;
            }        
        }
            maxcount=count ;
            for(i=k;i<n;i++){
                 if(s[i-k]=='a'||s[i-k]=='i'||s[i-k]=='e'||s[i-k]=='o'||s[i-k]=='u'){
                count --;
            }
            if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u'){
                count ++;
            }
          

            if(maxcount<count){
                maxcount =count;
            }
 

            
        }
        return maxcount ;
        
    }
};