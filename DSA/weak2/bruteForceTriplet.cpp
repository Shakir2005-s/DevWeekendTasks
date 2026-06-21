class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> res;
        int length = nums.size();
        for (int i{}; i < length - 2; ++i)
        {
            for (int j{i + 1}; j < length - 1; ++j)
            {
                for (int k{j + 1}; k < length; ++k)
                {
                    vector<int> temp(3);
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        temp[0] = nums[i];
                        temp[1] = nums[j];
                        temp[2] = nums[k];
                        sort(temp.begin(), temp.end());
                        auto it = find(res.begin(), res.end(), temp);
                        if (it == res.end())
                        {
                            res.push_back(temp);
                        }
                    }
                }
            }
        }
        return res;
    }
};