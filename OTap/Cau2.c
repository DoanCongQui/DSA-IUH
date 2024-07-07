#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float x;
    float y;
} Point;

// Hàm tính khoảng cách cho 2 điểm
float tinh_kc(Point p1, Point p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main()
{
    // Khởi tạo 2 điểm
    Point p1, p2;

    // Nhập giá 2 điểm A và B
    printf("A(x, y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("B(x, y): ");
    scanf("%f %f", &p2.x, &p2.y);

    // In ra giá trị 2 điểm
    // printf("A(%.1f %.1f)\n", p1.x, p1.y);
    // printf("B(%.1f %.1f)\n", p2.x, p2.y);

    // Tính khoản cách giữa 2 điểm
    printf("%.2f\n", tinh_kc(p1, p2));
}
