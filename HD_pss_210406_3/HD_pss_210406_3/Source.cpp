#include<stdio.h>

#include<stdio.h>

void main() {
    int diameter;
    printf("�����ǰ��� �Է��ϼ���");
    float PI = 3.141592;
    scanf_s("%d", &diameter); 
    float radius = diameter / 2;
    float roundOfCircle = diameter * PI;
    float areaOfCircle = radius * radius * PI;


    

    printf("���� ���� = %f, ���� �ѷ� = %f\n", roundOfCircle, areaOfCircle);
    fgetc(stdin);
}