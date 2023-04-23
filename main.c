#include <stdio.h>
#define KELVIN 273.15

/**
 * create a function that  receives the temperature in Celsius degree
 * then convert to Kelvin degree
 * the conversion formula is: K = C + 273.15
 */
float temperature (float celsius) {
    return celsius + KELVIN; // Conversion
}

/**
 * User input
 */
void view() {
    float kelvin, celsius;
    printf ("enter the degree in Celsius");
    scanf("%i", &celsius);
    kelvin = temperature(celsius);
    printf("the result of the conversion is: %.2f (Kelvin)\n", kelvin);
}

int main () {
    view();
    return 0;
}
