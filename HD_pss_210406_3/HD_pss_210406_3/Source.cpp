#include<stdio.h>

#include<stdio.h>

void main() {
    int diameter;
    float PI = 3.141592;
    scanf_s("%d", &diameter); 
    float radius = diameter / 2;
    float roundOfCircle = diameter * PI;
    float areaOfCircle = radius * radius * PI;


    scanf_s("지름의값을 입력하세요=%d", &diameter);

    printf("원의 넓이 = %f, 원의 둘레 = %f\n", roundOfCircle, areaOfCircle);
    fgetc(stdin);
}