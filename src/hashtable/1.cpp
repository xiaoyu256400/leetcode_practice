#include <algorithm>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <unordered_set>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> umap;
        for(int i = 0;  i < n; i++){
            int a = nums[i];
            if(umap.find(target-a)==umap.end()){
                umap[a] = i;
            }else{
                return {umap[target-a], i};
            }
        }
        return {};
    }
};

int main() {
  // 示例二叉树
  Solution solution;
  vector<int> nums = {2,7,11,15};
  int target = 9;
  vector<int> result = solution.twoSum(nums, target);
  for(int i : result){
    std::cout<<"i = "<<i<<std::endl;
  }
  //    std::cout << "result: " << result << std::endl;
}