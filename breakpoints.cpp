#include <stdio.h>

int calcular_suma(int a, int b)
{
    int resultado = a + b; // ← Breakpoint aquí para inspeccionar valores de a y b
    return resultado;
}

int main()
{
    int x = 10;
    int y = 20;
    int suma = calcular_suma(x, y); // ← Breakpoint para verificar retorno

    printf("La suma es: %d\n", suma); // ← Breakpoint para ver salida final
    return 0;
}
