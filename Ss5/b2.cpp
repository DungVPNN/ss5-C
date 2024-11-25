#include <stdio.h>

int main() {
    int n = 42;
    int m;
    do {
        printf("Nhap so : ");
        scanf("%d", &m);
        if (m != n) {
            printf("So nhap vao sai\n");
        }
    } while (m != n);

    printf("Win");
    return 0;
}

