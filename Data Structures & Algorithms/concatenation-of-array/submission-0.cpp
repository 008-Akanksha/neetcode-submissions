class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();

        vector<int>ans(2*n);

        for(int i =0;i<n;i++)
        {
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }
        return ans;
        //t.c = 0(n)
        //s.c = 0(2n)
        
    }
};