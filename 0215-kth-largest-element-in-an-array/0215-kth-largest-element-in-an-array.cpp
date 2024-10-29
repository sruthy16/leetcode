class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxHeap;
        for(int n : nums){
            maxHeap.push(n);
        }
        
        while(k > 1){
            maxHeap.pop();
            k--;
        }
        return maxHeap.top();
    }
};