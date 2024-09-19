class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        while(left < right){
            if(target == numbers[left] + numbers[right]){
                return {left+1, right+1};
            }
            if(numbers[left] + numbers[right] > target){
                right--;
            } else {
                left++;
            }
        }
        return {-1, -1};
    }
};