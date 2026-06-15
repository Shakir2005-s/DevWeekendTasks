class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int len1 = s.size(), len2 = t.size();
        if (len1 != len2)
            return false;
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        for (int i{}; i < len1; ++i)
        {
            freq1[s[i] - 'a']++;
            freq2[t[i] - 'a']++;
        }
        for (int i{}; i < 26; ++i)
        {
            if (freq1[i] != freq2[i])
            {
                return false;
            }
        }
        return true;
    }
};