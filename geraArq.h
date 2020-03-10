#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "lexico.h"
#include "token.h"
#include "allocation.h"

char saiArq(char *arqSaida){

token t;



FILE *Arq2;

Arq2 = fopen("saida.txt","w");

if(Arq2 == NULL){
 
	printf("O arquivo não foi aberto/n");
}
   
          
else{
	
    
	fprintf("saida.txt","%d",t.tipo);
	fprintf("saida.txt","%s",t.lexema.c_str());
	fprintf("saida.txt","%d",t.posicaoLex);
	
	fclose(Arq2); 
	  } 


}
