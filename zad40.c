// Program treba pomnozit 2 float broja.

#include <stdio.h>
int main(){
   float br1, br2, produkt;
   printf("Unesi prvi broj: ");
   scanf("%f", &br1);
   printf("Unesi drugi broj: ");
   scanf("%f", &br2);

   //Ponozi 2 broja
   produkt = br1 * br2;

   // Prikazi rezultat do 3 decimalne tocke. 
   printf("Produkt od unesenih brojeva je:%.3f", produkt);
   return 0;
}
