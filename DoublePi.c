#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Ejercicio resuelto aprenderaprogramar.com
int main() {
    const double Pi = 3.141593; //Número pi como constante
    double D, H, R, V;
//  Datos
    printf ("Introduzca el diametro, en metros: "); scanf ("%lf", &D);
    printf ("Introduzca la altura, en metros: "); scanf ("%lf", &H);
//Cálculo
    R = D/2; V = Pi * pow(R, 2) * H;
    printf ("El volumen del cilindro es de %lf metros cubicos", V);
   return 0;
}
