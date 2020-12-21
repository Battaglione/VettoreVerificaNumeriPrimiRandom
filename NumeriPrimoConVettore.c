#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NMAX 128
#define NMIN 32
#define MAX 30

int main(){
    int v[MAX], i1, i2, caseswitch, input, temp, fine, ris, primo;
    fine = 0;
    primo = 1;
    srand(time(NULL));

    for(i1 = 0; i1 < MAX; i1++){
        v[i1] = rand()%(NMAX - NMIN + 1) + NMIN;
    }

    do{
        printf("Cosa vuoi fare?\n1) Visualizzare il vettore\n2) Ordinare il vettore\n3) Visualizzare i numeri primi\n4) Fine\n");
        scanf("%d", &caseswitch);
        switch(caseswitch){
            case 1:
                for(i1 = 0; i1 < MAX; i1++){
                    printf("%d\n", v[i1]);
                }
                break;
            case 2: 
                printf("Ordinamento crescente (1) o decrescente (2)?\n");
                scanf("%d",&input);
                if(input == 1){
                    for(i1 = 0; i1 < MAX; i1++){
                        for(i2 = i1 + 1; i2 < MAX; i2++){
                            if(v[i2] < v[i1]){
                                temp = v[i1];
                                v[i1] = v[i2];
                                v[i2] = temp;
                            }
                        }
                    }
                    for(i1 = 0; i1 < MAX; i1++){
                        printf("%d\n", v[i1]);
                    }
                    break;
                }
                if(input == 2){
                    for(i1 = 0; i1 < MAX; i1++){
                        for(i2 = i1 + 1; i2 < MAX; i2++){
                            if(v[i2] > v[i1]){
                                temp = v[i1];
                                v[i1] = v[i2];
                                v[i2] = temp;
                            }
                        }
                    }
                    for(i1 = 0; i1 < MAX; i1++){
                        printf("%d\n", v[i1]);
                    }
                    break;
                }
                break;
            case 3:
                i2 = 1;
                for(i1 = 0; i1 < MAX; i1++){
                    for(i2 = 1; i2 <= v[i1]; i2++){
                        ris = v[i1] % i2;
                        if(ris == 0 && i2 != 1 && i2 != v[i1]){
                            break;
                        }
                        else{
                            if(ris == 0 && i2 == v[i1]){
                                printf("%d\n", v[i1]);
                                break;
                            }
                            
                        }
                    }
                    
                }
                break;
            case 4:
            printf("Fine\n");
            fine = 1;
            break;

        }
    }while(fine == 0);
}
