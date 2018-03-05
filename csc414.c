//NAME:ODEGOR LOVE UFUOMA
//MAT NO: COS/0051/2014
//DEPARTMENT: MATHEMATICS AND COMPUTER SCIENCE
//COURSE: CSC 414 ASSIGNMENT

#include <stdio.h>
#include <math.h>

 main()
 {
     float discriminant,a,b,c,root1,root2;

     printf("Enter a : ");
     scanf("%f",&a);
     printf("Enter b : ");
     scanf("%f",&b);
     printf("Enter c : ");
     scanf("%f",&c);
     discriminant=(b*b)-(4*a*c);

     if(discriminant<0)
     {
         printf("complex root!\n");


     }
     if(discriminant==0)
     {
         root1=(-b)/(2*a);
         printf("Equation has two equal answer !\n");
         printf("root1=root2=%f\n",root1);
     }
     if (discriminant>0){
     root1=((-b+sqrt(discriminant))/(2*a));
     root2=((-b-sqrt(discriminant))/(2*a));
     printf("\nroot1=%f", root1);
     printf("\nroot2=%f", root2);



 }
 }

