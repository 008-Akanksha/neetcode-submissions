class Solution {
public:
    bool isAnagram(string s, string t) {
        //method 1 ==> sort both string and match the char
        
        if(s.size() != t.size())
            return 0;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for(int i =0;i<s.size();i++)
        {
            if(s[i] != t[i])
                return 0;
        }

        return 1;

        //t.c = 0(nlogn)
        //s.c = 0(1)
        
    }
};
