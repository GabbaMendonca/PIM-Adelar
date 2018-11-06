#include <stdio.h>
#include <string.h>







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
