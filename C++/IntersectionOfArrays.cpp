// Given two arrays, write a function to compute their intersection. 

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    	vector<int> final;
    	for(int i = 0; i < nums2.size(); i++) {
    		if (find(nums1.begin(), nums1.end(), nums2[i])!=nums1.end())
    			final.push_back(nums2[i]);
    	}
    	
        sort(final.begin(), final.end());
	    final.erase(unique(final.begin(), final.end()), final.end());
        return final;
    }
};

// Runtime: 12ms, it beats 11.56% of cpp submissions.