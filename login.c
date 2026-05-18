#include <stdio.h>
#include <string.h>

int main()
{
    char usuario[] = "kaua12307";
    char senha[] = "24012007";

    char tentativa_usuario[15];
    char tentativa_senha[15];

    printf("Digite o usuario: ");
    scanf("%s", tentativa_usuario);

    if (strcmp(tentativa_usuario, usuario) == 0)
    {

        printf("\nDigite a senha: ");
        scanf("%s", tentativa_senha);

        if (strcmp(tentativa_senha, senha) == 0)
        {

            printf("\nboas vindas Kauã");
        }
        else
        {

            printf("senha invalida");
        }
    }
    else
    {

        printf("usuario invalido");
    }

    return 0;
}