#include "fun.h"
#include<math.h>
double bat_data(int R, double vol, double cur, double ds, double num){
    double prate=(ds*num*cur);
    if(R==1){
        if(vol==9){
            if(prate<=0.2 && cur<=0.01){
                printf("Use a Lithium Coin Cell - vol = 3V * 3 (in series), Power Rating = 200mAH\n");
            }
            else if(prate<=0.5&&cur<=0.03){
                printf("Use a 9V PPS battery - vol = 9V, Power Rating = 500mAH\n");
            }
            else if(prate<= && cur<=0.01){
                printf("Use series combination of Alkaline AAA batteries - vol = 1.5V * 6, power Rating = 1000mAH\n");
            }
            else if(prate<=2.5 && cur<=0.05){
                printf("Use series combination of Alkaline AA batteries - vol = 1.5V * 6, power Rating = 2500mAH\n");
            }
            else if(prate<=8 && cur<=0.1){
                printf("Use series combination of Alkaline C batteries - vol = 1.5V * 6, power Rating = 8000mAH\n");
            }
            else{
                printf("A non-rechargeable battery for the given configuration is not available\n");
            }
        }
        else if(vol<9 && vol>=1.5){
            if(rem(vol,3)==0){
                if(prate <= 0.2 && cur<=0.01){
                    printf("Use a Lithium Coin Cell - vol = 3V * %lf, Power Rating = 200mAH\n", vol/3);
                }
                else if(prate<=1 && cur<=0.01){
                    printf("Use series combination of Alkaline AAA batteries - vol = 1.5V * %lf, power Rating = 1000mAH\n",vol/3);
                }
                else if(prate<=2.5 && cur<=0.05){
                    printf("Use series combination of Alkaline AA batteries - vol = 1.5V * %lf, power Rating = 2500mAH\n",vol/3);
                }
                else if(prate<=8 && cur<=0.1){
                    printf("Use series combination of Alkaline C batteries - vol = 1.5V * %lf, power Rating = 8000mAH\n",vol/3);
                }
                else{
                    printf("A non-rechargeable battery for the given configuration is not available\n");
                }
            }
            else if(rem(vol,1.5)==0){
                if(prate<=1 && cur<=0.01){
                    printf("Use series combination of Alkaline AAA batteries - vol = 1.5V * %lf, power Rating = 1000mAH\n",vol/1.5);
                }
                else if(prate <= 2.5 && cur<=0.05){
                    printf("Use series combination of Alkaline AA batteries - vol = 1.5V * %lf, power Rating = 2500mAH\n",vol/1.5);
                }
                else if(prate<=8 && cur<=0.1){
                    printf("Use series combination of Alkaline C batteries - vol = 1.5V * %lf, power Rating = 8000mAH\n",vol/1.5);
                }
                else{
                    printf("A non-rechargeable battery for the given configuration is not available\n");
                }
            }
        }
        else{
            printf("Enter the vol between [1.5V to 9V], restart the program\n");
        }
    }
    else if(R==2){
        if(vol>=3.7){
            if(rem(vol,3.7)==0 || rem(vol,1.5)==0){
                if(prate <= 6){
                    printf("Use series combination of Lithium ion (LiFeS2) batteries - vol = 3.7V or 1.5V, power Rating = 6000mAH\n");
                }
                else{
                    printf("A Rechargeable battery for the given configuration is not available\n");
                }
            }
            else if(rem(vol,1.2)==0){
                if(prate<=2.7){
                    printf("Use series combination of NiCd or NiMH batteries - vol = 1.2V*%lf, power Rating = 2700mAH\n",rem(vol,1.2));
                }
                else{
                    printf("A Rechargeable battery for the given configuration is not available\n");
                }
            }
        }
    }
    else{ 
        printf("Invalid Input, restart the program\n");
    }
    return prate;
}