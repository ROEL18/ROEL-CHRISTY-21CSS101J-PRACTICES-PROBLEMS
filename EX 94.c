#include<stdio.h>
int main()
{   
    printf("RA2211042010019\n");
    float basic_salary, bonus, gross_salary;
    printf("Enter basic salary ");
    scanf("%f", &basic_salary);
    bonus = (basic_salary*10)/100;
    gross_salary = bonus + basic_salary;
    printf("\nBonus = %f", bonus);
    printf("\nGross salary = %f", gross_salary);
  
    return 0;
}
