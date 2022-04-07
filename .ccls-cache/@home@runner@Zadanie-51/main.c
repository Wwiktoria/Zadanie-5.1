

#include <stdio.h>
int tablica[5];
int max;
int z;

int main(void){
  
printf("Wprowadź liczbę: \n");
scanf("%d",&tablica[0]);
max=tablica[0];
z=0;

  for(int i=1;i<5;i++){
printf("Wprowadź liczbę: \n");
scanf("%d",&tablica[i]);
    if(tablica[i]>max){
      max=tablica[i];
      z=i;
    }
      }
  printf("Nawiększa liczba to: %d,a jej indeks w tablicy to: %d",max,z);
  return 0;
  } 