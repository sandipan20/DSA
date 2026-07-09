// Consider a rat placed at position (0, 0) in an n x n square matrix maze[][]. The rat's goal is to reach the destination at position (n-1, n-1). The rat can move in four possible directions: 'U'(up), 'D'(down), 'L' (left), 'R' (right).

// The matrix contains only two possible values:

// 0: A blocked cell through which the rat cannot travel.
// 1: A free cell that the rat can pass through.
// Your task is to find all possible paths the rat can take to reach the destination, starting from (0, 0) and ending at (n-1, n-1), under the condition that the rat cannot revisit any cell along the same path. Furthermore, the rat can only move to adjacent cells that are within the bounds of the matrix and not blocked.
// If no path exists, return an empty list.

// Note: Return the final result vector in lexicographically smallest order.

// Examples:

// Input: maze[][] = [[1, 0, 0, 0], [1, 1, 0, 1], [1, 1, 0, 0], [0, 1, 1, 1]]
// Output: ["DDRDRR", "DRDDRR"]
// Explanation: The rat can reach the destination at (3, 3) from (0, 0) by two paths - DRDDRR and DDRDRR, when printed in sorted order we get DDRDRR DRDDRR.
// Input: maze[][] = [[1, 0], [1, 0]]
// Output: []
// Explanation: No path exists as the destination cell (1, 1) is blocked.
// Input: maze[][] = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]
// Output: ["DDRR", "RRDD"]
// Explanation: The rat has two possible paths to reach the destination: DDRR and RRDD.
// Constraints:
// 2 ≤ n ≤ 5
// 0 ≤ maze[i][j] ≤ 1

#include<iostream>
using namespace std;

class Solution {
  public:
    void backtrack(vector<vector<int>> &maze, int i, int j, int n, string &temp, vector<string> &ans) {
        if (i == n - 1 && j == n - 1) {
            ans.push_back(temp);
            return;
        }
        maze[i][j] = 0;

        // Down
        if (i + 1 < n && maze[i + 1][j]) {
            temp.push_back('D');
            backtrack(maze, i + 1, j, n, temp, ans);
            temp.pop_back();
        }

        // Left
        if (j - 1 >= 0 && maze[i][j - 1]) {
            temp.push_back('L');
            backtrack(maze, i, j - 1, n, temp, ans);
            temp.pop_back();
        }

        // Right
        if (j + 1 < n && maze[i][j + 1]) {
            temp.push_back('R');
            backtrack(maze, i, j + 1, n, temp, ans);
            temp.pop_back();
        }

        // Up
        if (i - 1 >= 0 && maze[i - 1][j]) {
            temp.push_back('U');
            backtrack(maze, i - 1, j, n, temp, ans);
            temp.pop_back();
        }

        // Unmark (backtrack)
        maze[i][j] = 1;
    }

    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> ans;
        string temp = "";
        int n = maze.size();

        backtrack(maze, 0, 0, n, temp, ans);
        return ans;
    }
};