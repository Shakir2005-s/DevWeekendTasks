class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int product{1};
        int length = nums.size();
        vector<int> res(length, 0);
        int zero = 0;
        for (int num : nums)
        {
            if (num != 0)
            {
                product *= num;
            }
            else
            {
                zero++;
            }
        }
        for (int i{}; i < length; ++i)
        {
            if (zero > 1)
            {
                res[i] = 0;
            }
            else if (zero == 1 && nums[i] == 0)
            {
                res[i] = product;
            }
            else if (zero == 1 && nums[i] != 0)
            {
                res[i] = 0;
            }
            else
            {
                res[i] = product / nums[i];
            }
        }
        return res;
    }
};