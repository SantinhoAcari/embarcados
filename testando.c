#include <stdio.h>
#include <windows.h>

int main()
{
    int comprimentoTela = GetSystemMetrics(SM_CXSCREEN);
    int auturaTela = GetSystemMetrics(SM_CYSCREEN);

    printf("O Comprimento da Tela é: %d \n", comprimentoTela);
    printf("A Altura da Tela é: %d \n", auturaTela);

    system("pause"); //// Pausa até que o usuário pressione qualquer tecla (apenas Windows)
    getchar(); //pausa até o usuário pressione Enter
    return 0;
}

