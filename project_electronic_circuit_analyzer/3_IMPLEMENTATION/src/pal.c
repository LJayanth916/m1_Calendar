#include "fun.h"
double pal(Mm*bat, int check){
    double hr,ds;
    bat->current = (bat->voltage)/(bat->rea * pow(10,bat->units));
    printf("The current in the circuit is: %0.9lf",bat->current);
    printf("\n");
    switch(check){
        case 1: printf("Enter the bat power rating (in AH): ");
                scanf("%lf",&bat->val);
                printf("Enter the total time(in hrs) the circuit will be on in a day: ");
                scanf("%lf",&hrs);
                printf("Enter (approx) number of times it will be used in a day (Enter 1 if it will stay on 24*7): ");
                scanf("%lf",&ds);
                printf("\n\n");
                printf("The circuit will run for: %0.9lf ds\n",(bat->units)/(hrs * ds * bat->current));
                return ((pow(bat->current,2))*(bat->rea * pow(10,bat->units)));
                break;
        case 2: return ((pow(bat->current,2))*(bat->rea * pow(10,bat->units)));
        default: printf("Invalid Input, restart the program\n");
        break;
    }
}