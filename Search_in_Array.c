#include <stdio.h>

int main() {
    int n,m , target, found = 0;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == target) {
                found = 1;
              printf("will not take number");
                break;
            }
        }
        if (found) 
        break;
    }

    if (!found) {
        printf("will take number");
    }

    return 0;
}
