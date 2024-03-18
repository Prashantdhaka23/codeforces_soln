#include <iostream>
#include <vector>
#include <algorithm>
#define int                             long long    //in case of mle ,tle high constraints

using namespace std;

struct Participant {
    int index;
    int score;
    long long  penalty;
};

bool compareParticipants(const Participant& p1, const Participant& p2) {
    if(p1.score==p2.score && p1.penalty==p2.penalty){
        return p1.index < p2.index;
    }
    if (p1.score == p2.score)
        return p1.penalty < p2.penalty;
    return p1.score > p2.score;
}

int32_t main() {

    int t;
    cin>>t;
    while(t--){
    int n, m, h;
    std::cin >> n >> m >> h;

    std::vector<std::vector<int>> times(n, std::vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> times[i][j];
        }
    }

    std::vector<Participant> participants(n);
    for (int i = 0; i < n; ++i) {
        participants[i].index = i + 1;
        std::sort(times[i].begin(), times[i].end());
        participants[i].score = 0;
        participants[i].penalty = 0;

        int remainingTime = h;
        long long  d=0;
        for (int j = 0; j < m; ++j) {
            d+=times[i][j];
            if (remainingTime >= times[i][j]) {
                participants[i].score++;
                participants[i].penalty += d;
                remainingTime -= times[i][j];
            } else {
                break;
            }
        }
    }

    std::sort(participants.begin(), participants.end(), compareParticipants);

    int rudolfPosition = 1;
    for (int i = 0; i < n; ++i) {
        if (participants[i].index == 1) {
            break;
        }
        rudolfPosition++;
    }

    std::cout << rudolfPosition << std::endl;

    }

    return 0;
}
