#ifndef OPCOES_H_INCLUDED
#define OPCOES_H_INCLUDED

#include "menu.h"
#include "login.h"
#include "procCpf.h"
void telaInicial(void){
    int opcao;
    printf("------------------------------------");
    printf("---------Tela Inicial---------");
    printf("------------------------------------");
    printf("Ola, por favor escolha uma das opcoes abaixo: \n\n");
    printf("Para ALUNO\OUTROS          digite: 1 \n");
    printf("Para PROFESSOR\FUNCIONARIO      digite: 2 \n");
    printf("Para PALESTRANTE\CONVIDADO    digite: 3 \n");
    printf("Para SAIR           digite: 4 \n");

    printf("Opcao escolhida: ");
    scanf("%d", &opcao);

}
void opcoes (void){
    switch (opcao){

        case 1:

            login();
            opcao = 0;
            break;
        case 2:
            loginAdm();
            opcao = 0;
            break;
        case 3:
            loginConv();
            opcao = 0;
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Valor digitado invalido, por favor digite os valores determinado. \n");

    }
}

void login(void){
    printf("digite seu cpf");
    void procuraCpf(void);
    procuraCpf();
    //void menuUser(void);
    //menuUser();
}
void loginAdm(void){
    void loginAdm(void);
    loginAdm();


}
void loginConv(void){
    void procuraCpf(void);
    procuraCpf();
    //void menuConv(void);
    //menuConv();
}
//-------------------------------------------------
#ifndef CAD_H_INCLUDED
#define CAD_H_INCLUDED

#define SIZE 100
#define DESC 500
#define CP 12
struct Pessoa{
    char nome[SIZE];
    char email[SIZE];
    int idade;
    char cpf[CP];
    int deficiencia;
    char descDef[SIZE];
};


struct Palestra{
    char nomeDoPalestrante[SIZE];
    char nomeDaPalestra[SIZE];
    char descDaPalestra[DESC];
    int localDaPalestra;
};
void novaPessoa(void){
    int i;
    for(i=0;i<100;i++){
        struct Pessoa pE[i];
        void cadastraPessoa(void);
        cadastraPessoa();
        break;
    }
}
void novaPalestra(void){
    int i;
    for(i=0;i<100;i++){
        struct Palestra pA[i];
        void CadastrarPalestra(void);
        CadastrarPalestra();
        break;
    }
}

void cadastraPessoa(void){
    struct Pessoa pE;
    printf("digite seu nome:");
    fgets(pE.nome,SIZE,stdin);

    printf("digite seu email:");
    fgets(pE.email,SIZE,stdin);

    printf("digite sua idade:");
    scanf("%d",&pE.idade);
    fflush(stdin);
    printf("digite seu cpf:");
    fgets(pE.cpf,CP,stdin);

    printf("digite 1 se tiver deficiencia ou 2 caso nao tenha:");
    scanf("%d",&pE.deficiencia);
    fflush(stdin);
    if(pE.deficiencia==1){
        printf("diga a sua deficiencia:");
        fgets(pE.descDef, SIZE, stdin);
    }else{
        printf("obrigado pelo cadastra");
    }

}

void CadastrarPalestra(void){
    struct Palestra pA;


    printf("Nome do Palestrante:");
    fgets(pA.nomeDoPalestrante, SIZE, stdin);
    printf("Nome da Palestra:");
    fgets(pA.nomeDaPalestra, SIZE, stdin);
    printf("descricao da palestra:");
    fgets(pA.descDaPalestra, DESC, stdin);
    printf("local da palestra");
    printf("1-Cancioneira\n 2-Rua da Paz\n 3-bla \n 4-blabla\n");
    scanf("%d", &pA.localDaPalestra);
    fflush(stdin);

}

#endif // CAD_H_INCLUDED


#endif // OPCOES_H_INCLUDED
