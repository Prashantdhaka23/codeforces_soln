#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int minManhattanDistance(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    vector<pair<int, int>> occupiedSeats;
    vector<pair<int, int>> emptySeats;

    // Iterate through the matrix to find occupied and empty seats.
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] == 1) {
                occupiedSeats.push_back({i, j});
            } else {
                emptySeats.push_back({i, j});
            }
        }
    }


    if (emptySeats.empty()) {
        return -1; // No empty seats available.
    }

    int minDistance = INT_MAX;

    // Calculate the Manhattan distance for each empty seat.
    for (const auto& emptySeat : emptySeats) {
        for (const auto& occupiedSeat : emptySeats) {
            if(emptySeat==occupiedSeat)continue;
            int distance = abs(emptySeat.first - occupiedSeat.first) + abs(emptySeat.second - occupiedSeat.second);
            minDistance = min(minDistance, distance);
        }
    }
    if(minDistance==INT_MAX)return -1;

    return minDistance;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> matrix(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }

        int result = minManhattanDistance(matrix);
        cout << result << endl;
    }

    return 0;
}
