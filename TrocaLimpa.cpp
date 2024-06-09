#include <stdio.h>

int main() {
  float km_atual;
int km_paraTroca,cilindrada,km_troca,passou,km_ultrapassou;
char continuar;
do {

  printf("digite a cilindrada da sua moto: (1 - 150 a 350, 2 - 351 a 600, 3 - "
         "601 a 1000\n");
  scanf("%d", &cilindrada);

  printf("qual a sua kilometragem atual?\n");
  scanf("%f", &km_atual);

  switch (cilindrada) {
  case 1:
    km_paraTroca = 1000;
    km_troca = km_paraTroca - km_atual;
    
    if (km_atual > 1000){
       km_ultrapassou = km_atual - km_paraTroca;
       printf("vc ja passou %d km do limite de troca\n", km_ultrapassou);
    }else if(km_atual < 0){
	   printf("Kilometragem percorrida digitada invalida\n");
	}else{
      if(km_atual == 1000){
       puts("troque o oleo da moto\n");
       }else{
          km_troca = km_paraTroca - km_atual;
    printf("faltam %d km para troca do oleo\n", km_troca);
    }
  }    
    
    break;
    
  case 2:
    km_paraTroca = 2500;
    km_troca = km_paraTroca - km_atual;
    
    if (km_atual > 2500){
       km_ultrapassou = km_atual - km_paraTroca;
       printf("vc ja passou %d km do limite de troca\n", km_ultrapassou);
    }else if(km_atual < 0){
	   printf("Kilometragem percorrida digitada invalida\n");
	}else{
      if(km_atual == 2500){
       puts("troque o oleo da moto\n");
       }else{
          km_troca = km_paraTroca - km_atual;
    printf("faltam %d km para troca do oleo\n", km_troca);
    }
  }  
    break;
  case 3:
    km_paraTroca = 5000;
    km_troca = km_paraTroca - km_atual;
    
    if (km_atual > 5000){
       km_ultrapassou = km_atual - km_paraTroca;
       printf("vc ja passou %d km do limite de troca\n", km_ultrapassou);
    }else if(km_atual < 0){
	   printf("Kilometragem percorrida digitada invalida\n");
	}else{
      if(km_atual == 5000){
       puts("troque o oleo da moto\n");
       }else{
          km_troca = km_paraTroca - km_atual;
    printf("faltam %d km para troca do oleo\n", km_troca);
    }
  }
      
    break;
  default:
    printf("cilindrada invalida\n");
    
    
  }
  
  printf("Deseja continuar no programa? (s/n): ");
  scanf(" %c", &continuar);
  
}while (continuar == 's' || continuar == 'S');

}
