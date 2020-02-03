#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void Color(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
};


int main(){
	int choix = 0;

	printf("Tu es face a un chateau. Il est grand et des quasiment en ruine. Que decides-tu de faire?\n");
	printf("[1] Tu rentres dans le Chateau\n[2] Je rebrousse chemin\n");
	scanf("%d", &choix);

	switch(choix){
		case 1:
			printf("Tu es entre dans le chateau\n");
		break;
		case 2:
			printf("Tu tombe dans un piege. Malheureusement tu meurs\n");
		break;
	}
return 0;
}
