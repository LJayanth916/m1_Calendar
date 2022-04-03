#include "fun.h"
double RLC(int n, Mm*ind, Mm*cap, Mm*fre, Mm*restrict){
    double pa,para;
    res->rea = res->val * pow(10,res->units);
    ind->rea= 2*pi*ind->val*fre->val*pow(10,ind->units)*pow(10,fre->units);
    cap->rea= 1/(2*pi*cap->val*fre->val*pow(10,cap->units)*pow(10,fre->units));
    if(n == 1){
        printf("The parameters for Series RLC Connections are as follows: \n\n");
        para= sqrt(pow(res->rea,2)*pow((ind->rea-cap->rea),2));
        Sres = para;
        pa = Sres;
        printf("The Impedance is: %0.9lf ohm\n",para);
        printf("The power factor of the circuit is: %0.9lf\n", res->rea/Sres);
        printf("The phase angle is: %0.9lf degrees\n", (((acos(res->rea/Sres))*180)/pi));
    }
    else{
        para= pow((sqrt(pow((1/res->rea),2) + pow(((1/ind->rea)-(1/cap->rea)),2))),-1);
        Pres = para;
        pa= Pres;
        printf("The Impedance is: %0.9lf ohm\n",para);
        printf("The power factor of the circuit is: %0.9lf\n", Pres/res->rea);
        printf("The phase angle is: %0.9lf degrees\n", (((acos(Pres/res->rea))*180)/pi));
    }
    para= res->voltage;
    if(para!= 0){
        printf("The current (in Ampere) in the circuit is: ");
        return para/pa;
    }
    else{
        printf("Enter the value of Current: ");
        scanf("%lf",&para);
        printf("The voltage (in Volts) accross the circuit is: ");
        return para * pa;
    }
}