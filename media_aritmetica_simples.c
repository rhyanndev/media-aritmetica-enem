#include <stdio.h>


int main(){
	
	float n1,n2,n3,n4,n5, media;


    printf("Digite a sua nota em Linguagens:\n");
scanf("%f", &n1);
    printf("Digite a nota em Matematica:\n");
scanf("%f", &n2);
	printf("Digite a sua nota em Ciencias da Natureza:\n");
scanf("%f", &n3);
	printf("Digite a sua nota em Ciencias Humanas:\n");
scanf("%f", &n4);
	printf("Digite a sua nota em Redacao:\n");
scanf("%f", &n5);
		
	
	media = (n1 + n2 + n3 + n4 + n5)/ 5;
	
	
	
		
	if(media >= 750){
	
		printf("Parabens, voce foi aprovado!\n", media);
	}
	else{
		printf("Infelizmente nao sera possivel passar em Medicina na UFPE\n");
	}

	printf("A sua nota eh: %0.2f\n", media);
	
	
	
	return 0;
}
