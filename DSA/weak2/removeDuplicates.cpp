class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int length = nums.size();
        int k{};
        for (int i{}; i < length; ++i)
        {
            if (i == length - 1 || nums[i] != nums[i + 1])
            {
                nums[k++] = nums[i];
            }
        }

        return k;
    }
};
