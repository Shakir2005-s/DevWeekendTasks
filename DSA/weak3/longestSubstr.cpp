class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int length = s.size();
        unordered_map<char, int> map;
        int maxCount{};
        int left{};
        for (int right{}; right < length; ++right)
        {
            auto it = map.find(s[right]);
            if (it != map.end() && it->second >= left)
            {
                left = it->second + 1;
            }
            map[s[right]] = right;
            maxCount = max(maxCount, right - left + 1);
        }
        return maxCount;
    }
};