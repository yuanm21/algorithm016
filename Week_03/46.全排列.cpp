/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
	    vector<vector<int> > result;
	    
	    recursive(num, 0, result);
	    return result;
    }
    
	void recursive(vector<int> &num, int begin, vector<vector<int> > &result)	{
		// terminator
        if (begin >= num.size()) {
		    result.push_back(num);
		    return;
		}
		
		for (int i = begin; i < num.size(); i++) {
            // proecess
		    swap(num[begin], num[i]);
            // drill down
		    recursive(num, begin + 1, result);
		    // reverse
		    swap(num[begin], num[i]);
		}
    }
};
// @lc code=end

