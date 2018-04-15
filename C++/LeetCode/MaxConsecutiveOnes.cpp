// Given a binary array, find the maximum number of consecutive 1s in this array.
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> ones;
        int iCount = 0;

        for(int i = 0; i <= nums.size(); i++) {
            if(nums[i] == 1) {
                iCount++;
            }
            else {
                ones.push_back(iCount);
                iCount = 0;
            }
        }
        
        sort (ones.begin(), ones.end());
        return ones[ones.size()-1];
    }
};

// Runtime: 53 ms, beats 8.54% of submissions.

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int iCount = 0;
        int iMax = 0;

        for(int i = 0; i <= nums.size(); i++) {
            if(nums[i] == 1) {
                iCount++;
                iMax = max(iMax, iCount);
            }
            else
                iCount = 0;
        }
        
        return iMax;
    }
};

// Runtime: 38 ms, beats 76.90% of submissions.