/******************************************************************************
Inicializador do Programa.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função para limpar a tela do terminal
void clear_screen() {
#ifdef _WIN32
    system("cls"); // Comando para limpar a tela no Windows
#else
    system("clear"); // Comando para limpar a tela em Unix/Linux
#endif
}

void lista1() {
    int opc;
    setlocale(LC_ALL, "Portuguese"); 
    clear_screen();
    printf("Escolha uma opção a seguir: ");
    printf("\n[1] Exercicio 1");
    printf("\n[2] Exercicio 2");
    printf("\n[3] Exercicio 3");
    printf("\n[4] Exercicio 4");
    printf("\n[5] Exercicio 5");  
    printf("\n[6] Exercicio 6"); 
    printf("\n[7] Exercicio 7"); 
    printf("\n[8] Exercicio 8");   
    printf("\n[9] Exercicio 9"); 
    printf("\n[10] Voltar ao menu principal\n");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            clear_screen();
            system("Lista1\\Exercicio1.exe"); 
            break;
        case 2:
            clear_screen();
            system("Lista1\\Exercicio2.exe");
            break;
        case 3:
            clear_screen();
            system("Lista1\\Exercicio3.exe");
            break;
        case 4:
            clear_screen();
            system("Lista1\\Exercicio4.exe");
            break;
        case 5:
            clear_screen();
            system("Lista1\\Exercicio5.exe");
            break;
        case 6:
            clear_screen();
            system("Lista1\\Exercicio6.exe");
            break;
        case 7:
            clear_screen();
            system("Lista1\\Exercicio7.exe");
            break;    
        case 8:
            clear_screen();
            system("Lista1\\Exercicio8.exe");
            break;
        case 9:
            clear_screen();
            system("Lista1\\Exercicio9.exe");
            break;           
        case 10:
            clear_screen();
            return; // Voltar ao menu principal
        default:
            printf("Opção Inválida, tente novamente...\n");
    }
}

void lista2() {
    int opc;
    setlocale(LC_ALL, "Portuguese"); 
    clear_screen();
    printf("Escolha uma opção a seguir: ");
    printf("\n[1]  Exercicio 1");
    printf("\n[2]  Exercicio 2");
    printf("\n[3]  Exercicio 3");
    printf("\n[4]  Exercicio 4");
    printf("\n[5]  Exercicio 5");  
    printf("\n[6]  Exercicio 6"); 
    printf("\n[7]  Exercicio 7"); 
    printf("\n[8]  Exercicio 8");   
    printf("\n[9]  Exercicio 9"); 
    printf("\n[10] Exercicio 10"); 
    printf("\n[11] Exercicio 11"); 
    printf("\n[12] Voltar ao menu principal\n");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            clear_screen();
            system("Lista2\\Exercicio1.exe");
            break;
        case 2:
            clear_screen();
            system("Lista2\\Exercicio2.exe");
            break;
        case 3:
            clear_screen();
            system("Lista2\\Exercicio3.exe");
            break;
        case 4:
            clear_screen();
            system("Lista2\\Exercicio4.exe");
            break;
        case 5:
            clear_screen();
            system("Lista2\\Exercicio5.exe");
            break;
        case 6:
            clear_screen();
            system("Lista2\\Exercicio6.exe");
            break;
        case 7:
            clear_screen();
            system("Lista2\\Exercicio7.exe");
            break;
        case 8:
            clear_screen();
            system("Lista2\\Exercicio8.exe");
            break;
        case 9:
            clear_screen();
            system("Lista2\\Exercicio9.exe");
            break;
        case 10:
            clear_screen();
            system("Lista2\\Exercicio10.exe");
            break;
        case 11:
            clear_screen();
            system("Lista2\\Exercicio11.exe");
            break;
        case 12:
            return; // Voltar ao menu principal
        default:
            printf("Opção Inválida, tente novamente...\n");
    }
}

void lista3() {
    setlocale(LC_ALL, "Portuguese"); 
    int opc;
    clear_screen();
    printf("Escolha uma opção a seguir: ");
    printf("\n[1]  Exercicio 1");
    printf("\n[2]  Exercicio 2");
    printf("\n[3]  Exercicio 3");
    printf("\n[4]  Exercicio 4");
    printf("\n[5]  Exercicio 5");  
    printf("\n[6]  Exercicio 6"); 
    printf("\n[7] Voltar ao menu principal\n");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            clear_screen();
            system("Lista3\\Exercicio1.exe");
            break;
        case 2:
            clear_screen();
            system("Lista3\\Exercicio2.exe");
            break;
        case 3:
            clear_screen();
            system("Lista3\\Exercicio3.exe");
            break;
        case 4:
            clear_screen();
            system("Lista3\\Exercicio4.exe");
            break;
        case 5:
            clear_screen();
            system("Lista3\\Exercicio5.exe");
            break;
        case 6:
            clear_screen();
            system("Lista3\\Exercicio6.exe");
            break;        
        case 7:
            return; // Voltar ao menu principal
        default:
            printf("Opção Inválida, tente novamente...\n");
    }
}

void lista4() {
    setlocale(LC_ALL, "Portuguese"); 
    int opc;
    clear_screen();
    printf("Escolha uma opção a seguir: ");
    printf("\n[1]  Exercicio 1");
    printf("\n[2]  Exercicio 2");
    printf("\n[3]  Exercicio 3");
    printf("\n[4]  Exercicio 4");
    printf("\n[5]  Exercicio 5");  
    printf("\n[6]  Exercicio 6"); 
    printf("\n[7]  Exercicio 7"); 
    printf("\n[8]  Exercicio 8");   
    printf("\n[9]  Exercicio 9"); 
    printf("\n[10] Exercicio 10"); 
    printf("\n[11] Exercicio 11"); 
    printf("\n[12] Voltar ao menu principal\n");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            clear_screen();
            system("Lista4\\Exercicio1.exe");
            break;
        case 2:
            clear_screen();
            system("Lista4\\Exercicio2.exe");
            break;
        case 3:
            clear_screen();
            system("Lista4\\Exercicio3.exe");
            break;
        case 4:
            clear_screen();
            system("Lista4\\Exercicio4.exe");
            break;
        case 5:
            clear_screen();
            system("Lista4\\Exercicio5.exe");
            break;
        case 6:
            clear_screen();
            system("Lista4\\Exercicio6.exe");
            break;
        case 7:
            clear_screen();
            system("Lista4\\Exercicio7.exe");
            break;
        case 8:
            clear_screen();
            system("Lista4\\Exercicio8.exe");
            break;
        case 9:
            clear_screen();
            system("Lista4\\Exercicio9.exe");
            break;
        case 10:
            clear_screen();
            system("Lista4\\Exercicio10.exe");
            break;
        case 11:
            clear_screen();
            system("Lista4\\Exercicio11.exe");
            break;
        case 12:
            return; // Voltar ao menu principal
        default:
            printf("Opção Inválida, tente novamente...\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese"); // Ajuste de localização, se necessário
    int opc;

    while (1) {
        printf("\n\n");
        printf("\n*************Menu**************");
        printf("\n*Escolha uma opcao a seguir:  * ");
        printf("\n*        [1] Lista 1          *");
        printf("\n*        [2] Lista 2          *");
        printf("\n*        [3] Lista 3          *");
        printf("\n*        [4] Lista 4          *");
        printf("\n*        [5] Sair             *");
        printf("\n*******************************\n");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                lista1();
                break;
            case 2:
                lista2();
                break;
            case 3:
                lista3();
                break;
            case 4:
                lista4();
                break;
            case 5:
                printf("Saindo...\n");
                exit(0);
            default:
                printf("Opcao Invalida, tente novamente...\n");
        }
    }
    return 0;
}
