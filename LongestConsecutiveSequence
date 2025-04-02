class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        map<int, int> num_map; // Map to store unique numbers
        for (int num : nums) {
            num_map[num] = 1;
        }
        
        int longest_streak = 0;
        
        for (auto& [num, _] : num_map) {
            // Check if num is the start of a sequence
            if (num_map.find(num - 1) == num_map.end()) {
                int current_num = num;
                int current_streak = 1;
                
                // Count the length of the sequence
                while (num_map.find(current_num + 1) != num_map.end()) {
                    current_num++;
                    current_streak++;
                }
                
                longest_streak = max(longest_streak, current_streak);
            }
        }
        
        return longest_streak;
    }
};
