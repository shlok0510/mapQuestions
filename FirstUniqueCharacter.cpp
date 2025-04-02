class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> char_count;
        
        // Count the frequency of each character
        for (char c : s) {
            char_count[c]++;
        }
        
        // Find the first character with count 1
        for (int i = 0; i < s.size(); i++) {
            if (char_count[s[i]] == 1) {
                return i;
            }
        }
        
        return -1; // No unique character found
    }
};
