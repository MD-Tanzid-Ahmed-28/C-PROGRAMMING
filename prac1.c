#include <stdio.h>
#include <math.h>
int main(){
int Student_ID;
char Student_Name[50];
float mark1,mark2,mark3,avg;
float length,width,radius;
printf("Enter student id:");
scanf("%d",&Student_ID);
printf("Enter Student name:");
scanf("%s",&Student_Name);
printf("Enter 3 sub mark:");
scanf("%f%f%f",&mark1,&mark2,&mark3);
printf("Enter length,width and radius:");
scanf("%f%f%f",&length,&width,&radius);
float total=mark1+mark2+mark3;
avg=total/3;
printf("Student ID:%d\n",Student_ID);
printf("Student Name:%s\n",Student_Name);
printf("Total Mark:%.2f\n",total);
printf("AVG mark:%.2f\n",avg);
float Rectangle_area=length*width;
float Rectangle_perimeter=2*(length+width);
printf("Rectangle area is:%.2f\n",Rectangle_area);
printf("Rectangle perimeter:%.2f\n",Rectangle_perimeter);
float circle_area=3.1416*radius*radius;
float circle_circumference=2*3.1416*radius;
float avg_square=avg*avg;
float total_square_root=sqrt(total);
printf("Circle area is:%.2f\n",circle_area);
printf("Circle circumference:%.2f\n",circle_circumference);
printf("AVG SQUARE:%.2f\n",avg_square);
printf("Total square root:%.2f\n",total_square_root);
return 0;
}