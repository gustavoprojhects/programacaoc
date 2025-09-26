 #include <stdio.h>

int main (){

    char estado[3], codigo[7], cidade[50], confirmacao;
    int habitantes, pontosturisticos;
    float km², PIB;

    printf("Qual é a sigla UF do estado desejado?: ");
       scanf("%s", estado);

    printf("Qual o codigo desta carta?: ");
        scanf("%s", codigo);

    printf("Qual o nome da cidade?: ");
        scanf("%s", cidade);
        
    printf("Qual a população desta cidade?: ");
        scanf("%d", &habitantes);

    printf("qual a area desta cidade? (em km²): ");
        scanf("%f", &km²);

    printf("Qual o PIB desta cidade?: ");
        scanf("%f", &PIB);

    printf("quantos pontos turisticos existem nesta ciadade?: ");
        scanf("%d", &pontosturisticos);


            printf("\n Seus registros para a carta 1: \n -  estado: %s", estado);
            printf("\n -  Codigo: %s", codigo);
            printf("\n -  Cidade: %s", cidade);
            printf("\n -  População: %d", habitantes);
            printf("\n -  Area em km²: %.2f", km²);
            printf("\n -  PIB: %f", PIB);
            printf("\n -  Pontos turisticos: %d", pontosturisticos);
            
            
                printf("\n \nEsta de acordo com suas respostas?: ");
                scanf("%s", &confirmacao);

                    printf("Seus dados foram salvos com sucesso...");


                        printf("\n \n \nAgora vamos para a sua segunda carta. ");

                                printf("\n \nQual é a sigla UF do estado desejado?: ");
                                    scanf("%s", estado);

                                printf("Qual o codigo desta carta?: ");
                                    scanf("%s", codigo);

                                printf("Qual o nome da cidade?: ");
                                    scanf("%s", cidade);
                                    
                                printf("Qual a população desta cidade?: ");
                                    scanf("%d", &habitantes);

                                printf("qual a area desta cidade? (em km²): ");
                                    scanf("%f", &km²);

                                printf("Qual o PIB desta cidade?: ");
                                    scanf("%f", &PIB);

                                printf("quantos pontos turisticos existem nesta ciadade?: ");
                                    scanf("%d", &pontosturisticos);


                                        printf("\n Seus registros para a carta 2: \n -  estado: %s", estado);
                                        printf("\n -  Codigo: %s", codigo);
                                        printf("\n -  Cidade: %s", cidade);
                                        printf("\n -  População: %d", habitantes);
                                        printf("\n -  Area em km²: %.2f", km²);
                                        printf("\n -  PIB: %f", PIB);
                                        printf("\n -  Pontos turisticos: %d", pontosturisticos);
                                        
                                        
                                            printf("\n \nEsta de acordo com suas respostas?: ");
                                            scanf("%s", &confirmacao);

                                                printf("Seus dados foram salvos com sucesso, obrigado...");
    }

