#include <stdio.h>
#include <stdlib.h>

int main() {
    int run = 1;
    while (run) {
        char cmd[10];
        printf("#");
        scanf("%s", cmd);
        if (strcmp(cmd, "add") == 0) {
            int numa, numb, ans;
            printf("enter num 1 ");
            scanf("%d", &numa);
            printf("enter num 2 ");
            scanf("%d", &numb);
            ans = numa + numb;
            printf("%d\n", ans);
        }
        else if (strcmp(cmd, "sub") == 0) {
            int numa, numb, ans;
            printf("enter num 1 ");
            scanf("%d", &numa);
            printf("enter num 2 ");
            scanf("%d", &numb);
            ans = numa - numb;
            printf("%d\n", ans);
        }
        else if (strcmp(cmd, "mult") == 0) {
            int numa, numb, ans;
            printf("enter num 1 ");
            scanf("%d", &numa);
            printf("enter num 2 ");
            scanf("%d", &numb);
            ans = numa * numb;
            printf("%d\n", ans);
        }
        else if (strcmp(cmd, "divi") == 0) {
            int numa, numb;
            float ans;
            printf("enter num 1 ");
            scanf("%d", &numa);
            printf("enter num 2 ");
            scanf("%d", &numb);
            ans = (float)numa / numb;
            printf("%f\n", ans);
        }
        else if (strcmp(cmd, "exp") == 0) {
            int numa, numb, ans;
            printf("enter num 1 ");
            scanf("%d", &numa);
            printf("enter num 2 ");
            scanf("%d", &numb);
            ans = pow(numa, numb);
            printf("%d\n", ans);
        }
        else if (strcmp(cmd, "exit") == 0) {
            run = 0;
        }
    }
    return 0;
}

