#include<stdio.h>
int main(){
    int Day,Month,Year;
    do{
        printf("Enter the Day,Month and Year:");
    scanf("%d %d %d",&Day,&Month,&Year);
    if (Day < 1 || Day > 31 || Month < 1 || Month > 12) {
        printf("Invalid date! Please enter legible values.\n");
    }
    }while(Day < 1 || Day > 31 || Month < 1 || Month > 12);
    switch (Month)
    {
    case 1:
        if(Day<31){
        printf("%d:%d:%d",Day+1 ,Month,Year);
    }
    else{
        printf("%d:%d:%d",1,Month+1,Year);}
        break;
     case 2:
        if((Year%400==0) || (Year%100!=0 && Year%4==0)){
       if(Day<29){
        printf("%d:%d:%d",Day+1 ,Month,Year);
    }
    else{
        printf("%d:%d:%d",1,Month+1,Year);}}
    else{
        if(Day<28){
             printf("%d:%d:%d",Day+1,Month,Year);
        }
        else{
            printf("%d:%d:%d",1,Month+1,Year);
        }}
        break;
     case 3:
        if(Day<31){
        printf("%d:%d:%d",Day+1,Month,Year);
       } 
       else{
        printf("%d:%d:%d",01,Month+1,Year);
       }
       break;
     case 4:
        if(Day<30){
        printf("%d:%d:%d",Day+1,Month,Year);
       } 
       else{
        printf("%d:%d:%d",01,Month+1,Year);
       }
       break;
     case 5:
        if(Day<31){
        printf("%d:%d:%d",Day+1,Month,Year);
       } 
       else{
        printf("%d:%d:%d",01,Month+1,Year);
       }
       break;
     case 6:
        if(Day<30){
        printf("%d:%d:%d",Day+1,Month,Year);
       } 
       else{
        printf("%d:%d:%d",01,Month+1,Year);
       }
       break;
     case 7:
        if(Day<31){
        printf("%d:%d:%d",Day+1,Month,Year);
       } 
       else{
        printf("%d:%d:%d",01,Month+1,Year);
       }
       break;
     case 8:
        if(Day<31){
        printf("%d:%d:%d",Day+1,Month,Year);
       } 
       else{
        printf("%d:%d:%d",01,Month+1,Year);
       }
       break;
     case 9:
        if(Day<30){
        printf("%d:%d:%d",Day+1,Month,Year);
       } 
       else{
        printf("%d:%d:%d",01,Month+1,Year);
       }
       break;
     case 10:
        if(Day<31){
        printf("%d:%d:%d",Day+1,Month,Year);
       } 
       else{
        printf("%d:%d:%d",01,Month+1,Year);
       }
       break;
     case 11:
        if(Day<30){
        printf("%d:%d:%d",Day+1,Month,Year);
       } 
       else{
        printf("%d:%d:%d",01,Month+1,Year);
       }
       break;
     case 12:
        if(Day<31){
        printf("%d:%d:%d",Day+1,Month,Year);
       } 
       else{
        printf("%d:%d:%d",01,01,Year+1);
       }
    default:
        break;
    }
}