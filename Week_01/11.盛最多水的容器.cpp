/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    // int maxArea(vector<int>& height) {
    //     int maxres = 0;
    //     for (int i = 0; i < height.size() - 1; i++)
    //     {
    //         int maxarea = 0;
    //         for (int j = i + 1; j < height.size(); j++)
    //         {
    //             int area = (j - i) * min(height[i], height[j]);
    //             maxarea = max(maxarea, area);
    //         }
    //         maxres = max(maxres, maxarea);
    //     }
    //     return maxres;
    // }

    int min(const int &x, const int &y) {
        return x < y ? x : y;
    }

    int max(const int &x, const int &y) {
        return x > y ? x : y;
    }
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int area = 0;
        for (; i < j;)
        {
            int h = min(height[i], height[j]);
            area = max(area, (j - i) * h);
            //height[i] < height[j] ? i++ : j--;
            while (height[i] <= h && i < j) i++;
            while (height[j] <= h && i < j) j--;
        }
        return area;
    }
};
// @lc code=end

