class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
// method 2 ==> using map to store freq

unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        

        for(auto it: mp)
        {
            if(it.second > 1)
            return 1;
        }
        return 0;

        //t.c = 0(n)
        //s.c = 0(n)
        
    }
};