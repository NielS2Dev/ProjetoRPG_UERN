#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>


#define ALTURA_ASCII 4
#define LARGURA_MAX_ASCII 15

void animacao(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void mudarCor(int cor){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor);
/* 
    0  > Preto
	1  > Azul
	2  > Verde
	3  > Ciano (Azul + Verde)
	4  > Vermelho
	5  > Roxo / Magenta
	6  > Amarelo escuro / Marrom claro
	7  > Cinza claro (cor padrão)
	8  > Cinza escuro
	9  > Azul claro
	10 > Verde claro
	11 > Ciano claro
	12 > Vermelho claro
	13 > Rosa / Magenta claro
	14 > Amarelo
	15 > Branco
*/
}

void print_animado_multilinha(const char *linhas[], int num_linhas, int delay_ms) {
    int max_len = 0;
    int i = 0, pos = 0, linha = 0;
    
    for (i = 0; i < num_linhas; i++) {
        int len = (int)strlen(linhas[i]);
        if (len > max_len) max_len = len;
    }

    system("cls");
    for (pos = 0; pos < max_len; pos++) {
        for (linha = 0; linha < num_linhas; linha++) {
            if (pos < (int)strlen(linhas[linha])) {
                animacao(pos, linha); 
                putchar(linhas[linha][pos]);
            }
        }
        fflush(stdout);
        Sleep(delay_ms);
    }
    
    animacao(0, num_linhas + 1);
}


void uern() {
	const char *arte[] = {
	    " __    __   _______ .______      .__    __. ", 
	    "|  |  |  | |   ____||   _  \\     |  \\ |  | ",
	    "|  |  |  | |  |__   |  |_)  |    |   \\|  | ",
	    "|  |  |  | |   __|  |      /     |  . `  | ",
	    "|  `--'  | |  |____ |  |\\  \\----.|  |\\   | ", 
	    " \\______/  |_______|| _| `._____||__| \\__| ",
	};

    int num_linhas = sizeof(arte) / sizeof(arte[0]);
    
    mudarCor(3);
    print_animado_multilinha(arte, num_linhas, 30);
    mudarCor(7);
    printf("\n"); 
}

void projetoRpg() {
    const char *arte[] = {
        "  ____            _      _          ____  ____   ____ ",
        " |  _ \\ _ __ ___ (_) ___| |_ ___   |  _ \\|  _ \\ / ___|",
        " | |_) | '__/ _ \\| |/ _ \\ __/ _ \\  | |_) | |_) | |  _ ",
        " |  __/| | | (_) | |  __/ || (_) | |  _ <|  __/| |_| |",
        " |_|   |_|  \\___// |\\___|\\__\\___/  |_| \\_\\_|    \\____|",
        "               |__/                                    "
    };

    int num_linhas = sizeof(arte) / sizeof(arte[0]);

    mudarCor(12);
    print_animado_multilinha(arte, num_linhas, 30);
    mudarCor(7);
    printf("\n");
}

void introducao(){
	const char *introRPG[] = {
	    "==============================================================",
	    "                 Bem-vindo ao bravo mundo de RPG!            ",
	    "==============================================================",
	    "",
	    "Após longas jornadas e perigos desconhecidos, você finalmente",
	    "chega ao ponto crucial da sua aventura. Agora, a hora chegou:",
	    "é o momento de decidir seu destino, seu caminho, sua identidade!",
	    "",
	    "Herói ou heroína, guerreiro(a) ou sábio(a), o mundo espera pelo",
	    "nome que carregará na glória das batalhas e nas lendas que surgirão.",
	    ""
	};
    
    int num_linhas = sizeof(introRPG) / sizeof(introRPG[0]);
    
    mudarCor(14);
    print_animado_multilinha(introRPG, num_linhas, 70);
    mudarCor(7);
    printf("\n");

}


void bart() {
    printf("                 /\\/\\,,\\, \n");
    printf("                /        ` \\'\\,\n");
    printf("               /               '/|_\n");
    printf("              /                   / \n");
    printf("             /                   / \n");
    printf("            /                   ; \n");
    printf("            ;-\"\"-.  ____       , \n");
    printf("           /      )'    `.     ' \n");
    printf("          (    o |        )   ; \n");
    printf("           ),'\"\"\"\\    o   ;  : \n");
    printf("           ;\\___  `._____/ ,-: \n");
    printf("          ;                 @ ) \n");
    printf("         /                `;-' \n");
    printf("      ,. `-.______________,| \n");
    printf(" ,(`._||         \\__\\__\\__)| \n");
    printf(",`.`-   \\        '.        | \n");
    printf(" `._  ) :          )______,;\\_ \n");
    printf("    \\    \\_   _,--/       ,   `. \n");
    printf("     \\     `--\\   :      /      `. \n");
    printf("      \\        \\  ;     |         \\ \n");
    printf("       `-._____ ;|      |       _,' \n");
    printf("   -hrr-       \\/'      `-.----' \\ \n");
    printf("                /          \\      \\ \n");
}


struct usuario {
	char nick[50];
	int ataque;
	int defesa;
	int vida;
};

struct monstros {
	char nomesDosmonstros[50];
	int ataqueMonstros;
	int defesaMonstros;
	int vidaMonstros;
};

int main(){
	SetConsoleOutputCP(1252);
	
	char nick_maiusculo[100];
	struct usuario jogador;
	struct monstros tiposMonstros[6];
	bool nomeValido = false;
	
	printf("Versão 1.0.1");
	Sleep(500);
	system("CLS");
	
	uern();
	Sleep(500);
	projetoRpg();
	Sleep(500);
	
	introducao();
	
	
	while(!nomeValido){
		mudarCor(9);
		printf("Qual é o seu nick de batalha:	");
		fgets(jogador.nick, sizeof(jogador.nick), stdin);
		jogador.nick[strcspn(jogador.nick, "\n\r")] = '\0';
		
		int i;
		strcpy(nick_maiusculo, jogador.nick);
		for (i = 0; nick_maiusculo[i] != '\0'; i++) {
        	nick_maiusculo[i] = toupper(nick_maiusculo[i]);
    	}
		
		if (strchr(jogador.nick, ' ') != NULL) {
			mudarCor(4);
            printf("ERRO: O nick nao pode conter espacos. Tente novamente.\n\n");   
        } else if (strlen(jogador.nick) == 0) {
        	mudarCor(4);
            printf("ERRO: O nick nao pode estar vazio. Tente novamente.\n\n");
        } else {
        	mudarCor(2);
        	printf("Nome validado com sucessso!\n");
            nomeValido = true;
            mudarCor(7);
        }
	}
	
	printf("Bem vindo jogador(a): %s", nick_maiusculo);

	getchar();
	return 0;
}



