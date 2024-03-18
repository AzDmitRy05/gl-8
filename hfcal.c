#include <stdio.h>
#include "hfcal.h"

// Define color escape sequences
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define PURPLE  "\x1b[35m" // Define purple color escape sequence
#define RESET   "\x1b[0m"

void dcal(float weight, float distance, float coeff)
{
    printf(YELLOW "Вес: %3.2f кг\n" RESET, weight); // Set text color to yellow
    printf(GREEN "Расстояние: %3.2f мили\n" RESET, coeff * weight * distance);
    printf(PURPLE "Сожжено калорий: %4.2f кал\n" RESET, coeff * weight * distance); // Set text color to purple
} 