#ifndef __FUN_H__
#define __FUN_H__
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double Sres;
typedef struct Mm{
    int number,days;
    double val,units,voltage,current,array[100],rea,days1,number1;
}Mm;
double Pres;
double reg4();
double reg5();
double capacitor(double fv,double cv,double fu,double cu);
double inductor(double fv,double iv,double fu,double iu);
double RLC(int n, Mm*ind, Mm*cap, Mm *fre, Mm*resi);
double series(int res, Mm*ind, Mm*cap, Mm *fre, Mm*resi);
double parallel(int res, Mm*ind, Mm*cap, Mm*fre, Mm*res);
double pal(Mm*bat, int check);
double bat_data(int R, double voltage, double current, double days, double times);
#define pi 3.14159265
#endif
 