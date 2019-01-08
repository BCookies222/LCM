/*LCM of two numbers*/

#include<stdio.h>

void main()
{
    int num1, num2,q1=1, k=1, k1=1,k2=1,q2=1,n=1,n1=1,n2=1;
    printf("Enter the 1st numbers: ");
    scanf("%d",&num1);
    printf("Enter the 2nd  number: ");
    scanf("%d", &num2);
    int div[4]={2,3,5,7};
do
{

for(int i=0; i<=3; i++)
   {
        //printf("\nInside for loop for %d\n",div[i]);

                    //printf("q1!=1\n");
          if ((num1%div[i]==0)&&(num2%div[i]!=0))
            {
                q1=num1/div[i];
                num1=q1;
                //printf(" Inside if statement");
                k1=k1*div[i];
                k=k1;
            }
            else  num1=num1;

           if ((num2%div[i]==0) &&(num1%div[i]!=0)) //if (num1==1)
               {
                q2=num2/div[i];
                num2=q2;
                k2=k2*div[i];
                k=k2;
                //printf("Here Num 2 is divisible by %d,k2=%d",div[i],k2);
                //goto label3;

                //goto label3;

               } //n1=n1*num1*k1;
            else  num2=num2;
                //break;
            if ((num1%div[i]==0)&&(num2%div[i]==0))
               {
                q1=num1/div[i];
                num1=q1;
                q2=num2/div[i];
                num2=q2;
                k=k*div[i];
                k1=k2=k;
                //k=(k*k)/div[i];
                //printf("\nHere both the numbers are divisible K=%d",k);
               }

   }

}while (num1%div[0]==0||num2%div[0]==0||num1%div[1]==0||num2%div[1]==0||num1%div[2]==0||num2%div[2]==0||num1%div[3]==0||num2%div[3]==0);


       // }while ((q1!=1)||q2!=1);


    //printf("num1=%d,num2=%d", num1, num2);
    n=k*num1*num2;
    printf("\nThe LCM is %d\n",n);
   }
