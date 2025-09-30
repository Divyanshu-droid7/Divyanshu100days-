#include <stdio.h>
#include <math.h>

int main() {
   int a=4;
   int b=5;
   int c=9;
   int x=10;
   int y=9;
       printf("the value of c is %d\n",a);
       printf("the value of b id %d\n",b);
       printf("the valur of a+b is %d\n",a +b );
       printf("the value of 2 to the power 5 is %f\n", pow(2,5));


       printf(" the value of 6 + 5.6 is %f\n", 6 + 5.6);
       printf("the value of 7+7.8 id %f\n" , 7+7.8); 
       // when it was given a %d operator it showed a random output

       printf(" the value of 3.0/9 is %d\n",3.0/9);
       printf("the value of 3.0/9 is %f\n",3.0/9);
       // again random output is seen in %d operator rather than error
       //while the %f operator shows the perfect output as usual 

       /*
       OPERATOR PRESEDENCE  
       1st     * / %
       2nd      + -
       3rd       =

       */

       printf("the value of 3x-8y is %d\n ",3*x-8*y);
       // can use both % and %f both but used  
       printf("the value of 3*x / 8*y is %f\n" ,3*x / 8*y );
       // will give wrong answer because of it is solved by associativity 

       /*

       when operators of equal priority are present in an expresiion 
       the tie is broken by associtivity .
       x*y/z = (x*y)/z
       x/y*z =(x/y)*z
       
       */



          




    return 0; 
} 
 
   