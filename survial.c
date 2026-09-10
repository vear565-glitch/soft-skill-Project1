#include <stdio.h>

int main() {
    float money;
    int days;
    float foodPerDay;
    float travelPerDay;
    float emergency;
    
    float foodTotal;
    float travelTotal;
    float totalExpense;
    float remaining;
    float budgetPerDay;

    printf("====================================\n");
    printf("       STUDENT SURVIVAL SYSTEM\n");
    printf("====================================\n");

    // รับข้อมูล
    printf("Enter your current money: ");
    scanf("%f", &money);

    printf("Enter remaining days: ");
    scanf("%d", &days);

    printf("Enter food budget per day: ");
    scanf("%f", &foodPerDay);

    printf("Enter travel cost per day: ");
    scanf("%f", &travelPerDay);

    printf("Enter emergency reserve: ");
    scanf("%f", &emergency);

    // คำนวณ
    foodTotal = foodPerDay * days;
    travelTotal = travelPerDay * days;

    totalExpense = foodTotal + travelTotal + emergency;

    remaining = money - totalExpense;

    budgetPerDay = (money - emergency) / days;

    // แสดงผล
    printf("\n====================================\n");
    printf("           SURVIVAL REPORT\n");
    printf("====================================\n");

    printf("Current money     : %.2f Baht\n", money);
    printf("Remaining days    : %d days\n", days);

    printf("------------------------------------\n");

    printf("Food expense      : %.2f Baht\n", foodTotal);
    printf("Travel expense    : %.2f Baht\n", travelTotal);
    printf("Emergency reserve : %.2f Baht\n", emergency);

    printf("------------------------------------\n");

    printf("Total expense     : %.2f Baht\n", totalExpense);
    printf("Money remaining   : %.2f Baht\n", remaining);
    printf("Budget per day    : %.2f Baht\n", budgetPerDay);

    printf("------------------------------------\n");

    // ตรวจสอบสถานะ
    if (remaining > 0) {
        printf("STATUS: You can survive!\n");
    }
    else if (remaining == 0) {
        printf("STATUS: Exactly enough!\n");
    }
    else {
        printf("STATUS: WARNING! Money is not enough!\n");
    }

    printf("====================================\n");

    return 0;
}