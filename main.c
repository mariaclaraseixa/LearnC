#include <stdio.h>

float temperature (float celsius) {
    return celsius + 273.15;
}


int main () {
    // create a function that  receives the temperature in Celsius degree
    // then convert to Kelvin degree
    // the conversion formula is: K = C + 273.15
    float kelvin, celsius;
    printf ("enter the degree in Celsius");
    scanf("%i", &celsius);
    kelvin = temperature(celsius);
    printf("the result of the conversion is: %.2f (Kelvin)\n", kelvin);
    return 0;
}
