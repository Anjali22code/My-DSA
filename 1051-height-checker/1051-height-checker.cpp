class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n= heights.size();
        vector<int>expected = heights;
        sort(expected.begin(), expected.end());
         int count =0;
         for(int i=0; i<n; i++) {
            if(heights[i] != expected[i]) {
                count = count + 1;
            }
            else { 
                count = count +0;
            }
         }

            return count;
    }

};