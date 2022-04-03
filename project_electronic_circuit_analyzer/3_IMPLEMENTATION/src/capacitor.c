#include "fun.h"
#include<math.h>
double capacitor(double fv, double cv, double fu, double cu){
    double va=(1/(2*pi*fv*cv))*(1/(pow(10,fu)*pow(10,cu)));
    