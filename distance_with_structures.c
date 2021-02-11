//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>

struct point
{
float u1,u2,v1,v2;
}
a,b; 
float display(float firstpoint,float secondpoint)
{
float distance;
distance =sqrt(firstpoint*firstpoint +secondpoint*secondpoint);
return distance;
}

int main()
{
float firstpoint,secondpoint,distance ;
printf("first point:\n");
printf("enter value for u:\n");
scanf("%f",&a.u1);
printf("enter the value for v:\n");
scanf("%f",&a.v1);

printf("for second point:\n");
printf("enter the value for u:\n");
scanf("%f",&b.u2);
printf("enter the value for v:\n");
scanf("%f",&b.v2);

firstpoint =b.u2 - a.u1;
secondpoint = b.v2 -a.v1;

distance = display(firstpoint,secondpoint);

printf("the distance of two points is %f and %f\n",firstpoint,secondpoint,distance);

return 0;
}

