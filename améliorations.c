// Pour pouvoir gerer des entiers quelconques à la place de malloc(sizeof(int)) on met malloc(sizeof(long ou long long))
// Pour pouvoir gerer des flottants à la place de malloc(sizeof(int)) on met malloc(sizeof(float))
// En considerant des flottant sizeof(float)*1024 octets =4096 octets






#include<stdio.h>
#include <stdlib.h>
#define STACK_SIZE_MAX 1024
int TAB[STACK_SIZE_MAX];
int sommet=0;
//QUESTION 1
void push(int T[], int data){
  if (sommet==0) {
    T[sommet]=data;
    // printf("%i %i push\n",T[sommet],sommet+1 );
    sommet++;
    }
  else{
    T[sommet]=data;
    // printf("%i %i push\n",T[sommet],sommet+1 );
    sommet++;

  }
}


int pop(int T[]){
  if (sommet>0){
    sommet--;
    int j=T[sommet];

    // printf("%i %i pop\n",j,sommet );
    return j;
  }
  else {
    sommet--;
    int j=T[sommet];
    // printf("%i %i pop \n",j,sommet );

    return j;
  }

  }

  //question 2 La borne supérieure sur la taille 1024*4 octets =  4096 oc























int main(int argc, char const *argv[]) {
  int cmp=0;
  int x; int y;
  for (int i = 1; i < argc; i++) {
    switch (*argv[i]) {
      case '+':
      for (int j = 1; j < cmp; j++) {
        x=pop(TAB);
        // printf("%i\n",x );
        y=pop(TAB);
        push(TAB,x+y);}

        // x=pop(TAB);
        // // printf("%i\n",x );
        // y=pop(TAB);
        // push(TAB,x+y);
        // printf("%i\n",y);
        // printf("%i\n",TAB[sommet] );
        break;
      case '-':
      for (int j = 1; j < cmp; j++) {
        x=pop(TAB);
        // printf("%i\n",x );
        y=pop(TAB);
        push(TAB,x-y);}

        break;
      case '*':
      for (int j = 1; j < cmp; j++) {
        x=pop(TAB);
        // printf("%i\n",x );
        y=pop(TAB);
        push(TAB,x*y);}
        break;
      case '/':
      for (int j = 1; j < cmp; j++) {
        x=pop(TAB);
        // printf("%i\n",x );
        y=pop(TAB);
        push(TAB,x/y);}
        break;
      default:
        push(TAB,atoi(argv[i]));
        cmp++;
        // printf("%i\n",TAB[sommet]);

      }

  }
  printf("%i\n", TAB[0]);
  return 0;
}
