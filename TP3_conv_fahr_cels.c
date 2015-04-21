/* Imprime tabla de conversión de °F a °C* -> (5.0/9.0)*(fahr-32.0)
   Federico Mandri K2051
   21-04-2015*/

#include <stdio.h>

//Prototipos de funciones//
double GetCelsius(double);

int main(void)
{
      double fahr;
      const int INF = 0;
      const int SUP = 300;
      const int PASO = 20;
      
      for (fahr = INF; fahr <= SUP; fahr = fahr + PASO)
          printf("%3.0f\t%6.2f\n",fahr,GetCelsius(fahr));
}

double GetCelsius(double f)
{
       double cels = 0;
       
       cels = (5.0/9.0)*(f-32.0);
       
       return cels;
}
