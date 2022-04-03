#include "fun.h"
double series(int res, Mm*ind, Mm *cap, Mm*fre, Mm*resi){
    if(res == 1){
        printf("Enter number of resistors : ");
        scanf("%d",&resi->number);
        printf(" Do you know the values of the resistors?(1.yes/2.no): ");
        scanf("%d",&resi->days);
        resi->rea = 0;
        switch(resi->days){
            case 1:   for(int i=0;i<resi->number;i++){
                            printf("Enter value for resistor[%d] : ",i+1);
                            scanf("%lf",&resi->array[i]);
                            printf("Enter the power of the units(for example: for kohm enter 3): ");
                            scanf("%lf",&resi->units);
                            resi->rea += (resi->array[i] * pow(10,(resi->units)));
                        }
            break;
            case 2:   for(int i=0;i<resi->number;i++){
                            printf(" Enter the number of bands in resistor[%d}: ",i+1);
                            scanf("%lf",&resi->units);
                            if(resi->units == 4){
                                resi->array[i] = reg4band();
                                resi->rea += resi->array[i];
                            }
                            else if(resi->units == 5){
                                resi->array[i] = reg5band();
                                resi->rea += resi->array[i];
                            }
                        }
                        break;
            default: printf("Invalid Input, restart the program\n");
            break;
        }
        printf("Total Series resi accross the circuit : %0.9lf ohms\n", resi->rea);
        Sres = resi->rea;
        printf(" Enter the voltage supplied to the circuit to find the current: ");
        scanf("%lf",&resi->voltage);
        printf("The current (in amperes) throught the circuit is: ");
        return (resi->voltage/resi->rea);
    }
    else if(res == 2){
        printf("Enter number of Inductors : ");
        scanf("%d",&ind->number);
        printf("Enter fre: ");
        scanf("%lf",&fre->val);
        printf("Enter the power of the units(for example: for KHz enter 3): ");
        scanf("%lf",&fre->units);
        printf("\n");
        ind->rea = 0;
        for(int i=0;i<ind->number;i++){
            printf("[%d] : ",i+1);
             printf("Enter ind value: ");
            scanf("%lf",&ind->val);
            printf("Enter the power of the units(for example: for microHenry enter -6): ");
            scanf("%lf",&ind->units);
            ind->array[i] = inductor(fre->val,ind->val,fre->units,ind->units);
            ind->rea += ind->array[i];
        }
        printf("Total Series ind accross the circuit : %0.9lf ohms\n", ind->rea);
        Sres = ind->rea;
        printf(" Enter the voltage supplied to the circuit to find the current: ");
        scanf("%lf",&ind->voltage);
        printf("\n");
        printf("The current (in amperes) throught the circuit is: ");
        return (ind->voltage/ind->rea);
    }
    else if(res == 3){
        printf("Enter number of Capacitors : ");
        scanf("%d",&cap->number);
        printf("\n");
        cap->rea = 0;
        for(int i=0;i<cap->number;i++){
            printf("[%d] : ",i+1);
            cap->array[i] = capacitor(fre->val,cap->val,fre->units,cap->units);
            cap->rea += 1/(cap->array[i]);
        }
        cap->rea = pow(cap->rea,-1);
        printf("Total Series cap accross the circuit : %0.9lf ohms\n", cap->rea);
        Sres = cap->rea;
        printf(" Enter the voltage supplied to the circuit to find the current: ");
        scanf("%lf",&cap->voltage);
        printf("\n");
        printf("The current (in amperes) throught the circuit is: ");
        return (cap->voltage/cap->rea);
    }
    else if(res == 4){
        printf("Enter Equivalent resi value: ");
        scanf("%lf",&resi->val);
        printf("Enter the power of the units(for example: for kohm enter 3): ");
        scanf("%lf",&resi->units);
        printf("Enter Equivalent ind value: ");
        scanf("%lf",&ind->val);
        printf("Enter the power of the units(for example: for microHenry enter -6): ");
        scanf("%lf",&ind->units);
        printf("Enter Equivalent cap value: ");
        scanf("%lf",&cap->val);
        printf("Enter the power of the units(for example: for microfarad enter -6): ");
        scanf("%lf",&cap->units);
        printf("Enter Equivalent fre: ");
        scanf("%lf",&fre->val);
        printf("Enter the power of the units(for example: for KHz enter 3): ");
        scanf("%lf",&fre->units);
        printf("Enter voltage accross the circuit(enter 0 if you know only current): ");
        scanf("%lf",&resi->voltage);
        printf("\n\n");
        return RLC(1, ind, cap, fre, resi);
    }
    else{
        printf("Invalid Input, restart the program\n");
        return 0;
    }
}    