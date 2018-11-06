#include <stdio.h>
#include <string.h>

//Funcoes 
  //Funcoes de Tela
  void telaInicial () {
  //printf("------------------------------------");
  //printf("---------Tela Inicial---------");
  //printf("------------------------------------");
  //printf("\n");
  //printf("\n");
  //printf("\n");

  printf("Digite 1 para ADM:\n");
  printf("Digite 2 para Usuario: \n");
  return;
}


void acessoADM () {
  //variaveis
  int SENHAADM, resp1, cont; 
  cont = 1;
  SENHAADM = 148;  //SENHA ADM CONSTANTE

  do {
  printf(" \n ");
  printf(" \n ");
  printf("Usuário ADM\n");
  printf("Senha de ADM: ");
  
  scanf("%d", &resp1);
  fflush(stdin);
  if(resp1 == SENHAADM){ //Senha Adm
    //Entrar no login usuario
  } else {
    cont++;
    if (cont > 3){
      printf("Voce errou a senha três vezes. \n");
      
      return;
    }
  }

  } while (resp1 != SENHAADM);

}

//-----------------------------//

//Funcoes Lógicas 

void escolha (){
  //Variveis locais
  int opcao, verificaoOpc;
  
  
  do {
    scanf("%d", &opcao);
    if(opcao == 1){ //Leva o usuário a tela inicial
      //Funcao ACESSO ADM
      printf("Entrando.. na funcao acessoADM");
      acessoADM ();
      //printf("Teste retorno ADM");
    } else if (opcao == 2){
      //Funcao ACESSO USUARIO
      
      printf("Entrando.. na funcao Usuario");
    } else {
      printf("Valor inválido");
    }
  } while(opcao > 2);
}

void main () {

telaInicial();

escolha();


}