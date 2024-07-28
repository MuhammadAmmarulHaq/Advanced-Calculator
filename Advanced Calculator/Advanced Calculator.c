#include <stdio.h>
#include <stdlib.h>    // for exit(0) function//
#include <math.h>     //will use it for power operations and squareroot//

#define note "Input The Correct Number"   //will replace note with the text if encountered error//
//declaring the functions//
void addition();
void subtraction();
void multiplication();
void division();
void power();
void squareroot();
void factorial();
void cube();
void modulus();
void square();

int main()
{
    
    printf("\t\t Welcome To The Advancded Calculator \n\n");
    int operation;
    printf("\n#######Input 0 To Exit#######\n\n");
    printf("Input 1 For Addition\n\n ");
    printf("Input 2 For Subtraction\n\n ");
    printf("Input 3 For Multiplication\n\n ");
    printf("Input 4 For Division\n\n ");
    printf("Input 5 For Power\n\n ");
    printf("Input 6 For Squareroot\n\n ");
    printf("Input 7 For Factorial\n\n ");
    printf("Input 8 For Cube\n\n ");
    printf("Input 9 For Modulus\n\n ");
    printf("Input 10 For Square\n\n ");
    while(1){                                //while(1)for infinite loop//
       printf("\n\nInput The Operation You Want To Perform:");
       scanf("%d",& operation);
       switch (operation)
       {                                  //will be calling the functions for operations//
       case 0:
       exit(0);   //wont use break here bcoz program is ending here//
       case 1:
       addition();
       break;
       case 2:
       subtraction();
       break;
       case 3:
       multiplication();
       break;
       case 4:
       division();
       break;
       case 5:
       power();
       break;
       case 6:
       squareroot();
       break;
       case 7:
       factorial();
       break;
       case 8:
       cube();
       break;
       case 9:
       modulus();
       break;
       case 10:
       square();
       break;
       default:                            //its on us if we want to use break or not//
       printf("\n#######%s#######",note);
       }
    }
    return 0;
}

void addition(){
    int number01,number02;
    printf("Input The Numbers You Want To Add:");
    scanf("%d%d",&number01,&number02);
    printf("The Sum Of Two Numbers is:%d \n",number01+number02);
}
void subtraction(){
    int number01,number02;
    printf("Input The Numbers You Want To Subtract:");
    scanf("%d%d",&number01,&number02);
    printf("The Subtraction Of Two Numbers is:%d \n",number01-number02);
}
void multiplication(){
    int number01,number02;
    printf("Input The Numbers You Want To Multiply:");
    scanf("%d%d",&number01,&number02);
    printf("The Multiplication Of Two Numbers is:%d \n",number01*number02);
}
void division(){
    int number01,number02;
    printf("Input The Numbers You Want To Divide:");
    scanf("%d%d",&number01,&number02);
    printf("The Division Of Two Numbers is:%f \n",(float)number01/(float)number02);
}
void power(){
    double base;
    double power;
    printf("Input The Base And Power:");
    scanf("%lf%lf",&base,&power);
    double exponent=pow(base,power);
    printf("The Power Is:%lf \n",exponent);
}
void squareroot(){
    double number;
    printf("Input The Number You Want The Squareroot Of:");
    scanf("%lf",&number);
    double squarert=sqrt(number);
    printf("The Squareroot Of %lf Is:%lf \n",number,squarert);
}

void factorial(){
    int number,factorial;
    printf("Input The Number You Want The Factorial Of:");
    scanf("%d",&number);
    factorial=1;
    for(int i=1;i<=number;i++){
        factorial=factorial*i;
    printf("The Factorial Of %d Is:%d\n",number,factorial);
    }
}
void cube(){
    double number;
    printf("Input The Number You Want The Cube Of:");
    scanf("%lf",&number);
    double power=pow(number,3);
    printf("The Cube Of %lf Numbers is:%lf \n",number,power);
}
void modulus(){                                     //modulus means remainder//
    int number01,number02;
    printf("Input The Numbers You Want The Modulus Of:");
    scanf("%d%d",&number01,&number02);
    printf("The Modulus Of Two Numbers is:%d \n",number01%number02);
}
void square(){
    double number;
    printf("Input The Number You Want The Square Of:");
    scanf("%lf",&number);
    double power=pow(number,2);
    printf("The Square Of %lf Is:%lf \n",number,power);
}
       
