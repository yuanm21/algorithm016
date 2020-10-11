/*
 * @lc app=leetcode.cn id=860 lang=cpp
 *
 * [860] 柠檬水找零
 */
// 20201011 局部最优解 即贪心算法 关键：在20找零的情况下优先选10和5，尽量留更多的5
// @lc code=start
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int m5 = 0, m10 = 0;
        for (int i : bills) {
            switch(i) {
                case 5: {m5 ++; continue;} 
                case 10: {m10 ++, m5 --; break;}
                case 20: if (m10 > 0) m10 --, m5 --;
                         else m5 -= 3;
            }
            if (m5 < 0) return false;
        }
        return true;
    }
};
// @lc code=end

