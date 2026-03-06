/**
 * celsius_to_fahrenheit.c
 *
 * Convert Celsius to Fahrenheit
 *
 * ============= 執行畫面範例 =============
 * Please enter Celsius: 25
 * The Fahrenheit is: 77.000000
 * =======================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius = 0.0, fahrenheit = 0.0;
    printf("Please enter Celsius: ");
    scanf("%f",&celsius);
    // ===================================
    // Input
    // ===================================
    // 請輸出 "Please enter Celsius: " 並讀取攝氏溫度

    // ===================================
    // Calculation
    // ===================================
    fahrenheit = celsius * 9 / 5 + 32;

    // ===================================
    // Output
    // ===================================
    // 請輸出華氏溫度結果
    printf("The Fahrenheit is: %f",fahrenheit);

    return 0;
}