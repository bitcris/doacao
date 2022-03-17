#include <stdio.h>

int main() {
   printf("SISTEMA DE DOAÇÃO DE SANGUE\n\n");
   
   int idade;
   int peso;
   
   printf("DIGITE SUA IDADE: ");
   
   scanf("%d", &idade);
   if(idade>=16 && idade<=69) {
   printf("IDADE DENTRO DO RECOMENDADO\nDIGITE SEU PESO: ");
   
   //pedidndo o peso caso a idade esteja dentro do recomendado
       scanf("%d", &peso);
       if(peso<=49){
           printf("Desculpe, seu peso está fora do recomendado. Peso min. 50kg");
       }else{
           printf("Você está apto(a) para a doação, Muito obrigado(a)!");
       }
       
   }else{
       printf("Desculpe, sua idade está fora do recomendado para a doação. Obrigao(a)!");
   }
   
   return 0;
   
   //Cristiano Ferreira - Exercício para o curso técnico em desenvolvimento de sistemas
   //Instituto federal Sul de Minas. Campus Poços de caldas
}
