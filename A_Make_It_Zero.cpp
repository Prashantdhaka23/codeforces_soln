#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Cell {
    int row, col, dist;
    Cell(int r, int c, int d) : row(r), col(c), dist(d) {}
};

int minDistanceBetweenZeros(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if (n == 0) return -1; // Empty matrix
    int m = matrix[0].size();

    // Define four possible directions (up, down, left, right)
    vector<int> dr = {-1, 1, 0, 0};
    vector<int> dc = {0, 0, -1, 1};

    int minDist = -1;

    // Iterate through the matrix to find all '0's and calculate distances
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] == 0) {
                vector<vector<bool>> visited(n, vector<bool>(m, false));
                queue<Cell> q;
                q.push(Cell(i, j, 0));

                while (!q.empty()) {
                    Cell curr = q.front();
                    q.pop();
                    int currRow = curr.row;
                    int currCol = curr.col;
                    int currDist = curr.dist;

                    if (matrix[currRow][currCol] == 0 && (minDist == -1 || currDist < minDist)) {
                        minDist = currDist;
                    }
                    if(matrix[currRow][currCol] == 0){
                        currDist=0;
                    }

                    for (int k = 0; k < 4; ++k) {
                        int newRow = currRow + dr[k];
                        int newCol = currCol + dc[k];

                        if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && !visited[newRow][newCol]) {
                            q.push(Cell(newRow, newCol, currDist + 1));
                            visited[newRow][newCol] = true;
                        }
                    }
                }
            }
        }
    }

    return minDist;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int result = minDistanceBetweenZeros(matrix);
    cout << result << endl;
    }

    return 0;
}
