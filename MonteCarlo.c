#include <stdio.h>
#include <stdlib.h>

float x, prom; float max = 0;
main()
{
    printf("Mas o menos me costo: ");
    for(int i = 0; i < 1000000; i++)
    {for(int j = 0; j < 12; j++)
        {   x = (float)rand()/(float)RAND_MAX;
            if(j==0) if(x < 0.10) max += 4;
            if(j==1) if(x < 0.20) max += 4;
            if(j==2) if(x < 0.15) max += 2;
            if(j==3) if(x < 0.02) max += 1;
            if(j==4) if(x < 0.10) max += 3;
            if(j==5) if(x < 0.15) max += 4;
            if(j==6) if(x < 0.10) max += 5;
            if(j==7) if(x < 0.05) max += 2;
            if(j==8) if(x < 0.10) max += 2;
            if(j==9) if(x < 0.02) max += 3;
            if(j==10)if(x < 0.15) max += 3;
            if(j==11)if(x < 0.10) max += 5;}
        prom += (max * 271.66);   max = 0;}
    prom /= 1000000;
    printf("%f en promedio", prom);
    prom *= 100.0;    prom /= 34230.0;
    prom *= 100.0;    prom /= 20.0;
    printf("\nEl promedio de perdida del proyecto es del. %0.2f", prom);
    prom -= 5.0;  prom *= 34230.0; prom /= 100.0;
    printf("\nSe debe cobrar: %0.2f para perder el 5 porciento", prom);
}
