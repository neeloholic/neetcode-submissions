class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hash_s;
        unordered_map<char,int> hash_t;
        int check = 0;
        for(int i = 0; i < s.length(); i++)
        {
            hash_s[s[i]]++;
        }
        
        for(int i = 0; i < t.length(); i++)
        {
            hash_t[t[i]]++;
        }

        for(int i = 0; i < s.length(); i++)
        {
            if(hash_s[s[i]] == hash_t[s[i]])
            {
                check++;
            }
            
        }

        if(hash_s == hash_t)
        {
            return true;
        }
        else return false;

    }
};
