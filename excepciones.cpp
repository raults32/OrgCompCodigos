#include <stdio.h>
#include <setjmp.h>

jmp_buf contexto;

void validar_codigo(int codigo)
{
    if (codigo < 1000 || codigo > 9999)
    {
        printf("C%cdigo fuera de rango permitido (1000 - 9999).\n", 162);
        longjmp(contexto, 1); // Simula lanzar una excepcion
    }
    printf("C%c%digo %d v%clido.\n", 162, 162, codigo, 160);
}

int main()
{
    int resultado = setjmp(contexto);
    if (resultado != 0)
    {
        printf("Se captur%c una excepci%cn! Terminando programa.\n", 162, 162);
        return 1;
    }

    int codigo_usuario;
    printf("Ingrese su c%cdigo de acceso (1000 - 9999): ", 162);
    scanf("%d", &codigo_usuario);

    validar_codigo(codigo_usuario);

    printf("Proceso completado exitosamente.\n");
    return 0;
}
