class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //method 1 ==> using hashmap
        //method 2 ==> moore voting algo

        int n = nums.size();
        int cnt = 0;
        int ele;

        for(int i =0;i<n;i++)
        {
            if ( nums[i] == ele)
                cnt++;
            else
            {   
                if(cnt == 0)
                {
                    ele= nums[i];
                    cnt = 1;
                }
                else
                    cnt--;
            }
        }

        return ele;
        //t.c = 0(n)
        //s.c = 0(1)
        
    }
};