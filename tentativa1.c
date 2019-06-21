#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//FUNÇÃO COM EXPLICAÇÃO DE NÚMEROS DECIMAIS
void EXP_DECIMAL(){
    printf("DECIMAL: O sistema Decimal é o sistema mais utilizado pelos seres humanos, normalmente para indicar quantidades,"
            "e é constituído por dez algarismos: 0,1,2,3,4,5,6,7,8,9. No sistema decimal cada algarismo tem um valor posicional, ou seja, cada "
           "algarismo tem um peso de acordo com a sua posição na representação do valor.\n\n");
}
//FUNÇÃO COM EXPLICAÇÃO DE NÚMEROS VINÁRIOS
void EXP_BINARIO(){
    printf("BINÁRIO: O sistema binário é o sistema mais utilizado por máquinas, uma vez que os sistemas digitais trabalham internamente com dois"
           "estados (ligado/desligado, verdadeiro/falso, aberto/fechado). O sistema binário utiliza os símbolos: 0, 1, sendo cada símbolo"
           " designado por bit (binary digit).\n\n");
}
//FUNÇÃO COM EXPLICAÇÃO DE NÚMERO OCTAL
void EXP_OCTAL(){
    printf("OCTAL: O sistema octal é um sistema de numeração de base 8, ou seja, recorre a 8 símbolos (0,1,2,3,4,5,6,7) para a representação de"
           " um determinado valor. O sistema octal foi muito utilizado no mundo da computação, como uma alternativa mais compacta do sistema "
           "binário, na programação em linguagem de máquina.\n\n");
}
//FUNÇÃO COM EXPLICAÇÃO DA UNIDADE DE MEDIDA HEXADECIMAL
void EXP_HEXA(){
    printf("HEXADECIMAL: Sistema de numeração muito utilizado na programação de microprocessadores, especialmente nos equipamentos de estudo e"
           " sistemas de desenvolvimento.  Utiliza os símbolos: 0,1,2,3,4,5,6,7,8,9 do sistema decimal e as letras A,B,C,D,E,F. Equivalências:A=10"
           ",B=11,C=12,D=13,E=14eF=15.\n\n");
}
//FUNÇÃO PARA CONVERTER DECIMAL PARA BINÁRIO
int DEC_BIN(int valor){
    int b[8], resultado=0, i, cont=0;
    cont=0;
    if(valor>0){
        resultado=valor;
        for(i=0; resultado>0; i++){
            b[i] = resultado % 2;
            resultado/=2;
            cont++;
        }
        //EXIBINDO RESULTADO
        printf("\n-----------------------------//-------------------------------\n\n");
        printf("Valor decimal= %d\nValor convertido para binário= ",valor);
        for(i=cont-1; i>=0; i--){
            printf("%d", b[i]);
        }
    }
    printf("\n\n");
    return 0;
}
//FUNÇÃO PARA CONVERTER DECIMAL PARA OCTAL
int DEC_OCTAL(int valor){
    int octal[8], resultado=0, i, cont=0;
    cont=0;
    if(valor>0){
        resultado=valor;
        for(i=0; resultado>0; i++){
            octal[i] = resultado % 8;
            resultado/=8;
            cont++;
        }
        printf("\n-----------------------------//-------------------------------\n\n");
        printf("Valor decimal= %d\nValor convertido para base oito (octal)= ",valor);
        for(i=cont-1; i>=0; i--){
            printf("%d", octal[i]);
        }
    }
    printf("\n\n");
    return 0;
}
//FUNÇÃO PARA CONVERTER DECIMAL PARA HEXADECIMAL
int DEC_HEXA(int valor){
    int hexa[8], resultado=0, i, cont=0;
    cont=0;
    if(valor>0){
        resultado=valor;
        for(i=0; resultado>0; i++){
            hexa[i] = resultado % 16;
            resultado/=16;
            cont++;
        }
        printf("\n-----------------------------//-------------------------------\n\n");
        printf("Valor decimal= %d\nValor convertido para hexadecimal= ",valor);
        for(i=cont-1; i>=0; i--){
            printf("%d", hexa[i]);
        }
    }
    printf("\n\n");
    return 0;
}


