#include<stdio.h>
int main(){
    double grossSal, baseSal, da, hra;
    printf("Enter Basic Salary: ");
    scanf("%lf",&baseSal);
    da = (50 * baseSal) / 100;
    hra = (40 * baseSal) / 100;
    grossSal = baseSal + hra + da;
    printf("Gross Salary: %.2lf", grossSal);
    printf("\n\n");
}