#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    // รายการอาหาร
    char *food[] = {
        "ข้าวกะเพราหมู",
        "ข้าวมันไก่",
        "ก๋วยเตี๋ยวหมู",
        "ข้าวผัดหมู",
        "ผัดซีอิ๊ว",
        "ราดหน้า",
        "ข้าวไข่เจียว",
        "ข้าวหมูทอด"
    };

    // ราคาอาหาร
    int price[] = {
        50,
        45,
        40,
        50,
        45,
        50,
        35,
        50
    };

    int budget;
    int count = 0;
    int choice;

    // ใช้เวลาปัจจุบันเป็นค่าเริ่มต้นของการสุ่ม
    srand(time(NULL));

    printf("====================================\n");
    printf("        FOOD RANDOMIZER 🍜\n");
    printf("====================================\n");

    printf("วันนี้คุณมีงบเท่าไหร่? : ");
    scanf("%d", &budget);

    // ตรวจสอบว่ามีอาหารที่อยู่ในงบหรือไม่
    for (int i = 0; i < 8; i++) {
        if (price[i] <= budget) {
            count++;
        }
    }

    // ถ้าไม่มีอาหารที่อยู่ในงบ
    if (count == 0) {
        printf("\n❌ ไม่มีเมนูที่อยู่ในงบ %d บาท\n", budget);
        printf("ลองเพิ่มงบประมาณดูนะ!\n");
        return 0;
    }

    // สุ่มจนกว่าจะได้อาหารที่อยู่ในงบ
    do {
        choice = rand() % 8;
    } while (price[choice] > budget);

    // แสดงผล
    printf("\n🎲 กำลังสุ่มอาหาร...\n");
    printf("\n====================================\n");
    printf("🍽️ วันนี้กิน: %s\n", food[choice]);
    printf("💰 ราคา: %d บาท\n", price[choice]);
    printf("💵 งบของคุณ: %d บาท\n", budget);
    printf("💸 เหลืองบ: %d บาท\n", budget - price[choice]);
    printf("====================================\n");

    return 0;
}