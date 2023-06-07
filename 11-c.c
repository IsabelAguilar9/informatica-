#include <stdio.h>
#include <math.h>
int main()
{
float cp,ia,ap, cuota,x,y, Tp, cata, i ; 
    printf ( " Por favor escribir los datos correspondintes  \n capital prestado  " );
    scanf("%f", &cp);
    printf ( " interés anual \n " );
    scanf("%f", &ia);
    printf ( " años que dura el préstamo \n " );
    scanf("%f", &ap);
    ap*= 12;
    y= ia /12;
    x= 1 + (y/100) ;
   cuota= (cp*y)/((1-(pow(x,- ap)))*100);
   Tp= cuota* ap;
   cata= cp;
   i= Tp- cp;
    printf ( " Sueldo neto: %.2f  \n el total de lo pagado   %.2f  \n  cantidad de amortización  %.f  \n intereses  %.2f ", cuota, Tp, cata, i );
    return 0;
}
