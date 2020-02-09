#include <stdio.h>
#include <stdlib.h>

float addition (float terme1, float terme2){
    return terme1 + terme2;
}

float soustraction (float nombre1, float nombre2){
   return nombre1 - nombre2;
}

float multiplication (float facteur1, float facteur2){
    return facteur1 * facteur2;
}

float division (float dividende, float diviseur){
    return dividende / diviseur;
}
int main()
{
    int operation = 0;

    while(1)
	{

		printf("Avec quelle operation voulez-vous travaillez ? \n");
		printf("1.addition(+) \n");
		printf("2.soustraction(-) \n");
		printf("3.multiplication(*) \n");
		printf("4.division(/) \n");
		printf("1, 2, 3 ou 4 ?\t");
		scanf("%d", &operation);

		if ( (operation != 1) &&  (operation != 2)   &&   (operation != 3)   &&  (operation != 4)  )
       		printf("cette operation n'existe pas\n\n");
		else
			break;

	}

    float n1=0;
    float n2=0;

    printf("premier nombre\t");
    scanf("%f", &n1);
    printf("deuxieme nombre\t");
    scanf("%f", &n2);


    float result = 0;
    switch (operation){
    case 1:

        result = addition(n1, n2);
        break;
    case 2:
        result = soustraction(n1, n2);
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

