
#include <stdio.h> 
        //JOGO SUPER TRUNFO
        
    int main(){
        
        //Comparação de dois países 
        // A comparação será entre o país Suíça e Japão
        
        float pib1,pib2; // variaveis do tipo decimal para receber o valor do pib de cada país
        float populacao1, populacao2; //variaveis do tipo decimal para recber a população de cada país
        float tamanho1, tamanho2; //variáveis do tipo decimal para receber o tamanho de cada país
        int estados1, estados2; //variável do tipo inteira para a quantidade de estados
        
        pib1= 818.40; //Valor do PIB da Suíça 				
        populacao1= 8.89; //População da Suíça
        tamanho1= 41.285; //Tamanho da Suíça
        estados1 = 26; //Número de estados da Suíça
        
        pib2 = 4200.00 ;//Valor do PIB do Japão
        populacao2 = 125 ;//População do Japão
        tamanho2 = 377.975; //Tamanho do Japão
        estados2 = 47; //Numero de estados do Japão
        
        
        printf("---BEM VINDO AO JOGO SUPER TRUNFO!--- \n");
        printf("Este e um jogo de cartas no qual ira comparar dois paises \n");
        printf("Os paises escolhidos foram a Suica e o Japao \n");
        printf("Quem ganhou nesta comparacao foi : \n");
        printf("-----------------------------\n");
        
        if ( pib1 > pib2 ) { 
            printf("No criterio maior PIB  a SUICA venceu!\n" );
            printf("PIB : $ %.2f bilhoes", pib1);
            printf("----------------------\n");
       }else{
               printf("No criterio maior PIB o JAPAO venceu! \n");
               printf("PIB : $ %.2f bilhoes \n", pib2);
               printf("------------------------- \n");
       }
       
       if (populacao1 > populacao2) {
           printf("No criterio POPULACAO  a SUICA venceu! \n ");
           printf("POPULACAO : %.2f milhoes de habitantes \n", populacao1);
           printf("----------------------\n");
       }else{
              printf("No criterio POPULACAO o JAPAO venceu! \n");
              printf("POPULACAO :  %.2f milhoes de habitantes \n", populacao2);
              printf("----------------------\n");
       }
       
       if (tamanho1 > tamanho2) {
              printf("No criterio TAMANHO a SUICA venceu!\n");
              printf("TAMANHO : %.2f KM \n ", tamanho1);
              printf("----------------------\n");
       }else{
              printf("No criterio TAMANHO o JAPAO venceu! \n");
              printf("TAMANHO : %.2f KM \n", tamanho2);
              printf("----------------------\n");
       }
       
       if (estados1 > estados2) {
             printf("No criterio ESTADOS a SUICA venceu! \n");
             printf("ESTADOS : %d \n", estados1);
             printf("----------------------\n");
           
       }else{
             printf("No criterio ESTADOS o JAPAO venceu! \n");
             printf("ESTADOS : %d \n", estados2);
             printf("----------------------\n");
           
       }
        printf("Suica \n");
        printf("PIB : $ %.2f bilhoes  \n", pib1 );
        printf("POPULACAO : %.2f milhoes de habitantes \n", populacao1);
        printf("TAMANHO : %.3f km \n", tamanho1);
        printf("ESTADOS : %d \n", estados1);
        printf("----------------------------- \n ");
        printf("Japao \n");
        printf("PIB : $ %.2f bilhoes  \n", pib2 );
        printf("POPULACAO : %.2f milhoes de habitantes \n", populacao2);
        printf("TAMANHO : %.3f km \n", tamanho2);
        printf("ESTADOS : %d \n", estados2 );
        printf("----------------------------- \n");
       
       ;return 0; 
    }
