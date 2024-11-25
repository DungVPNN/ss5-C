#include <stdio.h>

int main() {
    int choice, a, b;
    do {
        printf("CALCULATOR\n");
        printf("1. Tong\n");
        printf("2. Hieu\n");
        printf("3. Tich\n");
        printf("4. Thuong\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 4) {
            printf("Nhap so a: ");
            scanf("%d", &a);
            printf("Nhap so b: ");
            scanf("%d", &b);
        }

        switch (choice) {
            case 1:
                printf("Tong hai so: %d\n", a + b);
                break;
            case 2:
                printf("Hieu hai so: %d\n", a - b);
                break;
            case 3:
                printf("Tich hai so: %d\n", a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Thuong hai so: %d\n", a / b);
                else
                    printf("Loi: Khong the chia cho 0!\n");
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long thu lai.\n");
        }
        printf("\n");
    } while (choice != 5);

    return 0;
}

