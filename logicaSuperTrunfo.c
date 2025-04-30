#include <stdio.h>
	
	// Desafio do jogo Super Trunfo
	// Atividade com uso de entradas e saídas lógicas e variaveis como "pintf","scanf","int","float" e etc.

int main() { 
	
	char estado1[20], estado2[20];                                             // declaração de duas variaveis do mesmo tipo "char" que aceite até 19 caracteres para receber o nome de cada estado
	char cidade1[20], cidade2 [20];                                            // declaração de duas variaveis do mesmo tipo "char" que aceite até 19 caracteres para receber o nome de cada cidade
	int cod1, cod2;                                                            // declaração de duas variaveis do mesmo tipo "int" para receber o código de cada carta
	float populacao1, populacao2;                                              // declarção de duas variaveis do tipo "int" para receber o numero da população de cada cidade
	float  area1, area2;                                                       // declaração de duas variaveis do tipo "int" para receber a area de cada cidade
	float pib1, pib2;                                                          // declaração de duas variaveis do tipo "float" para receber o PIB de cada cidade
	int npontos1, npontos2;                                                    // declaração de duas variaveis do tipo "int" para receber o número de pontos turístico de cada cidade  
	float denspop1, denspop2, pibcap1, pibcap2;                                // declação de variável do tipo "float" para calcular a densidade populacional e pib per capita de cada carta 
	
	printf("- Este e o jogo Super Trunfo! - \n");                              //apresentação do jogo 
	printf("-------------------- \n");
	printf("O objetivo e mostrar informacoes de 2 estados\n ");                //breve explicação do objetivo do jogo
	printf("Disponibilize as informacoes solicitadas e se divirta \n");
	
	printf("1.Informe o nome do estado 1: \n");
	scanf("%s", &estado1);                                                     // função para identificar e armazenar a "string" na variável "estado1"
	
	printf("2.Informe o codigo da carta : \n");
    scanf("%d", &cod1);                                                        // função para identificar e armazenar como inteiro na variável "cod1"
    
    printf("3.Informe o nome da cidade : \n");
	scanf("%s", &cidade1);                                                     // função para identificar e armazenar a "string" na variável "cidade1"
	
	printf("4. Informe a populacao da cidade  : \n");
	scanf("%f", &populacao1);                                                  // função para identificar e armazenar como inteiro na variável "populacao1"
	
	printf("5.Informe a area da cidade  : \n");
	scanf("%f", &area1);                                                       // função para identificar e armazenar como inteiro na variável "area1"
	
	printf("6. Informe o PIB da cidade  : \n");
	scanf("%f", & pib1);                                                       // função para identificar e armazenar como decimal na variável "pib1"
	
	printf("7. Informe o numero de pontos turisticos da cidade  :\n");
	scanf("%d", &npontos1);                                                    // função para identificar e armazenar como inteiro na variável "npontos1"
	printf("------------------------- \n");                                    // linha para mantes as informações separadas entre uma carta e outra
	
	
	printf("8.Informe o nome do estado 2: \n");
	scanf("%s", &estado2);                                                     // função para identificar e armazenar a "string" na variável "estado2"
	
	printf("9.Informe o codigo da carta : \n");
    scanf("%d", &cod2);                                                        // função para identificar e armazenar como inteiro na variável "cod2"
    
    printf("10.Informe o nome da cidade : \n");
	scanf("%s", &cidade2);                                                     // função para identificar e armazenar a "string" na variável "cidade2"
	
	printf("11. Informe a populacao da cidade  : \n");
	scanf("%f", &populacao2);                                                  // função para identificar e armazenar como inteiro na variável "populacao2"
	
	printf("12.Informe a area da cidade  : \n");
	scanf("%f", &area2);                                                       // função para identificar e armazenar como inteiro na variável "area2"
	
	printf("13. Informe o PIB da cidade  : \n");
	scanf("%f", &pib2);                                                       // função para identificar e armazenar como decimal na variável "pib2"
	
	printf("14. Informe o numero de pontos turisticos da cidade  :\n");
	scanf("%d", &npontos2);                                                    // função para identificar e armazenar como inteiro na variável "npontos2"
	printf("------------------------- \n");
	
	denspop1 = (float) populacao1 / area1;                                     //formula para calcular densidade populacional da carta 1
	denspop2 = (float) populacao2 / area2;                                     //formula para calcular densidade populacional da carta 2
	pibcap1  = (float) pib1  / populacao1;                                     //formula para calcular o PIB per capita da carta 1
	pibcap2  = (float) pib2 / populacao2;                                      //formula para calcular o PIB per capita da carta 2
	
	
	printf(" Nome do Estado 1 : %s \n", estado1);                              // à partir daqui acontece a exibiçao das informaçoes de cada carta na tela do usuário
	printf(" Codigo da carta : %d \n", cod1);                                  //exibe o código da carta
	printf(" Nome da cidade : %s \n", cidade1);                                //exibe o nome da cidade
	printf(" Populacao : %.3f milhoes de habitantes \n", populacao1);          //exibe o numero de habitantes desta cidade
	printf(" Area : %.3f km2 \n", area1);                                      //exibe a área da cidade
	printf(" PIB : R$ %.3f bilhoes \n", pib1);                                 //exibe o pib da cidade
	printf(" Numero de pontos turisticos : %d \n", npontos1);                  //exibe o número de pontos turísticos
	printf(" Densidade populacional : %.2f hab/km2 \n", denspop1);             //exibe a densidade populacional com casas decimais, tipo "float"
	printf(" PIB per capita : %.3f reais \n", pibcap1);                        //exibe o PIB per capita com casas decimais, tipo "float"
	printf("------------------------- \n");
	
		
	printf(" Nome do Estado 2 : %s \n", estado2);
	printf(" Codigo da carta : %d \n", cod2);
	printf(" Nome da cidade : %s \n", cidade2);
	printf(" Populacao : %.3f milhoes de habitantes \n", populacao2);
	printf(" Area : %.3f km2 \n", area2);
	printf(" PIB : R$ %.3f bilhoes\n", pib2);
	printf(" Numero de pontos turisticos : %d \n", npontos2);
	printf(" Densidade populacional : %.2f hab/km2 \n", denspop2);
	printf(" PIB per capita : %.3f reais \n", pibcap2);
	printf("------------------------- \n");
	

	
	
	return 0;
}
