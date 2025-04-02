#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_map<char, int>> row_map, col_map, box_map;
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char num = board[i][j];
                if (num != '.') {
                    int box_index = (i / 3) * 3 + (j / 3);
                    
                    // Check if the number is already in the row, column, or box
                    if (++row_map[i][num] > 1 || ++col_map[j][num] > 1 || ++box_map[box_index][num] > 1) {
                        return false;
                    }
                }
            }
        }
        
        return true;
    }
};
