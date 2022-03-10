#include <stdio.h>
/* My name Is : Mahdi Jamadian.
 * My Gmail :  Mr.jamadian@gmail.com
 * Instagram :Mahdi_Jamadian
 * My Git hub : Mahdi_Jamadian
 * */

int main() {
  int age,weight;
    printf("Enter your age :");
    scanf("%d",&age);
    printf("Enter your weight :");
    scanf("%d",&weight);
    /*20*/
    if(age<=20 & age>0 & weight<=60 & weight>=20)
        printf("Exercise 2 hours a day \n mountaineering 1 times a week \n volleyball or basketball 2 times a week ");
    else if(age<=20&age>0&weight>60&weight<=80)
        printf("Exercise 4 hours a day - Mountaineering 2 times a week - Tennis a week 3 times hours - Pool 2 times a week");
        /*30*/
    else if(age>20&age<=30&weight<=60&weight>=20)
        printf("Exercise 1.5 hours a day - Mountaineering 1 times a week - Pool 2 times a week - Light diet .");
    else if(age>20&age<=30&weight<=80&weight>20)
        printf("Exercise 1.5 hours a day - Mountaineering 1 times a week - Pool 2 times a week - Heavy diet");
        /*40*/
    else if(age>30&age<=40&weight<60&weight>=20)
        printf("Exercise 1 hour a day - Mountaineering 2 times a month - Pool 3 times a week - Walking 2 times a week");
    else if(age>30&age<=40&weight==80)
        printf("Exercise 1 hour a day - Mountaineering 3 times a month - Pool 3 times a week - Walking every day");
        /*50*/
    else if(age>40&age<=50&weight>=60&weight<=80)
        printf("Exercise 1 hour a day - Exercise 1 hour every day - Pool twice a week - Walk every day - Balanced diet");
    else
        printf("Exercise 1 hour a day - Exercise every day - Pool twice a week - Mountaineering once a week - Walking every day - Balanced diet");

    return 0;
}
