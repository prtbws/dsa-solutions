class Solution {
public:

    void heapify(vector<int>& nums, int i, int n) {

        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;

        if (left < n && nums[largest] < nums[left]) largest = left;
        if (right < n && nums[largest] < nums[right]) largest = right;

        if (largest != i) {

            swap(nums[largest], nums[i]);
            heapify(nums, largest, n);
        }
    }

    void del(vector<int>&nums, int n) {

        swap(nums[0], nums[n-1]);
        heapify(nums,0,  n-1);
    }

    int findKthLargest(vector<int>& nums, int k) {
        
        int n = nums.size();

        for (int i = n/2-1; i>=0; i--) heapify(nums, i, n);

        for (int i = 0; i<k-1; i++) del(nums, n-i);

        return nums[0];
    }
};