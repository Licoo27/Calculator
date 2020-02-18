#include <stdio.h>
#include <stdlib.h>

float addition (float term1, float term2){
    return term1 + term2;
}

float subtraction (float number1, float number2){
   return number1 - number2;
}

float multiplication (float factor1, float factor2){
    return factor1 * factor2;
}

float division (float dividend, float divider){
    return dividend / divider;
}
int main()
{
    int operation = 0;

    while(1)
	{

		printf("What operation you want to work with ? \n");
		printf("1.addition(+) \n");
		printf("2.subtraction(-) \n");
		printf("3.multiplication(*) \n");
		printf("4.division(/) \n");
		printf("1, 2, 3 or 4 ?\t");
		scanf("%d", &operation);

		if ( (operation != 1) &&  (operation != 2)   &&   (operation != 3)   &&  (operation != 4)  )
       		printf("This operation does not exist\n\n");
		else
			break;

	}

    float n1=0;
    float n2=0;

    printf("first number\t");
    scanf("%f", &n1);
    printf("second number\t");
    scanf("%f", &n2);


    float result = 0;
    switch (operation){
    case 1:

        result = addition(n1, n2);
        break;
    case 2:
        result = subtraction(n1, n2);
        break;
    case 3:
        result = multiplication(n1, n2);
        break;
    case 4:
        result = division(n1, n2);
        break;
    default:
        printf("cette operation n'existe pas\n");
        break;
    }

    printf("resultat de l'operation : %f\n", result);

    return 0;
}

