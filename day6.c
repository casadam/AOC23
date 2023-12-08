#include "day6.h"

void TACTICS() {
    int time[4] = {61, 67, 75, 71};
    int dist[4] = {430, 1036, 1307, 1150};
    int sum = 1;
    for (int i = 0; i < 4; ++i) {
        int currSum = 0;
        for (int j = 0; j <= time[i]; ++j) {
            if (-(j - time[i]) * j > dist[i]) currSum++;
        }
        sum *= currSum;
    }
    printf("sepsum: %d\n", sum);
    unsigned long long int time2 = 61677571;
    unsigned long long int dist2 = 430103613071150;
    sum = 0;
    for (int i = 0; i <= time2; ++i) {
        if (-(i - time2) * i > dist2) sum++;
    }
    printf("bigsum: %d", sum);
}