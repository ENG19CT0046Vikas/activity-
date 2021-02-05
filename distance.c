//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>

 int dist(int x1,int x2,int y1,int y2)
 {
            int x,y,result;

            x = (x2 - x1);
            y =( y2 - y1);
   
            result =sqrt(x*x + y*y);
            return result;
  }

int main()
{
             int x1, y1,x2,y2,distance;

             printf("Enter the coordinates for the first point:/n");
             scanf("%d%d",&x1,&y1);
    
             printf("Enter the coardinates for the second point:/n");
             scanf("%d%d",&x2,&y2);

             distance =dist(x1,x2,y1,y2);
printf("the  distance between the two points is =%d/n",distance);
return 0;
}




