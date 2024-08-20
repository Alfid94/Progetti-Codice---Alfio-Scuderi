#include <stdio.h>
/*
Variabili
* int = numero -> 4 byte -> 32bit, ovvero 4.294.967.296 valori tra -2.147.483.648 e 2.147.483.647
* short = numero 2 byte -> 16bit
* float = numero in virgola mobile 2byte per numero e 2byte per virgola 4byte
* long raddoppia float e int
* double e' abbreviazione per long float
* char -> carattere composto da 1 byte -> 8bit -> 256 valori -> 128 usati in realta'
*/

int main () {

    int primo_numero;
    int secondo_numero;
    float media; 

    printf("Inserisci primo numero\n");
    scanf("%d", &primo_numero);

    printf("Inserisci secondo numero\n");
    scanf("%d", &secondo_numero);

    media = (float) (primo_numero + secondo_numero)/ 2;

    printf ("media aritmetica dei due numeri è: %f\4n", media);

    return 0;

}