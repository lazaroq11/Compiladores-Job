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
t= proxToken();



FILE *outfile;

outfile = fopen(arqSaida,"w");

if(outfile == NULL){
 
	printf("O arquivo não foi aberto/n");
}
   
          
else{
	
    while(1){
	
	fprintf(outfile,"%d",t.tipo);
	fprintf(outfile,"%s",t.lexema);
	fprintf(outfile,"%d",t.posicaoLex);
}

	fclose(outfile); 
	  } 


}
