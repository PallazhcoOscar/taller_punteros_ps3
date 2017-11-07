#include <stdio.h>
	
int strlen(char *s);
int palind(char *s);

int main(){
	char palabra[20];
	int size, pal;
	int op;
	while(1){
		printf("*********************************\n");
		printf("*\tMenú de Ejercicios	*\n");
		printf("* 1.\tContar Letras		*\n");
		printf("* 2.\tEs Palindromo		*\n");
		printf("* 3.\tSalir			*\n");
		printf("*********************************\n");
		printf("\nIngrese una opción 1-3: ");
		scanf("%d", &op);
		printf("\t\t\t^^\n");
		while(!(op >=1 && op <=3)){
			printf("Opción Incorrecta\n");
			printf("\nIngrese una opción 1-3: ");
			scanf("%d", &op);
			printf("\t\t\t^^\n");
		}
		if(op == 1){
			printf("Ingrese una palabra: ");
			scanf("%s",&palabra);
			size = strlen(&palabra);
			printf("\t\"%s\" tiene: %i letras\n\n", palabra, size);
		}
		else if(op == 2){
			printf("Ingrese una palabra: ");
			scanf("%s",&palabra);
			pal = palind(&palabra);
			if (pal)
				printf("\t\"%s\" es Palindromo\n\n", palabra);
			else
				printf("\t\"%s\" no es Palindromo\n\n", palabra);
		}
		else
			break;
	}
	return 0;
}

int strlen(char *s){

	int tam;
	for (tam = 0; *s != '\0'; s++)
		tam++;
	return tam;
}

int palind(char *s){
	int tam = strlen(s);
	char *j = s + tam - 1;
	int i;
	for(i = 0; i != tam / 2; s++, j--, i++){
		if(*s != *j)
			return 0;
	}
	return 1;
}
