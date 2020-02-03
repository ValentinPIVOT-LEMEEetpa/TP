#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void Color(int t,int f){
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
};

struct Chapitre{
	char* desc;
	int gold;
	int pv;
	int id;
};

typedef struct Chapitre chapter;



int main(){


	int gold = 50;
	int pv = 100;

	chapter chapitre1 = {"Devant le chateau", 0, 0, 0};
	chapter chapitre2 = {"Entree du chateau", 0, 0, 0};
	chapter chapitre3 = {"Dans le HALL", 0, 0, 0};

	int choix = 0;
	int chap_joueur = 0;

	printf("Tu es %s. Il est grand et des quasiment en ruine. Que decides-tu de faire?\n", chapitre1.desc);
	printf("[1] Tu rentres dans le Chateau\n[2] Tu rebrousses chemin\n");
	scanf("%d", &choix);

	switch(choix){
		case 1:
			printf("Yes, tu es entre dans le chateau. Vers quelle piece veux-tu aller?\n[1] Entree du chateau\n[2] Hall du chateau");
			scanf("%d", &choix);
			switch(choix){
				case 1:
				printf("%s\n", chapitre2.desc);
				break;
				case 2:
				printf("%s\n", chapitre3.desc);
			}
		break;
		case 2:
			printf("Tu tombe dans un piege. Malheureusement tu meurs\n");
		break;
	}
	
return 0;
}