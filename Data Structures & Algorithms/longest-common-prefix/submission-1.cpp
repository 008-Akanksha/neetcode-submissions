class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        //brute force ==> match all char of all string to the char of first string
        string ans  = ""; //empty string
        int n = s.size();

        for(int i =0;i<s[0].size();i++)
        {
            bool match = true;

            char ch = s[0][i]; //getting all char one by one of first string 

            for(int j = 1;j<n;j++ )
            {
                if(s[j].size() <= i || ch != s[j][i])//char not matching
                {
                    match = false;
                    break;
                }
            }

            if(match == false) //char of any string is not matching with first string
                break; // dont check for remaning string
            else
                ans.push_back(ch);

        }

        return ans;
        //t.c = 0(n^2)
        //s.c = 0(1)
        
    }
};