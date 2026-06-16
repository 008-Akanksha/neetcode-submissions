class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        //method ==> using two pointer
        int target = 0;
        int n = nums.size();

        while(target < n && nums[target] != val)
            target++;

        for(int i = target+1;i<n;i++)
        {
            if(nums[i] != nums[target] && nums[target] == val )
            {
                swap(nums[i], nums[target]);
                target++;
            }
        }
        return target;
        //t.c = 0(n)
        //s.c = 0(1)
        
    }
};