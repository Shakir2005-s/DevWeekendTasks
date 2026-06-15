class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int length = nums.size();
        unordered_set<int> set;
        int maxCount = 0;
        for (int i{}; i < length; ++i)
        {
            set.insert(nums[i]);
        }
        for (int num : set)
        {
            auto it = set.find(num - 1);
            if (it == set.end())
            {

                int count = 1;
                int nextNumber = num + 1;
                while (set.find(nextNumber) != set.end())
                {
                    nextNumber += 1;
                    count++;
                }
                maxCount = max(count, maxCount);
            }
        }
        return maxCount;
    }
};