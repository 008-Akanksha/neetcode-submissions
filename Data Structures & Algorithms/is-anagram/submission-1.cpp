class Solution {
public:
    bool isAnagram(string s, string t) {
        //method 2 ==> using map to store char of 1st string and match that with char of second string
        
        if(s.size() != t.size())
            return 0;

        int n = s.size();
        unordered_map<char,int>mp;


        

        for(int i =0;i<n;i++)
        {
            mp[s[i]]++;
        }

        for(int i =0;i<n;i++)
        {
            if(mp.find(t[i]) != mp.end())//present in map
            {
                mp[t[i]]--;

                if(mp[t[i]]==0)
                    mp.erase(t[i]);
            }
        }

        if(mp.size() >0)
        return 0;

        return 1;

        //t.c = 0(nlogn)
        //s.c = 0(1)
        
    }
};
