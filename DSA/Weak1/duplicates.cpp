class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        int length = nums.size();
        unordered_map<int, int> map;
        for (int i{}; i < length; ++i)
        {
            auto it = map.find(nums[i]);
            if (it != map.end())
            {
                return true;
            }
            map[nums[i]] = i;
        }
        return false;
    }
};