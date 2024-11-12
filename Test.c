// #include <stdio.h>

// int main() {  
//     int n;
//     scanf("%d", &n);

//     int a[n];
//     int i, count = 0;

//     // Reading array elements
//     for (i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     // Increment each element and check if it becomes 5
//     for (i = 0; i < n; i++) {
//         a[i]++;
//         if (a[i] == n) {
//             count++;
//         }
//     }

//     printf("%d\n", count);
//     return 0;
// }


#include<stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n; scanf("%d", &n);

    if(n >= 2 && n <= 12){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
     
    return 0;
}
