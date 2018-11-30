class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int l = 0, r = A.size() - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (A[mid] > A[mid + 1]) {
                if (A[mid] > A[mid - 1])
                    return mid;
                else
                    r = mid + 1;
            } else {
                l = mid;
            }
        }
    }
};