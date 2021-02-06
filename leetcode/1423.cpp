/**
@陈绪华
@2021.02.06
几张卡牌 排成一行，每张卡牌都有一个对应的点数。点数由整数数组 cardPoints 给出。

每次行动，你可以从行的开头或者末尾拿一张卡牌，最终你必须正好拿 k 张卡牌。

你的点数就是你拿到手中的所有卡牌的点数之和。

给你一个整数数组 cardPoints 和整数 k，请你返回可以获得的最大点数。

 

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/maximum-points-you-can-obtain-from-cards
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
**/
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int windonsize=n-k;
        int sum=accumulate(cardPoints.begin(),cardPoints.begin()+windonsize,0);
        int minSum=sum;
        for(int i=windonsize;i<n;++i){
            sum+=cardPoints[i]-cardPoints[i-windonsize];
            minSum=min(minSum,sum);
        }
        return accumulate(cardPoints.begin(),cardPoints.end(),0)-minSum;

    }
   
};