/*
Name:Mwaniki Maureen Wangui 
Reg no:CT100/G/26135/25
Description:Hours worked in a week and the hourly wage
*/

#include <stdio.h>

int main() {
    float hours, rate, grossPay, tax, netPay;
    float regularHours = 40.0;

    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);

    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    // Calculate gross pay
    if (hours <= regularHours) {
        grossPay = hours * rate;
    } else {
        float overtimeHours = hours - regularHours;
        grossPay = (regularHours * rate) + (overtimeHours * rate * 1.5);
    }

    // Calculate tax
    if (grossPay <= 600) {
        tax = 0.15 * grossPay;
    } else {
        tax = (0.15 * 600) + (0.20 * (grossPay - 600));
    }

    netPay = grossPay - tax;

    // Output results
    printf("\nGross Pay: $%.2f", grossPay);
    printf("\nTaxes: $%.2f", tax);
    printf("\nNet Pay: $%.2f\n", netPay);

    return 0;
}
