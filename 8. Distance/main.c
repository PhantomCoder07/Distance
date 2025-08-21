// Normal
#include <stdio.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2,p1,p2,dis;
    printf ("Enter point a: ");
    scanf ("%f %f",&x1,&y1);
    printf ("Enter point b: ");
    scanf ("%f %f",&x2,&y2);
    p1= (x1-x2)*(x1-x2);
    p2= (y1-y2)*(y1-y2);
    dis= sqrt(p1+p2);
    printf ("\nThe distance between a and b is: %.2f",dis);
    return 0;
}
// Function
#include <stdio.h>
#include <math.h>
float calc();
int main()
{
    printf ("\nThe distance between a and b is: %.2f",calc());
    return 0;
}
float calc()
{
    float x1,y1,x2,y2,p1,p2,dis;
    printf ("Enter point a: ");
    scanf ("%f %f",&x1,&y1);
    printf ("Enter point b: ");
    scanf ("%f %f",&x2,&y2);
    p1= (x1-x2)*(x1-x2);
    p2= (y1-y2)*(y1-y2);
    return dis= sqrt(p1+p2);
}
// Structure
#include <stdio.h>
#include <math.h>
struct distance
{
    float x,y,result,dis;
};
int main()
{
    struct distance a,b,d;
    printf ("Enter point a: ");
    scanf ("%f %f",&a.x,&a.y);
    printf ("Enter point b: ");
    scanf ("%f %f",&b.x,&b.y);
    a.result= (a.x-b.x)*(a.x-b.x);
    b.result= (a.y-b.y)*(a.y-b.y);
    d.dis= sqrt(a.result+b.result);
    printf ("\nThe distance between a and b is: %.2f",d.dis);
    return 0;
}
// File
#include <stdio.h>
#include <math.h>
int main()
{
    FILE *file1,*file2;
    float x1,y1,x2,y2,p1,p2,dis;
    char ch;
    file1 = fopen ("Distance.txt","w");
    file2 = fopen ("Distance.txt","r");
    if (file1==NULL)
        printf ("The file does not exist");
    else
    {
        printf ("Enter point a: ");
        scanf ("%f %f",&x1,&y1);
        printf ("Enter point b: ");
        scanf ("%f %f",&x2,&y2);
        p1= (x1-x2)*(x1-x2);
        p2= (y1-y2)*(y1-y2);
        dis= sqrt(p1+p2);
        fprintf (file1,"The distance between a and b is: %.2f",dis);
        fclose (file1);
    }
    if (file2==NULL)
        printf ("The file does not exist");
    else
    {
        while (!feof(file2))
        {
            ch= fgetc (file2);
            printf ("%c",ch);
        }
        fclose (file2);
    }
    return 0;
}
