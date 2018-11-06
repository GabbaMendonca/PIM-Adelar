#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED

#define SENHAADM 148
void loginAdm(void){
    int  resp1, cont;
    cont = 1;


    do {
    printf(" \n ");
    printf(" \n ");
    printf("Usu�rio ADM\n");
    printf("Senha de ADM: ");

    scanf("%d", &resp1);
    fflush(stdin);
    if(resp1 == SENHAADM){ //Senha Adm
        void menuAdm(void);
    } else {
        cont++;
    if (cont > 3){
        printf("Voce errou a senha tr�s vezes. \n");
        break;
        return;
    }
  }

  } while (resp1 != SENHAADM);

}
void procuraCpf(void){
    int i,n;
    //funcao de numero de pessoas cadastradas;
    //n=numeroDePessoasCadastradas;
    char cpf[CP];
    for(n=0;n<3;i++){
        novaPessoa();
    }
    printf("------------------------------------------------");
    printf("digite cpf");
    fgets(cpf,CP,stdin);
    for(i=0;i<2;i++){
        if(!strcmp(pE[SIZE].cpf,cpf)){
            mostrarPessoa();
        }else{
            printf("erro");
            continue;
        }

    }
}




#endif // LOGIN_H_INCLUDED
