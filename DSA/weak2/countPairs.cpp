class Solution
{
public:
    int countPairs(vector<int> &nums, int target)
    {
        int length = nums.size();
        int count{};
        for (int i{}; i < length; ++i)
        {
            for (int j{i + 1}; j < length; ++j)
            {
                if (nums[i] + nums[j] < target)
                {
                    count++;
                }
            }
        }
        return count;
    }
};