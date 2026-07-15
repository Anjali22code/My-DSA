class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int count  =0;
        int n = gain.size();
        int ans =0  ;
        for(int i=0; i<n; i++) {
            count = count + gain[i];
            ans = max(ans, count);
             
        }
       
        return ans;
    }
};