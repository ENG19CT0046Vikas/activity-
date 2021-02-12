//WAP to find the distance between two points using structures and 4 functions.
 #include<stdio.h>
#include<math.h>

struct point
{
float u1,u2,v1,v2;
}a,b; 

float input()
{
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
}

float display(float firstpoint,float secondpoint,float distance)
{

printf("the distance of two points %f and %f is: %f\n",firstpoint,secondpoint,distance);
}

float output()
{
 float firstpoint,secondpoint,distance;
 firstpoint = b.u2 - a.u1;
 secondpoint = b.v2 -a.v1;
 distance = sqrt(firstpoint*firstpoint + secondpoint*secondpoint);
 display(firstpoint,secondpoint,distance);
 return distance;
}

int main()
{
input();
output();


return 0;
}

 

 

