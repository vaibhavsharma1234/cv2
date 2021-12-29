#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    double a,b,c,discriminant,root1,root2,realpart,imagpart;
    //ax^2 + bx +c
    printf("enter the coefficients a, b, and c \n");
    scanf("%lf %lf %lf",&a,&b,&c);
    discriminant = b*b - 4*a*c;
    // condition for real and diffrent roots
    if(discriminant>0)
    {
        root1=(-b + sqrt(discriminant))/(2*a);
         root2=(-b - sqrt(discriminant))/(2*a);
         printf("root1 = %.2lf  and root2 = %.2lf  \n",root1,root2);

    }
    // condition for equal roots

    else if (discriminant==0)
    {
        root1=root2=-b/(2*a);
        printf("root1=root2=%.2lf\n",root1);

    }
    // if roots are not real
    else // this bracket condition is optional
    {
     realpart=-b/(2*a);
     imagpart=sqrt(-discriminant)/(2*a);
     printf("root1=%.2lf+%.2lf and root2=%.2lf-%.2lf \n",realpart,imagpart,realpart,imagpart);
    }

    return 0;
}
