#include <stdio.h>
#include <string.h>







//Funcoes L�gicas

void escolha (){
  //Variveis locais
  int opcao, verificaoOpc;


  do {
    scanf("%d", &opcao);
    if(opcao == 1){ //Leva o usu�rio a tela inicial
      //Funcao ACESSO ADM
      printf("Entrando.. na funcao acessoADM");
      acessoADM ();
      //printf("Teste retorno ADM");
    } else if (opcao == 2){
      //Funcao ACESSO USUARIO

      printf("Entrando.. na funcao Usuario");
    } else {
      printf("Valor inv�lido");
    }
  } while(opcao > 2);
}

void main () {

telaInicial();

escolha();


}
