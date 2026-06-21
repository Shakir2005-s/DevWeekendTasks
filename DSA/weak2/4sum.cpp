class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int length = nums.size();
        
        // A quadruplet requires at least 4 elements
        if (length < 4) return res; 
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < length - 3; ++i) {
            // Skip duplicates for the first element
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            for (int k = i + 1; k < length - 2; ++k) {
                if (k > i + 1 && nums[k] == nums[k - 1]) continue;
                
                int left = k + 1;
                int right = length - 1;
                
                while (left < right) {
                    
                    long long sum = (long long)nums[i] + nums[k] + nums[left] + nums[right];
                    
                    if (sum > target) {
                        --right;
                    } 
                    else if (sum < target) {
                        ++left;
                    } 
                    else {
                        res.push_back({nums[i], nums[k], nums[left], nums[right]});
                        long

                        int current_left = nums[left];
                        int current_right = nums[right];
                        
                        while (left < right && nums[left] == current_left) ++left;
                        while (left < right && nums[right] == current_right) --right;
                    }
                }
            }
        }
        return res;
    }
};
