#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//FUN��O COM EXPLICA��O DE N�MEROS DECIMAIS
void EXP_DECIMAL(){
    printf("DECIMAL: O sistema Decimal � o sistema mais utilizado pelos seres humanos, normalmente para indicar quantidades,"
            "e � constitu�do por dez algarismos: 0,1,2,3,4,5,6,7,8,9. No sistema decimal cada algarismo tem um valor posicional, ou seja, cada "
           "algarismo tem um peso de acordo com a sua posi��o na representa��o do valor.\n\n");
}
//FUN��O COM EXPLICA��O DE N�MEROS VIN�RIOS
void EXP_BINARIO(){
    printf("BIN�RIO: O sistema bin�rio � o sistema mais utilizado por m�quinas, uma vez que os sistemas digitais trabalham internamente com dois"
           "estados (ligado/desligado, verdadeiro/falso, aberto/fechado). O sistema bin�rio utiliza os s�mbolos: 0, 1, sendo cada s�mbolo"
           " designado por bit (binary digit).\n\n");
}
//FUN��O COM EXPLICA��O DE N�MERO OCTAL
void EXP_OCTAL(){
    printf("OCTAL: O sistema octal � um sistema de numera��o de base 8, ou seja, recorre a 8 s�mbolos (0,1,2,3,4,5,6,7) para a representa��o de"
           " um determinado valor. O sistema octal foi muito utilizado no mundo da computa��o, como uma alternativa mais compacta do sistema "
           "bin�rio, na programa��o em linguagem de m�quina.\n\n");
}
//FUN��O COM EXPLICA��O DA UNIDADE DE MEDIDA HEXADECIMAL
void EXP_HEXA(){
    printf("HEXADECIMAL: Sistema de numera��o muito utilizado na programa��o de microprocessadores, especialmente nos equipamentos de estudo e"
           " sistemas de desenvolvimento.  Utiliza os s�mbolos: 0,1,2,3,4,5,6,7,8,9 do sistema decimal e as letras A,B,C,D,E,F. Equival�ncias:A=10"
           ",B=11,C=12,D=13,E=14eF=15.\n\n");
}
//FUN��O PARA CONVERTER DECIMAL PARA BIN�RIO
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
        printf("Valor decimal= %d\nValor convertido para bin�rio= ",valor);
        for(i=cont-1; i>=0; i--){
            printf("%d", b[i]);
        }
    }
    printf("\n\n");
    return 0;
}
//FUN��O PARA CONVERTER DECIMAL PARA OCTAL
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
//FUN��O PARA CONVERTER DECIMAL PARA HEXADECIMAL
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
    int opc1/*op��o 1*/,opc2/*op��o 2*/, valor/*n�mero que a pessoa deseja converter*/,contando=0,
     resultado=0/*valor depois das divis�es*/, b[8]/*vetor para n�meros bin�rios*/, i, menu/*resposta dada ao menu principal*/;
   do{
    printf(" ------------------------------------------\n"
           "|SISTEMA DE CONVERS�O DE MEDIDAS - NUM�RICO|\n"
           " ------------------------------------------\n\n\n");
            printf("0-Sobre o programa\n"
            "1-Fazer convers�es\n"
            "2-Emitir relat�rio das convers�es\n"
            "3-Sair do programa\n"
            "Sua op��o: ");
           scanf("%d", &menu);
           switch(menu){
               //SOBRE O PROGRAMA
                case 0:
                    system("cls");
                    printf("Desenvolvido por: Beatriz Araujo Pinto Biagini\n"
                    "Prontuario: 1961152\n"
                    "Turma B\n"
                    "Instituto Federal de Educa��o, Ci�ncia e Tecnologia S�o Paulo, campus Guarulhos\n"
                    "Diciplina: APO - Algoritmos e Progama��o\n"
                    "Os direitos autorais desse progama pertencem a aluna Beatriz Araujo Pinto Biagini\n"
                    "O programa � um conversor n�merico.\n\n\n");
                    break;
                //FAZER COMVERS�ES
                case 1:
                    printf("Converter de:\n\n"
                    "1- Decimal\n"
                    "2- Bin�rio\n"
                    "3- Octal\n"
                    "4- Hexadecimail\n"
                    "Op��o:");
                    scanf("%d", &opc1);
                    printf("\nPARA:\n\n"
                    "1- Decimal\n"
                    "2- Bin�rio\n"
                    "3- Octal\n"
                    "4- Hexadecimail\n"
                    "Op��o:");
                    scanf("%d", &opc2);
                    if(opc1==1){
                        printf("\n\nValor:");
                        scanf("%d", &valor);
                    }else{
                        printf("OBS:Digite n�mero por n�mero dando enter, e s�o necessarios 8 n�meros.\n"
                               "Por exemplo,\n para bin�rio: 00000101\n"
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
                                printf("\n\nN�o da pra converter pois voc� escolheu a mesma unidade de medida nas duas op��es\n\n");
                                break;
                            case 2:
                                printf("\n\n**************DEFINI��ES**************\n\n");
                                EXP_DECIMAL();
                                EXP_BINARIO();
                                printf(DEC_BIN(valor));
                                break;
                            case 3:
                                printf("\n\n**************DEFINI��ES**************\n\n");
                                EXP_DECIMAL();
                                EXP_OCTAL();
                                printf(DEC_OCTAL(valor));
                                break;
                            case 4:
                                printf("\n\n**************DEFINI��ES**************\n\n");
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
                                printf("\n\n**************DEFINI��ES**************\n\n");
                                EXP_BINARIO();
                                EXP_DECIMAL();
                                resultado=0;
                                contando=0;
                                printf("Convers�o de bin�rio para decimal");
                                //CONVERTENDO DE BINARIO PARA DECIMAL
                                for(i=7; i>=0; i--){
                                    contando++;
                                    if(b[i]==1){
                                        resultado+=pow(2, contando-1);
                                    }
                                }
                                //EXIBINDO RESULTADOS
                                printf("\n-----------------------------//-------------------------------\n\n");
                                printf("Valor bin�rio= ");
                                //EXIBINDO VETOR
                                for(i=0; i<8; i++){
                                    printf("%d", b[i]);
                                }
                                printf("\nValor convertido para decimal= %d \n\n\n", resultado);
                                break;
                            case 2:
                                printf("\n\nN�o da pra converter pois voc� escolheu a mesma unidade de medida nas duas op��es\n\n");
                                break;
                            case 3:
                                printf("\n\n**************DEFINI��ES**************\n\n");
                                EXP_BINARIO();
                                EXP_OCTAL();
                                resultado=0;
                                contando=0;
                                printf("Convers�o de bin�rio para octal");
                                //CONVERTENDO O VALOR PARA DECIMAL
                                for(i=7; i>=0; i--){
                                    contando++;
                                    if(b[i]==1){
                                        resultado+=pow(2, contando-1);
                                    }
                                }
                                printf("\n\nValor bin�rio= ");
                                //EXIBINDO VETOR BINARIO
                                for(i=0; i<8; i++){
                                    printf("%d", b[i]);
                                }
                                printf("\n");
                                //AGORA CONVERTENDO E EXIBINDO DE DECIMAL PARA OCTAL
                                printf(DEC_OCTAL(resultado));

                                break;
                            case 4:
                                printf("\n\n**************DEFINI��ES**************\n\n");
                                EXP_BINARIO();
                                EXP_HEXA();
                                printf("Convers�o de bin�rio para hexadecimal");
                                resultado=0;
                                contando=0;
                                //CONVERTENDO O VALOR PARA DECIMAL
                                for(i=7; i>=0; i--){
                                    contando++;
                                    if(b[i]==1){
                                        resultado+=pow(2, contando-1);
                                    }
                                }
                                printf("\n\nValor bin�rio= ");
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
                            printf("\n\n**************DEFINI��ES**************\n\n");
                            EXP_OCTAL();
                            EXP_DECIMAL();
                            contando=0;
                            resultado=0;
                            printf("Convers�o de octal para decimal");
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
                            printf("\n\n**************DEFINI��ES**************\n\n");
                            EXP_OCTAL();
                            EXP_BINARIO();
                            resultado=0;
                            contando=0;
                            printf("Convers�o de octal para bin�rio");
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
                            printf("\n\nN�o da pra converter pois voc� escolheu a mesma unidade de medida nas duas op��es\n\n");
                            break;
                        case 4:
                            printf("\n\n**************DEFINI��ES**************\n\n");
                            EXP_OCTAL();
                            EXP_HEXA();
                            resultado=0;
                            contando=0;
                            printf("Convers�o de octal para bin�rio");
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
                            printf("\n\n**************DEFINI��ES**************\n\n");
                            EXP_HEXA();
                            EXP_DECIMAL();
                            printf("Convers�o de hexadecimal para decimal");
                            break;
                        case 2:
                            printf("\n\n**************DEFINI��ES**************\n\n");
                            EXP_HEXA();
                            EXP_BINARIO();
                            printf("Convers�o de hexadecimal para bin�rio");
                            break;
                        case 3:
                            printf("\n\n**************DEFINI��ES**************\n\n");
                            EXP_HEXA();
                            EXP_OCTAL();
                            printf("Convers�o de hexadecimal para octal");
                            break;
                        case 4:
                            printf("\n\nN�o da pra converter pois voc� escolheu a mesma unidade de medida nas duas op��es\n\n");
                            break;
                        }
                        break;
                    }
                    break;
                case 2: //RELATORIO AQUI
                        /*MATRIZ!!!!*/
                    printf("Aqui ser�o armazenados os dados que voc� inseriu e o resultado final ap�s a convers�o escolhida");
                    break;
                case 3:
                    exit(0);
                break;
    }
    system("pause");
    system("cls");
   }while(menu!=3);
}//fechando chave do main
