#include <stdio.h>
#include <windows.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double t1, t2, t3;
    printf("������ �������� t1, t2 �� t3 ����� �����: ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    double speed1 = 1 / t1;
    double speed2 = 1 / t2;
    double speed3 = 1 / t3;

    double total_speed = speed1 + speed2 + speed3;
    double total_time = 1 / total_speed;

    printf("���, �� ���� ���� ����� 璿���� ����: %.2f �����\n", total_time);

    return 0;
}
