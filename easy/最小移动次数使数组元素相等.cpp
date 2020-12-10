/*给定一个长度为 n 的非空整数数组，找到让数组所有元素相等的最小移动次数。每次移动将会使 n - 1 个元素增加 1
输入:
[1,2,3]

输出:
3

解释:
只需要3次移动（注意每次移动会增加两个元素的值）：

[1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]
*/
/*
假设目前数组总和为sum，我们需要移动次数为step，那么整体数组总和将会增加step* (len - 1)，最后数组所有元素都相等为x，于是有：
sum + step* (len - 1) = x * len 
我们再设数组最小的元素为min，step = x - min，即 ​x = step + min
代入得
step = sum - min * len
*/

class Solution {
public:
    int minMoves(vector<int>& nums) {
     int min = INT_MAX;
     int step = 0;
     long long len = nums.size();
     for (int i = 0 ;i < nums.size();i++){
         if (min >nums[i]){min = nums[i];}
     }
     long sum = 0;
     for (int i = 0 ;i < nums.size();i++){
         sum =sum + nums[i];
     }
    
      step = sum -min*len;
      return step;
    }
};
