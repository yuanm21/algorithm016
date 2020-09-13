/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组
 */
// 1. 暴力 否掉，边界判断太麻烦
// 2. 双指针 也就是双索引 交换 不对
// 3. 三次反转
// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (k > nums.size())
        {
            k = k % nums.size();
        }
        
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }

    void reverse(vector<int>& nums, int a, int b)
    {
        while (a < b) {
            int tmp = nums[b];
            nums[b] = nums[a];
            nums[a] = tmp;
            a++;
            b--;
        }
        
    }
};
// @lc code=end

