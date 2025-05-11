#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    int matriz_salaA[30][30];
    bool matriz_salaAbool[30][30];
    
    int matriz_salaB[30][30];
    bool matriz_salaBbool[30][30];
    
    int matriz_salaC[30][30];
    bool matriz_salaCbool[30][30];
    
    int op_menu;

    int s = 1;
    int t = 1;
    int v = 1;
    
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            matriz_salaA[i][j] = s++;
            matriz_salaAbool[i][j] = true;
        }
    }
     for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            matriz_salaB[i][j] = t++;
            matriz_salaBbool[i][j] = true;
        }
    }
     for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            matriz_salaC[i][j] = v++;
            matriz_salaCbool[i][j] = true;
        }
    }
    
    
    
    

    printf("         d8,                                                                    \n");
    printf("        `8P                                                                     \n");
    printf("                                                                                \n");
    printf(" d8888b  88b 88bd88b  d8888b  88bd8b,d88b  d888b8b                               \n");
    printf("d8P' `P  88P 88P' ?8bd8b_,dP  88P'`?8P'?8bd8P' ?88                               \n");
    printf("88b     d88 d88   88P88b     d88  d88  88P88b  ,88b                              \n");
    printf("`?888P'd88'd88'   88b`?888P'd88' d88'  88b`?88P'`88b                             \n");
    printf("      d8b                                                                        \n");
    printf("      88P                                                                        \n");
    printf("     d88                                                                         \n");
    printf(" d888888   d888b8b       d8888b d8888b  d8888b d888b8b                           \n");
    printf("d8P' ?88  d8P' ?88      d8P' `Pd8P' ?88d8P' `Pd8P' ?88                           \n");
    printf("88b  ,88b 88b  ,88b     88b    88b  d8888b    88b  ,88b                          \n");
    printf("`?88P'`88b`?88P'`88b    `?888P'`?8888P'`?888P'`?88P'`88b                         \n");

    do {
        printf("\n--------------------------------------------------------\n");
        printf("\n                Bem-vindo ao cinema!\n                    ");
        printf("\n--------------------------------------------------------\n");
        printf("Digite 1 para ver os filmes disponíveis\n                   ");
        printf("Digite 0 para sair\n");
        printf("\n--------------------------------------------------------\n");
        scanf("%d", &op_menu);
         system("cls");

        if (op_menu == 1) {
            int escolha_sala;
            do {
                printf("   ,d8888bd8, d8b                                                             \n");
                printf("   88P'  `8P  88P                                                             \n");
                printf("d888888P     d88                                                              \n");
                printf("  ?88'    88b888    88bd8b,d88b  d8888b .d888b,                                \n");
                printf("  88P     88P?88    88P'`?8P'?8bd8b_,dP ?8b,                                   \n");
                printf(" d88     d88  88b  d88  d88  88P88b       `?8b                                 \n");
                printf("d88'    d88'   88bd88' d88'  88b`?888P'`?888P'                                 \n");
                printf("      d8b   d8,                                                     d8,       \n");
                printf("      88P  `8P                                                     `8P        \n");
                printf("     d88                                                                      \n");
                printf(" d888888    88b.d888b,?88,.d88b, d8888b   88bd88b ?88   d8P d8888b  88b.d888b,\n");
                printf("d8P' ?88    88P?8b,   `?88'  ?88d8P' ?88  88P' ?8bd88  d8P'd8b_,dP  88P?8b,    \n");
                printf("88b  ,88b  d88   `?8b   88b  d8P88b  d88 d88   88P?8b ,88' 88b     d88   `?8b \n");
                printf("`?88P'`88bd88'`?888P'   888888P'`?8888P'd88'   88b`?888P'  `?888P'd88'`?888P' \n");

                printf("\n--------------------------------------------------------\n");
                printf("1 - Digite 1 para entrar na sala (Odeio Droga 2.0) ");
                printf("\n---------------------------------------------------------\n");
                printf("2 - Digite 2 para entrar na sala (alemanha x brasil = 7x1)");
                printf("\n---------------------------------------------------------\n");
                printf("3 - Digite 3 para entrar na sala (arrumando um emprego de verdade)   \n");
                printf("-----------------------------------------------------------\n");
                printf("0 - Voltar ao menu \n");
                printf("------------------------------------------------------------\n");
                scanf("%d", &escolha_sala);
                 system("cls");

                switch (escolha_sala) {
                    case 1: {
                        int escolha_salaA;
                        do {
                            printf("\n--- Odeio Droga 2.0 ---\n");
                            printf("1 - Consultar estado da sala\n");
                            printf("2 - Fazer reserva\n");
                            printf("3 - Cancelar reserva\n");
                            printf("0 - Sair da sala\n");
                            scanf("%d", &escolha_salaA);
                            system("cls");

                            if (escolha_salaA == 1) {
                                printf("\nEstado atual da sala:\n");
                                for (int i = 0; i < 30; i++) {
                                    for (int j = 0; j < 30; j++) {
                                        if (matriz_salaAbool[i][j]) {
                                            // disponivel verde
                                            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                            printf("%3d ", matriz_salaA[i][j]);
                                             
                                        } else {
                                            // reservado vermelho
                                            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                            printf("%3d ", matriz_salaA[i][j]);
                                            
                                        }
                                    }
                                    printf("\n");
                                }
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                            }

                            if (escolha_salaA == 2) {
                                int reserva_salaA;
                                printf("---------------------------------------------------\n");
                                printf("--------------- FAZER RESERVA DA SALA -------------\n");
                                printf("Digite o numero da cadeira que você deseja reservar: ");
                                scanf("%d", &reserva_salaA);
                                 system("cls");

                                for (int i = 0; i < 30; i++) {
                                    for (int j = 0; j < 30; j++) {
                                        if (matriz_salaA[i][j] == reserva_salaA) {
                                            if (!matriz_salaAbool[i][j]) {
                                                printf("Esta cadeira já foi reservada por outra pessoa\n");
                                                
                                            } else {
                                                printf("Cadeira reservada!\n");
                                                matriz_salaAbool[i][j] = false;
                                             
                                            }
                                        }
                                    }
                                }
                            }

                            if (escolha_salaA == 3) {
                                int cancelarR_salaA;
                                printf("---------------------------------------------------\n");
                                printf("------------- CANCELAR RESERVA DA SALA ------------\n");
                                printf("       Qual é a cadeira que você deseja liberar:     \n");
                                printf("---------------------------------------------------\n");
                                printf("Cadeiras reservadas (digite o número para cancelar):\n");
                                for (int i = 0; i < 30; i++) {
                                    for (int j = 0; j < 30; j++) {
                                        if (!matriz_salaAbool[i][j]) {
                                            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                            printf("%d ", matriz_salaA[i][j]);
                                             
                                        }
                                    }
                                }
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                                printf("\nDigite o número da cadeira: ");
                                scanf("%d", &cancelarR_salaA);
                                 

                                for (int i = 0; i < 30; i++) {
                                    for (int j = 0; j < 30; j++) {
                                        if (matriz_salaA[i][j] == cancelarR_salaA) {
                                            if (!matriz_salaAbool[i][j]) {
                                                matriz_salaAbool[i][j] = true;
                                                printf("A reserva foi cancelada.\n");
                                                
                                                
                                            } else {
                                                printf("A cadeira não estava reservada.\n");
                                                 
                                            }
                                        }
                                    }
                                }
                            }

                        } while (escolha_salaA != 0);
                    } 
                    break;
                    case 2: {
                        int escolha_salaB;
                        do {
                            printf("\n--- Alemania vs Brasil (7x0) ---\n");
                            printf("1 - Consultar estado da sala\n");
                            printf("2 - Fazer reserva\n");
                            printf("3 - Cancelar reserva\n");
                            printf("0 - Sair da sala\n");
                            scanf("%d", &escolha_salaB);
                            system("cls");

                            if (escolha_salaB == 1) {
                                printf("\nEstado atual da sala:\n");
                                for (int i = 0; i < 30; i++) {
                                    for (int j = 0; j < 30; j++) {
                                        if (matriz_salaBbool[i][j]) {
                                            // disponivel verde
                                            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                            printf("%3d ", matriz_salaB[i][j]);
                                           
                                        } else {
                                            // reservado vermelho
                                            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                            printf("%3d ", matriz_salaB[i][j]);
                                             
                                        }
                                    }
                                    printf("\n");
                                }
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                            }

                            if (escolha_salaB == 2) {
                                int reserva_salaB;
                                printf("---------------------------------------------------\n");
                                printf("--------------- FAZER RESERVA DA SALA -------------\n");
                                printf("Digite o numero da cadeira que você deseja reservar: ");
                                scanf("%d", &reserva_salaB);
                                 

                                for (int i = 0; i < 30; i++) {
                                    for (int j = 0; j < 30; j++) {
                                        if (matriz_salaB[i][j] == reserva_salaB) {
                                            if (!matriz_salaBbool[i][j]) {
                                                printf("Esta cadeira já foi reservada por outra pessoa\n");
                                            
                                            } else {
                                                printf("Cadeira reservada!\n");
                                                matriz_salaBbool[i][j] = false;
                                                
                                            }
                                        }
                                    }
                                }
                            }

                            if (escolha_salaB == 3) {
                                int cancelarR_salaB;
                                printf("---------------------------------------------------\n");
                                printf("------------- CANCELAR RESERVA DA SALA ------------\n");
                                printf("       Qual é a cadeira que você deseja liberar:     \n");
                                printf("---------------------------------------------------\n");
                                printf("Cadeiras reservadas (digite o número para cancelar):\n");
                                for (int i = 0; i < 30; i++) {
                                    for (int j = 0; j < 30; j++) {
                                        if (!matriz_salaBbool[i][j]) {
                                            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                            printf("%d ", matriz_salaB[i][j]);
                                         
                                        }
                                    }
                                }
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                                printf("\nDigite o número da cadeira: ");
                                scanf("%d", &cancelarR_salaB);
                                 system("cls");

                                for (int i = 0; i < 30; i++) {
                                    for (int j = 0; j < 30; j++) {
                                        if (matriz_salaB[i][j] == cancelarR_salaB) {
                                            if (!matriz_salaBbool[i][j]) {
                                                matriz_salaBbool[i][j] = true;
                                                printf("A reserva foi cancelada.\n");
                                                
                                            } else {
                                                printf("A cadeira não estava reservada.\n");
                                             
                                            }
                                        }
                                    }
                                }
                            }

                        } while (escolha_salaB != 0);

                    } break;
                    case 3: {
                        int escolha_salaC;
                        do {
                            printf("\n--- Arrumando um Emprego ---\n");
                            printf("1 - Consultar estado da sala\n");
                            printf("2 - Fazer reserva\n");
                            printf("3 - Cancelar reserva\n");
                            printf("0 - Sair da sala\n");
                            scanf("%d", &escolha_salaC);
                            system("cls");

                            if (escolha_salaC == 1) {
                                printf("\nEstado atual da sala:\n");
                                for (int i = 0; i < 30; i++) {
                                    for (int j = 0; j < 30; j++) {
                                        if (matriz_salaCbool[i][j]) {
                                            // disponivel verde
                                            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                            printf("%3d ", matriz_salaC[i][j]);
                                          
                                        } else {
                                            // reservado vermelho
                                            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                            printf("%3d ", matriz_salaC[i][j]);
                                           
                                        }
                                    }
                                    printf("\n");
                                }
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                            }

                            if (escolha_salaC == 2) {
                                int reserva_salaC;
                                printf("---------------------------------------------------\n");
                                printf("--------------- FAZER RESERVA DA SALA -------------\n");
                                printf("Digite o numero da cadeira que você deseja reservar: ");
                                scanf("%d", &reserva_salaC);
                                system("cls");

                                for (int i = 0; i < 30; i++) {
                                    for (int j = 0; j < 30; j++) {
                                        if (matriz_salaC[i][j] == reserva_salaC) {
                                            if (!matriz_salaCbool[i][j]) {
                                                printf("Esta cadeira já foi reservada por outra pessoa\n");
                                            
                                            } else {
                                                printf("Cadeira reservada!\n");
                                                matriz_salaCbool[i][j] = false;
                                           
                                            }
                                        }
                                    }
                                }
                            }

                            if (escolha_salaC == 3) {
                                int cancelarR_salaC;
                                printf("---------------------------------------------------\n");
                                printf("------------- CANCELAR RESERVA DA SALA ------------\n");
                                printf("       Qual é a cadeira que você deseja liberar:     \n");
                                printf("---------------------------------------------------\n");
                                printf("Cadeiras reservadas (digite o número para cancelar):\n");
                                for (int i = 0; i < 30; i++) {
                                    for (int j = 0; j < 30; j++) {
                                        if (!matriz_salaCbool[i][j]) {
                                            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                            printf("%d ", matriz_salaC[i][j]);
                                            
                                        }
                                    }
                                }
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                                printf("\nDigite o número da cadeira: ");
                                scanf("%d", &cancelarR_salaC);
                                system("cls");

                                for (int i = 0; i < 30; i++) {
                                    for (int j = 0; j < 30; j++) {
                                        if (matriz_salaC[i][j] == cancelarR_salaC) {
                                            if (!matriz_salaCbool[i][j]) {
                                                matriz_salaCbool[i][j] = true;
                                                printf("A reserva foi cancelada.\n");
                                            } else {
                                                printf("A cadeira não estava reservada.\n");
                                            }
                                        }
                                    }
                                }
                            }

                        } while (escolha_salaC != 0);
                    } break;
                    
                    
                    default:
                    	
                        if (escolha_sala != 0) {
                            printf("Sala inválida.\n");
                        }
                        
                        break;
                }

            } while (escolha_sala != 0);
        }

    } while (op_menu != 0);

    return 0;
}
