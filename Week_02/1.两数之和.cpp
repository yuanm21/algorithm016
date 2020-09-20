/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 1. 暴力法
        // vector<int> ids;
        // for (size_t i = 0; i < nums.size(); i++)
        // {
        //     for (size_t j = i+1; j < nums.size(); j++)
        //     {
        //         if (nums[j] == target - nums[i])
        //         {
        //             ids.push_back(i);
        //             ids.push_back(j);
        //         }
        //     }
        // }
        // return ids;    

        // 2. 两遍哈希法 (用一个set哈希表辅助)
        // map<int,int> hashtable;
        // set<int> ids_set;
        // vector<int> ids_vec;
        // for (int i = 0; i < nums.size(); i++) {
        //     hashtable.insert(map<int,int>::value_type(nums[i], i));
        // }
        
        // for (int i = 0; i < nums.size(); i++)
        // {   
        //     map<int,int>::iterator iter = hashtable.find(target - nums[i]);
        //     if (iter != hashtable.end())
        //     {
        //         if (iter->second != i)
        //         {
        //             ids_set.insert(i);
        //             ids_set.insert(iter->second);
        //         }
        //     }
        // }

        // set<int>::iterator it = ids_set.begin();
        // for (; it != ids_set.end(); it++)
        // {
        //     ids_vec.push_back(*it);
        // }

        // return ids_vec;
        
        // 3. 一遍哈希法 (去掉set哈希表，本身map就是哈希表)
        map<int,int> hashtable;
        set<int> ids_set;
        vector<int> ids_vec(2,-1);
        for (int i = 0; i < nums.size(); i++)
        {   
            if (hashtable.find(target - nums[i]) != hashtable.end()) {
                ids_vec[0] = hashtable[target - nums[i]];
                ids_vec[1] = i;
                break;
            }
            hashtable[nums[i]]=i;//反过来放入map中，用来获取结果下标

        }
        return ids_vec;
    }
};
// @lc code=end

