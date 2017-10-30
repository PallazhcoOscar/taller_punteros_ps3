#include<stdio.h>

int strlen(char *s);
int palindromo(char texto[]);
	


int main (){
	char s1[] = "nhdtytydhn";
	int lens1 = strlen(&s1);
	printf("Imprimir s1:  %s, tiene %d letras\n", s1, lens1);
	int pal = palindromo(s1);
	if(pal)
		printf("Palindromo\n");
	else
		printf("No es Palindromo\n");
	return 0; 
}


int strlen(char *s){
	int n;
	
	for( n = 0; *s != '\0'; s++)
		n++;
	return n;
}


int palindromo(char texto[]){
	int tam;
	int i,j;	
	j = strlen(&texto) - 3;
	for(i = 0; i < j/2; i++, j--){
		if(texto[i] != texto[j])
			return 0;
	}
	return 1;
}
