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
	int tableauID;
};

typedef struct Chapitre chapter;

int main(){


	int gold = 50;
	int pv = 100;
	int i;

	chapter chapitre1 = {"Devant le chateau", 0, 0, 1};
	chapter chapitre2 = {"Entree du chateau", 0, 0, 2};
	chapter chapitre3 = {"HALL", 0, 0, 3};
	chapter chapitre4 = {"Chambre ", 0, 0, 4};
	chapter chapitre5 = {"Cuisine", 0, 0, 5};
	chapter chapitre6 = {"Jardin", 0, 0, 6};
	chapter chapitre7 = {"Cave", 0, 0, 7};
	chapter chapitre8 = {"Prison", 0, 0, 8};
	chapter chapitre9 = {"Tour", 0, 0, 9};
	chapter chapitre10 = {"Sous-sol", 0, 0, 10};
	chapter chapitre11 = {"rampard", 0, 0, 11};
	chapter chapitre12 = {"Basse-cour", 0, 0, 12};

	int choix = 0;
	int chap_joueur = 0;
	int fin_chapitre;


	Color(14, 0);
	printf("Tu es %s. Il est grand et des quasiment en ruine. Que decides-tu de faire?\n", chapitre1.desc);
	Color(5,0);
	printf("[1] Tu rentres dans le Chateau\n[2] Tu rebrousses chemin\n");
	scanf("%d", &choix);
	Color(15,0);

	switch(choix){
		case 1:
			Color(14,0);
			printf("Yes, tu es entre dans le chateau. Vers quelle piece veux-tu aller?\n[1] Entree du chateau\n[2] Hall du chateau");
			scanf("%d", &choix);
			Color(15,0);
			switch(choix){
				case 1:
				Color(11, 0);
				printf("%s\n", chapitre2.desc);
				Color(15,0);
				break;
				case 2:
				Color(11, 0);
				printf("%s\n", chapitre3.desc);
				Color(15,0);
			}
		break;
		case 2:
			Color(12,0);
			printf("Tu tombe dans un piege. Malheureusement tu meurs\n");
			Color(15,0);
		break;
	}

return 0;
}