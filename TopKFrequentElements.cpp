class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq_map;
        
        // Count the frequency of each element
        for (int num : nums) {
            freq_map[num]++;
        }
        
        // Store elements in a vector and sort by frequency
        vector<pair<int, int>> freq_vec(freq_map.begin(), freq_map.end());
        sort(freq_vec.begin(), freq_vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; // Sort by frequency in descending order
        });
        
        // Extract the top k frequent elements
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(freq_vec[i].first);
        }
        
        return result;
    }
};
