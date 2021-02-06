/**
@cxh
@2021.02.06
给你一个列表 nums ，里面每一个元素都是一个整数列表。请你依照下面各图的规则，按顺序返回 nums 中对角线上的整数。

 

示例 1：



输入：nums = [[1,2,3],[4,5,6],[7,8,9]]
输出：[1,4,2,7,5,3,8,6,9]
示例 2：



输入：nums = [[1,2,3,4,5],[6,7],[8],[9,10,11],[12,13,14,15,16]]
输出：[1,6,2,8,7,3,9,4,12,10,5,13,11,14,15,16]
示例 3：

输入：nums = [[1,2,3],[4],[5,6,7],[8],[9,10,11]]
输出：[1,4,2,5,3,8,6,9,7,10,11]
示例 4：

输入：nums = [[1,2,3,4,5,6]]
输出：[1,2,3,4,5,6]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/diagonal-traverse-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
**/

class Solution {
public:
    vector<int> ans[200010];
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        for(int i=0;i<nums.size();i++)
            for(int j=0;j<nums[i].size();j++){
                ans[i+j].push_back(nums[i][j]);
            }
        vector<int> res;
        for(int i=0;i<200000;i++){
            if(ans[i].size()==0)continue;
            for(int j=ans[i].size()-1;j>=0;j--){
                res.push_back(ans[i][j]);
            }
        }
        return res;
    }
};