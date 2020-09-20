/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        // 1. 排序法 利用stl字段排序算法sort
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if (s == t) {
        //     return true;
        // }
        // else {
        //     return false;
        // }

        // 2. map哈希法(无序)
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> counts;
        for (int i = 0; i < s.length(); i++) {
            counts[s[i]]++;
            counts[t[i]]--;
        }
        
        unordered_map<char, int>::iterator it = counts.begin();
        for (; it != counts.end(); it++) {
            if (it->second != 0) {
                return false;
            }
        }

        return true;
    }
};
// @lc code=end

