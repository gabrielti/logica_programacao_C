#include<stdio.h>

int main(void)
{
    int number;
    int* pointer; //or int *pointer

    printf("integer:");
    scanf("%i",&number);

    pointer = &number; // *pointer is the content

    printf("adress_label(name):number  memory_adress(hex):%p  content_saved:%i\n",&number,number); //label(name) = number , memory_adress:&number
    printf("pointer_label(name):pointer  memory_adress_pointing(hex):%p  content_pointing:%i\n",&*pointer,*pointer);
    printf("pointer_label(name):pointer  memory_adress(hex):%p  content_pointing:%i\n",&pointer,*pointer);//Endereço de memoria alocado para receber o outro endereço de memoria   
}

/*
int main() {
  int myAge = 43;  // An int variable
  int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

  // Output the value of myAge (43)
  printf("%d\n", myAge);

  // Output the memory address of myAge (0x7ffe5367e044)
  printf("%p\n", &myAge);

  // Output the memory address of myAge with the pointer (0x7ffe5367e044)
  printf("%p\n", ptr);

  return 0;
}
*/