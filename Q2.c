#include <stdio.h>
int main()
{
    int Phy,Chem, Eng, Math, Cs; 
    float avg; 

    printf("Enter Marks for Phy: \n");
    scanf("%d", &Phy);

    printf("Enter Marks for Chem: \n");
    scanf("%d", &Chem);

    printf("Enter Marks for Eng: \n");
    scanf("%d", &Eng);

    printf("Enter Marks for math: \n");
    scanf("%d", &Math);

    printf("Enter Marks for Cs: \n");
    scanf("%d", &Cs);

    avg = (Phy + Chem + Eng + Math + Cs) / 5.0;

    printf("Percentage = %.2f\n", avg);

    return 0;
}