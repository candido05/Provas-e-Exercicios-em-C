/*
Crie um programa com uma estrutura para simular uma agenda de telefone
celular, com até 100 registros. Nessa agenda deve constar o nome, sobrenome,
número de telefone móvel, número de telefone fixo e e-mail. O programa deverá
fazer a leitura e, após isso, mostrar os dados na tela.
*/

struct telefone {
	
	char nome[30];
	char sobrenome[30];
	char movel[30];
	char fixo[30];
	char email[30];
	
} dados[100];

int main () {
	
	int i;
	
	for ( i = 0; i < 3; i++){
	
		printf ("digite o nome:  ");
		gets (dados[i].nome);
		printf ("\n");
	
		printf ("digite o sobrenome:  ");
		gets (dados[i].sobrenome);
		printf ("\n");
		
		printf ("digite o numero de celular:  ");
		gets (dados[i].movel);
		printf ("\n");
		
		printf ("digite o numero de telefone fixo:  ");
		gets (dados[i].fixo);
		printf ("\n");
		 
		printf ("digite o e-mail:  ");
		gets (dados[i].email);
		printf ("\n");
		 
	}
	
	for ( i = 0; i < 3; i++) {
		
		printf ("digite o nome: %s \n", dados[i].nome);
		printf ("digite o sobrenome: %s \n", dados[i].sobrenome);
		printf ("digite o numero de celular: %s \n", dados[i].movel);
		printf ("digite o numero de telefone fixo: %s \n",dados[i].fixo);
		printf ("digite o e-mail: %s \n", dados[i].email);
	 	printf ("\n");
	 	printf ("\n-----------------------------------------------\n");
		
	}
	
	return 0;
}
