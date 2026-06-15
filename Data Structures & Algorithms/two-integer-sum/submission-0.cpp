class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        //method 1 = using nested loop
        //method 2 = using map

        int n = nums.size();
        unordered_map<int,int>mp;
        int sum = 0;

       
        for(int i =0 ;i<n;i++)
        {
            int remSum = t - nums[i];

            if(mp.find(remSum) != mp.end())
                return {mp[remSum],i};
            mp[nums[i]] = i;
        }

        return {0,0};
        //t.c = 0(n)
        //s.c = 0(n)


        
    }
};
