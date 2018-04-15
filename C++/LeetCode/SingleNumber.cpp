// Given an array of integers, every element appears twice except for one. Find that single one.
class Solution {
public:
    int singleNumber(vector<int>& nums) {  
        map<int, int> numbers;
        map<int, int>::iterator it;

        for(int i = 0; i < nums.size(); i++) {
            if(numbers.insert(make_pair(nums[i], 1)).second == false) {
                numbers[nums[i]] += 1;
            }
            else {
                numbers.insert(pair<int, int>(nums[i], 1));
            }
        }

         for(it = numbers.begin(); it != numbers.end(); ++it){
            if(it->second == 1)
                return it->first;
         }
    }
};
// Runtime: 32 ms, beats 2.04% of submissions.

// According to discussions, it's faster to solve it using XOR.
class Solution {
public:
    int singleNumber(vector<int>& nums) {  
        int value = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            value = value ^ nums[i];
        }
        
        return value;
    }
};
// Runtime: 16 ms, beats 44.08% of submissions.

//When changing value = value ^ nums[i] to value ^= nums[i], the runtime is reduced.
class Solution {
public:
    int singleNumber(vector<int>& nums) {  
        int value = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            value ^= nums[i];
        }
        
        return value;
    }
};
// Runtime: 14 ms, beats 84.59 of submissions.