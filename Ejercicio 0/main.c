#include <stdio.h>
#include <stdlib.h>

struct punto
{
    float x; // Izq y der
    float y; // Arriba y abajo
};


int main()
{
    struct punto vec[5]= { {4,1},{2,2},{1,3},{2,3},{1,6} };
    float x,y;
    int md, ma;

    for (int i=0; i<5; i++)
    {
        x= vec[i].x;
        y= vec[i].y;
        printf("Coordenadas puntos[%d]\n", i);
        printf ("(%.2f,%.2f)\n", x,y);
    }

    /* Ahora vamos a buscar el punto m�s alto del arreglo punto
     usaremos i para recorrer el arreglo, ma para anotar el m�zimo y encontrado
    */

    y= vec[0].y;   //inicializamos el m�ximo con el primer valor
    x= 0;

    for (int i=0; i<5; i++)  //en realidad podemos arrancar con i=1
    {
        if (vec[i].y > y)
        {
            y= vec[i].y; //guardo nuevo m�ximo
            ma= i;           //anoto a que i corresponde el nuevo m�ximo
        }
    }
    //ahora imprimo las coordenadas del punto cuya z fue m�s grande
    // en realidad el primer punto con la z m�s grande))
    printf ("\nEl punto mas alto (eje y) es: ");
    printf("(%.2f,%.2f)", vec[ma].x, vec[ma].y);

    /* Ahora vamos a buscar el punto m�s derecha del arreglo punto
     usaremos i para recorrer el arreglo, md para anotar el m�zimo x encontrado
    */

    x= vec[0].x;   //inicializamos el m�ximo con el primer valor
    y= 0;

    for (int i=0; i<5; i++)  //en realidad podemos arrancar con i=1
    {
        if (vec[i].x > x)
        {
            x= vec[i].x; //guardo nuevo m�ximo
            md= i;           //anoto a que i corresponde el nuevo m�ximo
        }
    }
    //ahora imprimo las coordenadas del punto cuya z fue m�s grande
    // en realidad el primer punto con la z m�s grande))
    printf ("\nEl punto mas a la derecha (eje x) es: ");
    printf("(%.2f,%.2f)\n", vec[md].x, vec[md].y);

    return 0;
}
