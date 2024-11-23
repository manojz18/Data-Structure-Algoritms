#include <bits/stdc++.h>
using namespace std;

// their are the stone, obstacle and empty place in the box rotate the box clockwise 90deg and then stone should also get displaced due to
// rotation and gravity and then return the box

class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size();
        int n = box[0].size();
        
        // Resultant matrix for rotated box
        vector<vector<char>> ans(n, vector<char>(m, '.'));

        // Apply gravity and rotate simultaneously
        for (int row = 0; row < m; row++) {
            int emptySpot = n - 1; // Pointer for the last empty spot in the row

            for (int col = n - 1; col >= 0; col--) {
                if (box[row][col] == '*') {
                    emptySpot = col - 1; // Reset emptySpot after obstacle
                }
                else if (box[row][col] == '#') {
                    // Move stone to empty spot if possible
                    swap(box[row][col], box[row][emptySpot]);
                    emptySpot--; // Move emptySpot left after placing a stone
                }
            }

            // Populate the rotated matrix with the updated row
            for (int col = 0; col < n; col++) {
                ans[col][m - row - 1] = box[row][col];
            }
        }

        return ans;
    }
};
