#include<stdio.h>
struct point {
    int math, english, computer;
};
int main() {
    int i, n,math = 0,english = 0,computer = 0;
    struct point student[80];
    printf("How much student need to accrue?\n");
    scanf_s("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Input No.%d student's math,english and computer point.(xx xx xx)\n",i+1);
        scanf_s("%d %d %d", &student[i].math, &student[i].english, &student[i].computer);
        math += student[i].math;
        english += student[i].english;
        computer += student[i].computer;
    }
    printf("Math,english and compupter 's avrage point is %.2f,%.2f and %.2f", math / n, english / n, computer / n);
}