main(){
    setlocale(LC_ALL, "Portuguese");
    int opc1/*opção 1*/,opc2/*opção 2*/, valor/*número que a pessoa deseja converter*/,contando=0,
     resultado=0/*valor depois das divisões*/, b[8]/*vetor para números binários*/, i, menu/*resposta dada ao menu principal*/;
   do{
    printf(" ------------------------------------------\n"
           "|SISTEMA DE CONVERSÃO DE MEDIDAS - NUMÉRICO|\n"
           " ------------------------------------------\n\n\n");
            printf("0-Sobre o programa\n"
            "1-Fazer conversões\n"
            "2-Emitir relatório das conversões\n"
            "3-Sair do programa\n"
            "Sua opção: ");
           scanf("%d", &menu);
           switch(menu){
               //SOBRE O PROGRAMA
                case 0:
                    system("cls");
                    printf("Desenvolvido por: Beatriz Araujo Pinto Biagini\n"
                    "Prontuario: 1961152\n"
                    "Turma B\n"
                    "Instituto Federal de Educação, Ciência e Tecnologia São Paulo, campus Guarulhos\n"
                    "Diciplina: APO - Algoritmos e Progamação\n"
                    "Os direitos autorais desse progama pertencem a aluna Beatriz Araujo Pinto Biagini\n"
                    "O programa é um conversor númerico.\n\n\n");
                    break;
                //FAZER COMVERSÕES
                case 1:
                    printf("Converter de:\n\n"
                    "1- Decimal\n"
                    "2- Binário\n"
                    "3- Octal\n"
                    "4- Hexadecimail\n"
                    "Opção:");
                    scanf("%d", &opc1);
                    printf("\nPARA:\n\n"
                    "1- Decimal\n"
                    "2- Binário\n"
                    "3- Octal\n"
                    "4- Hexadecimail\n"
                    "Opção:");
                    scanf("%d", &opc2);
                    if(opc1==1){
                        printf("\n\nValor:");
                        scanf("%d", &valor);
                    }else{
                        printf("OBS:Digite número por número dando enter, e são necessarios 8 números.\n"
                               "Por exemplo,\n para binário: 00000101\n"
                               "para octal: 00000019\n"
                               "para hexadecimal: 00000069\n\n\n");
                        //GERANDO VETOR
                        printf("\n\nValor:\n");
                        for(i=0; i<8; i++){
                            scanf("%d", &b[i]);
                        }
                    }
                switch (opc1){
           //DECIMAL PARA...
                    case 1:
                        switch (opc2){
                            case 1:
                                printf("\n\nNão da pra converter pois você escolheu a mesma unidade de medida nas duas opções\n\n");
                                break;
                            case 2:
                                printf("\n\n**************DEFINIÇÕES**************\n\n");
                                EXP_DECIMAL();
                                EXP_BINARIO();
                                printf(DEC_BIN(valor));
                                break;
                            case 3:
                                printf("\n\n**************DEFINIÇÕES**************\n\n");
                                EXP_DECIMAL();
                                EXP_OCTAL();
                                printf(DEC_OCTAL(valor));
                                break;
                            case 4:
                                printf("\n\n**************DEFINIÇÕES**************\n\n");
                                EXP_DECIMAL();
                                EXP_HEXA();
                                printf(DEC_HEXA(valor));
                                break;
                            }
                            break;
            //BINARIO PARA...
                    case 2:
                        switch (opc2){
                            case 1:
                                printf("\n\n**************DEFINIÇÕES**************\n\n");
                                EXP_BINARIO();
                                EXP_DECIMAL();
                                resultado=0;
                                contando=0;
                                printf("Conversão de binário para decimal");
                                //CONVERTENDO DE BINARIO PARA DECIMAL
                                for(i=7; i>=0; i--){
                                    contando++;
                                    if(b[i]==1){
                                        resultado+=pow(2, contando-1);
                                    }
                                }
                                //EXIBINDO RESULTADOS
                                printf("\n-----------------------------//-------------------------------\n\n");
                                printf("Valor binário= ");
                                //EXIBINDO VETOR
                                for(i=0; i<8; i++){
                                    printf("%d", b[i]);
                                }
                                printf("\nValor convertido para decimal= %d \n\n\n", resultado);
                                break;
                            case 2:
                                printf("\n\nNão da pra converter pois você escolheu a mesma unidade de medida nas duas opções\n\n");
                                break;
                            case 3:
                                printf("\n\n**************DEFINIÇÕES**************\n\n");
                                EXP_BINARIO();
                                EXP_OCTAL();
                                resultado=0;
                                contando=0;
                                printf("Conversão de binário para octal");
                                //CONVERTENDO O VALOR PARA DECIMAL
                                for(i=7; i>=0; i--){
                                    contando++;
                                    if(b[i]==1){
                                        resultado+=pow(2, contando-1);
                                    }
                                }
                                printf("\n\nValor binário= ");
                                //EXIBINDO VETOR BINARIO
                                for(i=0; i<8; i++){
                                    printf("%d", b[i]);
                                }
                                printf("\n");
                                //AGORA CONVERTENDO E EXIBINDO DE DECIMAL PARA OCTAL
                                printf(DEC_OCTAL(resultado));

                                break;
                            case 4:
                                printf("\n\n**************DEFINIÇÕES**************\n\n");
                                EXP_BINARIO();
                                EXP_HEXA();
                                printf("Conversão de binário para hexadecimal");
                                resultado=0;
                                contando=0;
                                //CONVERTENDO O VALOR PARA DECIMAL
                                for(i=7; i>=0; i--){
                                    contando++;
                                    if(b[i]==1){
                                        resultado+=pow(2, contando-1);
                                    }
                                }
                                printf("\n\nValor binário= ");
                                //EXIBINDO VETOR BINARIO
                                for(i=0; i<8; i++){
                                    printf("%d", b[i]);
                                }
                                printf("\n");
                                //AGORA CONVERTENDO E EXIBINDO DE DECIMAL PARA HEXADECIMAL
                                printf(DEC_HEXA(resultado));

                                break;
                        }
                        break;
                //OCTAL PARA...
                case 3:
                    switch (opc2){
                        case 1:
                            printf("\n\n**************DEFINIÇÕES**************\n\n");
                            EXP_OCTAL();
                            EXP_DECIMAL();
                            contando=0;
                            resultado=0;
                            printf("Conversão de octal para decimal");
                            //CONVERTENDO PARA DECIMAL
                            for(i=7; i>=0; i--){
                                contando++;
                                if(b[i]!=0){
                                    resultado+=pow(8, contando-1)*b[i];
                                }
                            }
                            printf("\n-----------------------------//-------------------------------\n\n");
                                printf("Valor Octal= ");
                                //EXIBINDO VETOR
                                for(i=0; i<8; i++){
                                    printf("%d", b[i]);
                                }
                                printf("\nValor convertido para decimal= %d \n\n\n", resultado);
                            break;
                        case 2:
                            printf("\n\n**************DEFINIÇÕES**************\n\n");
                            EXP_OCTAL();
                            EXP_BINARIO();
                            resultado=0;
                            contando=0;
                            printf("Conversão de octal para binário");
                            //CONVERTENDO PARA DECIMAL
                            for(i=7; i>=0; i--){
                                contando++;
                                if(b[i]!=0){
                                    resultado+=pow(8, contando-1)*b[i];
                                }
                            }
                                printf("\n\nValor Octal= ");
                                //EXIBINDO VALOR OCTAL
                                for(i=0; i<8; i++){
                                    printf("%d", b[i]);
                                }
                                //CONVERTENDO DE DEC PARA BINARIO
                                printf(DEC_BIN(resultado));
                            break;
                        case 3:
                            printf("\n\nNão da pra converter pois você escolheu a mesma unidade de medida nas duas opções\n\n");
                            break;
                        case 4:
                            printf("\n\n**************DEFINIÇÕES**************\n\n");
                            EXP_OCTAL();
                            EXP_HEXA();
                            resultado=0;
                            contando=0;
                            printf("Conversão de octal para binário");
                            //CONVERTENDO PARA DECIMAL
                            for(i=7; i>=0; i--){
                                contando++;
                                if(b[i]!=0){
                                    resultado+=pow(8, contando-1)*b[i];
                                }
                            }
                                printf("\n\nValor Octal= ");
                                //EXIBINDO VALOR OCTAL
                                for(i=0; i<8; i++){
                                    printf("%d", b[i]);
                                }
                                //CONVERTENDO DE DEC PARA BINARIO
                                printf(DEC_HEXA(resultado));
                            break;
                        }
                        break;
                case 4:
                    switch (opc2){
                        case 1:
                            printf("\n\n**************DEFINIÇÕES**************\n\n");
                            EXP_HEXA();
                            EXP_DECIMAL();
                            printf("Conversão de hexadecimal para decimal");
                            break;
                        case 2:
                            printf("\n\n**************DEFINIÇÕES**************\n\n");
                            EXP_HEXA();
                            EXP_BINARIO();
                            printf("Conversão de hexadecimal para binário");
                            break;
                        case 3:
                            printf("\n\n**************DEFINIÇÕES**************\n\n");
                            EXP_HEXA();
                            EXP_OCTAL();
                            printf("Conversão de hexadecimal para octal");
                            break;
                        case 4:
                            printf("\n\nNão da pra converter pois você escolheu a mesma unidade de medida nas duas opções\n\n");
                            break;
                        }
                        break;
                    }
                    break;
                case 2: //RELATORIO AQUI
                        /*MATRIZ!!!!*/
                    printf("Aqui serão armazenados os dados que você inseriu e o resultado final após a conversão escolhida");
                    break;
                case 3:
                    exit(0);
                break;
    }
    system("pause");
    system("cls");
   }while(menu!=3);
}//fechando chave do main
