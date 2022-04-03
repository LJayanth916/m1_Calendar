#include "fun.h"
#include<math.h>
double inductor(double fv, double iv, double fu, double iu){
    double val=(2*pi*iv*fv)*pow(10,iu)*pow(10,fu);
    return val;
}