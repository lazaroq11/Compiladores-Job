/* 

DISCIPLINA : FUNDAMENTOS DE COMPILADORES
ALUNO: L�ZARO QUEIROZ DA SILVA
EMAIL: lazaroq11@gmail.com
T�TULO : TOKEN.H

*/


#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "allocation.h"
#include "lexico.h"

void retornaToken(){ //rotina para retornar token
	token t;
	
	 do{
	 	
	 	t = proxToken();
	 	
	 	
	 	switch(t.tipo){ //Imprime na tela os tokens
	 		
	 		case 1: printf("Token = PALAVRA RESERVADA\n"); break;
	 		case 2: printf("Token = TIPO\n"); break;
	 		case 3: printf("Token = OPERADOR ARITMETICO\n"); break;
	 		case 4: printf("Token = OPERADOR LOGICO\n");break;
	 		case 5: printf("Token = IGUAL\n"); break;
	 		case 6: printf("Token = ABRE PARENTESES\n"); break;
	 		case 7: printf("Token = FECHA PARENTESES\n");break;
	 		case 8: printf("Token = ENDLINE\n");break;
	 		case 9: printf("Token = VIRGULA\n");break;
	 		case 10:printf("Token = NUMERO\n");break;
	 		case 11:printf("Token = IDENTIFICADOR\n");break;
	 		case 12: printf("Token = FEOF\n");break;
	 		case 13: printf("Token = ERRO\n");break;
		 }
		 
		 printf("Lexema = %s\n",t.lexema);
		 printf("Linha = %d\n\n\n",t.posicaoLex);
	 }
	 
	 while(t.tipo != 12); //encerra no final da sentenca
	 	
		 
		 delete [] vet; //libera mem�ria
	 
}
