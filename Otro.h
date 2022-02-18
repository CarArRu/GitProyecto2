#ifndef OTRO_H_INCLUDED
#define OTRO_H_INCLUDED


/// Librerías
#include<stdio.h>
#include<stdlib.h>

#define MaxChrNombreCompleto 50
#define MaxChrNombre 5



/// Definiciones
typedef unsigned int Uint;
typedef double Doble;
typedef unsigned char Caracter;


/// Variables
typedef struct{
    Uint i;
    Doble c;
    Uint a;
    Uint b;
}Var;

typedef enum{
    Op1=10,
    Op2,
    Op3,
    Op4,
}Op;

/// Uniones
typedef union{
    Caracter NombreCompleto[MaxChrNombreCompleto];
    Caracter Nombre;
    Uint VarUint;
}Union;



extern Uint VarOtroC;




#endif // OTRO_H_INCLUDED
