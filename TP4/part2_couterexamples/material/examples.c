#include <stdio.h>
#include <stdlib.h>

void init(int * tab);
void swap(float *f1, float *f2);
int * alloc (int val);

int main(int argc, char *argv[]) {
  int * ptr = alloc(7);
  // use printf to look at the content accessible from ptr
/*  printf("result: ");
  for (int i = 0; i < 20; i++) {

      printf( "%x",ptr[i]);

  }

  printf("%d",&ptr[0]);*/




  float f1=0.7;
  float f2=1.2;
  // use swap to put value of f1 in f2 and vice-versa
  // use printf to display values of f1 and f2
  swap(&f1,&f2);

  printf("f1 %f, f2 %f",f1,f2);


  return 0;
}

int * alloc (int val){
   int static tab[20];
   // initialize elements of tab with value val
   for (int i = 0; i < 20; i++) {
     /* code */
     tab[i] = val;
   }

   return tab;
}

void swap(float* f1, float* f2)
{
  static int c;
  c++;
    printf("  nb d'appels à swap: %d", c);
  float comp;
  comp = *f1;
  *f1 = *f2;
  *f2 = comp;

}
