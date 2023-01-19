#include<stdio.h>

void invert(int vet[], int n){
    int aux[n];
    int i;
        for(i = 0; i < n; i++){
            aux[i] = vet[i];
        }
            for(i = 0; i < n; i++){
                vet[i] = aux[n - 1 - i];
            }

}

int main(){
    int vet1[5] = {1,2,3,4,5};
    invert(vet1, 5);
    int cont;
    for(cont = 0; cont < 5; cont++){
        printf("%d \n", vet1[cont]);
    }
  
    
}
