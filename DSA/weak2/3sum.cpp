class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int length = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i{}; i < length; ++i)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int j{i + 1}, k{length - 1};
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum > 0)
                {
                    --k;
                }
                else if (sum < 0)
                {
                    ++j;
                }
                else
                {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++, k--;
                    while (j < k && nums[j] == nums[j - 1])
                        ++j;
                }
            }
        }

        return res;
    }
};