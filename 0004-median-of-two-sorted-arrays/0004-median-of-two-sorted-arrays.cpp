#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        
        sort(nums1.begin(), nums1.end());
        
        int arrSize = nums1.size();
        
        double result = 0;
        
        if(arrSize%2 == 0){
            result = ((double)nums1[arrSize/2] + (double)nums1[(arrSize/2) - 1]) / 2;
        }
        else{
            result = (double)nums1[arrSize/2];
        }
        
        return result;
    }
};