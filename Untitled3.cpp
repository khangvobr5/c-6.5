#include <stdio.h>

int main() {
    int year, month, days;
    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap tháng: ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Tháng không hop le.\n");
    } else {
        switch (month) {
            case 1: // Tháng 1
            case 3: // Tháng 3
            case 5: // Tháng 5
            case 7: // Tháng 7
            case 8: // Tháng 8
            case 10: // Tháng 10
            case 12: // Tháng 12
                days = 31;
                break;
            case 4: // Tháng 4
            case 6: // Tháng 6
            case 9: // Tháng 9
            case 11: // Tháng 11
                days = 30;
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    days = 29;
                } else {
                    days = 28;
                }
                break;
            default:
                days = 0;
        }
        if (days > 0) {
            printf("Tháng %d nam %d có %d ngày.\n", month, year, days);
        }
    }

    return 0;
}

