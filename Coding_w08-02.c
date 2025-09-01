#include <stdio.h>

int main() {
    int start, stop;
    // รับค่า start number และ stop number จากผู้ใช้
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter stop number: ");
    scanf("%d", &stop);

    // แสดงข้อความตามที่กำหนด
    printf("Start number is %d and stop number is %d\n", start, stop);
    printf("ลำดับตัวเลข จากค่าเริ่มต้น เพิ่มทีละ 1 ไปถึงค่าสุดท้าย ในบรรทัดเดียวกัน\n");

    // แสดงลำดับตัวเลขจาก start ถึง stop
    for (int i = start; i <= stop; i++) {
        printf("%d ", i);
    }
    printf("\nThank you.\n");

    // คำอธิบาย:
    // 1. โปรแกรมรับค่าตัวเลขเริ่มต้น (start) และค่าสุดท้าย (stop) จากผู้ใช้ผ่านแป้นพิมพ์
    // 2. แสดงข้อความแจ้งค่าที่รับมา
    // 3. แสดงข้อความอธิบายการแสดงลำดับตัวเลข
    // 4. ใช้ for loop ในการแสดงลำดับตัวเลขจาก start ถึง stop โดยเพิ่มทีละ 1
    // 5. แสดงข้อความ Thank you. เมื่อจบการทำงาน
    return 0;
}
