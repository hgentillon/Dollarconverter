

#include <stdio.h>

int main(void) {
double dollarAmount;
double poundAmount;
double poundConversionRate = 0.6;
double yenAmount;
double yenConversionRate = 76.8;

printf(" Please input the total amount of Us Dollars: ");
scanf("%lf", &dollarAmount);

dollarAmount = dollarAmount * 0.9;
poundAmount  = (dollarAmount * 0.5) * poundConversionRate;
yenAmount    = (dollarAmount * 0.5) * yenConversionRate;

printf("You get %lf British Pounds and %lf Japanese JPY\n", poundAmount,yenAmount);

return 0; 

}