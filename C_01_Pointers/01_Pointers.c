#include <stdio.h>

void main(){
    int a = 10;
    int *p = &a;
    printf("p   = %d\n", p);  //stampa il contenuto del puntatore P --> l'indirizzo della variabile a
    printf("p+1 = %d\n", p+1);//stampa l'indirizzo successivo a quello della variabile a, che è più grande di 4 perchè una variabile int occupa 4 bytes

    // se l'address stampato è negativo è solo perchè è la conversione del numero in binario, quindi l'indirizzo inizierà con un 1 (se il most significant bit è 1, il numero decimale equivalente è negativo, vedi corso architectures)

    char c;
    char *p1;
    p1 = &c;
    printf("p1    = %d\n", p1);  
    printf("p1 +1 = %d\n", p1+1);
    //in questo caso la differenza tra i due indirizzi è di 1 byte.

    a = 1025; //si tratta di una variabile int, a cui sono riservati 4 bytes. In binario 1025 = 4 byte(0000 00000) 3 byte(00000 00000) 2 byte(0000 0100) 1 byte(0000 0001)
    /* il puntatore punta all'indirizzo del byte n.1
    se io faccio un typecasting e passo l'indirizzo di un int come se fosse un char (che occupa solo 1 byte e non 4)
    il puntatore char punta sempre al primo byte dell'int e il valore quindi sara il valore converito da binario a decimale di quel byte --> 1
    se faccio il dereferencing di questo puntatore char+1 passo al byte 2 dell'int, il cui valore è 4*/
    char *p0;
    p0 = (char *)p; //typecasting del puntatore p che era int
    printf("p0: %d\n", *p0);
    printf("p0+1: %d\n", *(p0 + 1));
}