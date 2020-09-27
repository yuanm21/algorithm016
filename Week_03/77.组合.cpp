/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
class Solution {
public:
    void dfs(int cur, int n, int k) {
        // pruning
        if (tmp.size() + (n - cur + 1) < k) {
            return;
        }
        // terminator
        if (tmp.size() == k) {
            res.push_back(tmp);
            return;
        }
        
        // process-choice
        tmp.push_back(cur);
        dfs(cur + 1, n, k); // drill down

        // reverse state
        tmp.pop_back();

        // process-no choice
        dfs(cur + 1, n, k); // drill down
    }

    vector<vector<int>> combine(int n, int k) {
        dfs(1, n, k);
        return res;
    }
private:
    vector<vector<int>> res;
    vector<int> tmp;
};
// @lc code=end

