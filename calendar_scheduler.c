/**
 * This program prints the schedule for a given date in the Fall'20 Semester of a Boston University CS Student.
 **/

#include <stdio.h>

int main() {
    int month, day;

    printf("Enter date (mm/dd): ");
    // Check using reference binary
    // This is my first comment
    scanf("%d/%d",&month,&day);

    // code to check for an invalid calander date
   if (1>day || day>31){
        printf("Day values must be between 1 and 31.");
        return 0;
    }
    if(1>month || month>12){
        printf("Month values must be between 1 and 12.");
        return 0;
    }
    if (month ==2 && day>28){
        printf("Invalid February date for year 2020.");
        return 0;
    }

    switch(month){
        // code to test for scheduled calander dates and vacations and other important dates
        case 9: if (day==3 || day==8 || day==10 || day==15 || day==17 || day==22 || day==24 || day==29){
                printf("Lecture.");
                } 
                else if (day==14 || day==21 || day==28){
                printf("Discussion.");
                }
                else if (day==7){
                printf("Labor Day.");
                }
                else{
                printf("No class on this day.");
                }
                break;

        case 10: if (day==1|| day==8 || day==15 || day==20 || day==22 || day==27 || day==29){
                printf("Lecture.");
                }
                else if (day==5 || day==13 || day==19 || day==26){
                printf("Discussion.");
                }
                else if (day==6){
                printf("MIDTERM.");
                }
                else if (day==7){
                printf("Drop without W.");
                }
                else if (day==12){
                printf("Columbus Day.");
                }
                else{
                printf("No class on this day.");
                }
                break;

        case 11: if (day==3 || day==10 || day==12 || day==17 || day==19 || day==24){
                printf("Lecture.");
                }
                else if (day==2 || day==9 || day==16 || day==23 || day==30 ){
                printf("Discussion.");
                }
                else if (day==5){
                printf("MIDTERM.");
                }
                else if (day==6){
                printf("Drop with W.");
                }
                else if (day==25 || day==26 || day==27 || day==28 || day==29 ){
                printf("Thanksgiving recess.");
                }
                else{
                printf("No class on this day.");
                }
                break;

        case 12: if (day==1 || day==3 || day==8){
                 printf("Lecture.");
                }
                else if (day==7){
                printf("Discussion.");
                }
                else if (day==10){
                printf("Last day of classes.");
                }
                else{
                printf("No class on this day.");
                }
                break;
        // default statement to "No class on this day."
        default: printf("No class on this day."); break;
    }

    return 0;

    }
