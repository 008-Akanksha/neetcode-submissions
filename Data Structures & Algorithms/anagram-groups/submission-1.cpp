class Solution {
public:
    
    string generate(string word)
    {
        vector<int>Count_of_char(26,0);

        for(char &ch : word)
            Count_of_char[ch-'a']++; //storing freq of each char
        
        string new_word = "";

        for(int i =0;i<26;i++)
        {
            int freq = Count_of_char[i];

            if(freq > 0)
                new_word += string(freq,i+'a');

        }

        return new_word;
    }
    vector<vector<string>> groupAnagrams(vector<string>& s) {

        //method 2 ==> without  sorting

        int n = s.size();
        vector<vector<string>>res;
        unordered_map<string, vector<string>>mp; // key -> sorted string, value --> oringinal string /anagaram

        for(int i =0;i<n;i++)
        {
            string word = s[i];
            string new_word = generate(word);
            mp[new_word].push_back(word);
        }

        for(auto it:mp)
        {
            res.push_back(it.second);
        }

        return res;
        //t.c = 0(n(k+26))  ==> n*k where k =  max size of string
        //s.c = 0(n)
        
    }
};
