#include<stdio.h>

void pot(int *n)
{
  //n é uma variavel(espaço de memória) que guarda nela o endereço de outro espaço de memória, no caso do endereço de memória do rotulo number
  
  *n = *n * *n;
  printf("memory adress:%p   content in the memory(aponta para o conteudo do endereço de memoria em n, ou seja: number -> ):%i  rotulo:n  memory_where_content_stored:%p\ncontent in pointer n(endereço passado):%p\n",&n,*n,&*n,n);
  //Conteúdo armazenado no endereço de memoria de n (Ou seja, armazenado no endereço de memória de number);
  //rotulo(variable adress name identifier)
  
}  
  
  
int main(void)
{
  int number;
  
  printf("integer:");
  scanf("%i",&number);
  printf("memory adress:%p   content in the memory:%i  rotulo:number\n",&number,number); 
  
  pot(&number); //Passa(indicar) o endereço de memoria de number para n(ponteiro,um ponteiro é uma variável que contém um endereço de memória nela. )
}  
