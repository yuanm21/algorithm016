/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        for (; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                //nums[j++] = nums[i];
                int tmp = nums[j];
                
                nums[j++] = nums[i];
                nums[i] = tmp;
            }
            
        }

        // for (; j < nums.size(); j++)
        // {
        //     nums[j] = 0;
        // }
    }
};
// @lc code=end

