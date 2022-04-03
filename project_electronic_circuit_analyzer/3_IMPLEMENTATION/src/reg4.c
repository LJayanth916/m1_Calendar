#include "fun.h"
char * colorcode(int v){
    switch(var){
        case 0:
            return "black";
        case 1:
            return "brown";
        case 2:
            return "red";
        case 3:
            return "orange";
        case 4:
            return "yellow";
        case 5:
            return "green";
        case 6:
            return "blue";
        case 7:
            return "violet";
        case 8:
            return "grey";
        case 9:
            return "white";
        default:
            return "Invalid";
    }
}
double reg4(){
    for(int i=0;i<=9;i++){
        printf("Press %d for %s \n",i,colorcode(i));
    }
    int arr[3];
    int flag=0;
    double val;
    for(int i=0;i<3;i++){
        printf("Enter the val of %d band ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]>9 || arr[i]<0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        val = (arr[0]*10 + arr[1]) * pow(10,arr[2]);
        return val; 
    }
    else{
        printf("Invalid choice");
    }
    return 0;
}