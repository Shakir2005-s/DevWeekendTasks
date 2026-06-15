class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> freq;
        int length = nums.size();
        vector<int> res(k);
        for (int i{}; i < length; ++i)
        {
            freq[nums[i]]++;
        }
        int size = freq.size();
        vector<pair<int, int>> list(size);
        int i{};
        for (auto val : freq)
        {
            list[i++] = {val.second, val.first};
        }
        sort(list.begin(), list.end());
        i = i - 1;
        int j{};
        while (k--)
        {
            res[j++] = list[i--].second;
        }
        return res;
    }
};