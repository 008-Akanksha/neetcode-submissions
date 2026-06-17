class Solution {
public:
    void sortColors(vector<int>& nums) {

        //Dutch National Flag Theorem

        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;

        while(mid <= high)
        {
            if( nums[mid] == 0)
            {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if( nums[mid] == 2)
            {
                swap(nums[mid], nums[high]);
                high--;
                
            }
            else
               mid++;
        }

        return;
        //t.c = 0(n)
        //s.c = 0(1)
        
    }
};