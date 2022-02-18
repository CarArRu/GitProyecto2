#include"Otro.h"


/// Definiciones
#define ValDouble 9.7
#define ValDouble1 9.7


/// Constantes
const Uint Constante = 784;
const Uint *const ptrConst = &Constante;


/// Variables
Var Variable;
static Doble  VarReal=ValDouble;

/// Punteros
struct StrPuntero{
    Doble VarDouble;
    Uint VarUInt;
    void *ptr;
}Punteros;

Uint Con=0;
Caracter Txt;


///Prototipos de Función
void ContadorFunc(void);
void RegistroFunc(void);

Uint FuncReturn(Uint Entrada);
void FuncReturn1(void);

/// Puneros dobles
void CrearMemDinamica(int **pp, int Dim);


/// Matrices
Uint Matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
Uint i=0, j=0;


int main(int argc, char *argv[], char *envp[]){


    /**while(*envp){
        Con++;
        printf("%s\n", envp[Con]);}*/


    goto MemDinamica;


    for(Variable.i=0;Variable.i<5;Variable.i++/**Incremento de la variable**/){
        ContadorFunc();}
    printf("\nValor de la variable de Otro.c: %d", VarOtroC);
    printf("\nValor de la variable double: %0.2f", VarReal);
    ///ptrConst = &Constante;
    printf("\nValor de la variable constante: %d", *ptrConst);

    /// return;

    /// Variable
    Variable.a = 9;
    Variable.b = 10;
    Variable.c = Variable.a/(Doble)Variable.b;
    printf("\nCateo c: %0.2f\n", Variable.c);

    printf("\nOperacion 1: %d", Op1);
    printf("\nOperacion 2: %d", Op2);
    printf("\nOperacion 3: %d", Op3);

    /// Punteros void
    Punteros.VarDouble = 912.35;
    Punteros.VarUInt = 1234;

    Punteros.ptr = &Punteros.VarDouble;
    printf("\nValor de la variable double: %0.2f", *(Doble*) Punteros.ptr);
    Punteros.ptr = &Punteros.VarUInt;
    printf("\nValor de la variable Entero: %d", *(Uint*) Punteros.ptr);


    /// Break y Continue


    Con=0;
    while(Con<5){

        if(Con>=2){
            break;}

        printf("\nCon: %d", Con);
        Con++;}

    /**
    Con=0;
    while(Con<20){

        Con++;
        if(Con==13){
            continue;}

        printf("\nCon: %d", Con);
        ///Con++;

    }
    */


    /// Tamaño de las variables
    // Entero sin signo
    printf("\n Tamanio de bytes de la variable Uint: %d", sizeof(Con));
    printf("\n Tamanio de bytes de la variable Char: %d", sizeof(Txt));

    /// Register
    printf("\n\nRegister\n\n");
    register Uint i;
    for(i=0;i<10;i++){
        printf("\nEl valor de i: %d", i);}

    /// Goto
    printf("\nGoto\n");
    goto hola3;



hola1:  /**Etiqueta**/
    printf("\nHola 1");
    goto fin;

hola2:  /**Etiqueta**/
    printf("\nHola 2");

hola3:  /**Etiqueta**/
    printf("\nHola 3");
    goto hola1;
fin:    /**Etiqueta**/
    printf("\nFin\n");

/// Return
Uint Res=0;
printf("\nReturn\n");
Res = FuncReturn(8);
printf("\nEl resultado es: %d", Res);
FuncReturn1();

/// Union
printf("\nUnion\n");
Union Usuario;

Usuario.NombreCompleto[0] = 'C';
Usuario.NombreCompleto[1] = 'e';
Usuario.NombreCompleto[2] = 's';
Usuario.NombreCompleto[3] = 'a';
Usuario.NombreCompleto[4] = 'r';
Usuario.NombreCompleto[5] = ' ';
Usuario.NombreCompleto[6] = 'A';
Usuario.NombreCompleto[7] = 'r';
Usuario.NombreCompleto[8] = 'g';
Usuario.NombreCompleto[9] = 'u';
Usuario.NombreCompleto[10] = 'e';
Usuario.NombreCompleto[11] = 'l';
Usuario.NombreCompleto[12] = 'l';
Usuario.NombreCompleto[13] = 'o';
Usuario.NombreCompleto[14] = '\0';

printf("\nNombre completo: %s", Usuario.NombreCompleto);
printf("\nNombre: %c", Usuario.Nombre);
printf("\nValor entero: %d", Usuario.VarUint);

/// Matrices
printf("\nMatrices\n");

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("\nValor[%d][%d]=%d", i, j, Matriz[i][j]);}}


///MemDinamica:
/// Malloc
printf("\nMalloc\n");
Uint *ptr;
Uint N=0, k=0, Suma=0;

printf("\nCuentas calificaciones tiene el alumno: ");
scanf("%d", &N);
ptr = (Uint*)malloc(N*sizeof(Uint));

for(k=0;k<N;k++){
    printf("\nEscribe el valor de la calificacion %d: ", k);
    scanf("%d", &ptr[k]);}

Suma=0;
for(k=0;k<N;k++){
    Suma=Suma+ptr[k];}



printf("\nLa suma es: %d", Suma);
free(ptr);

MemDinamica:
printf("\nhola");

/// Puntero doble

printf("\nPuntero doble");

Uint a=10, b=20;
Uint *p = &a;
Uint **pp=&p;

*pp = &b;

printf("\nValor del puntero p: %d", *p);






///PtrDoble:
    ///Puntero dobles
///MemDinamica:
printf("\nPunteros dobles");


int *puntero;

CrearMemDinamica(&puntero, 10);


for(k=0;k<10;k++){
    printf("\nValor: %d", puntero[k]);
}






}   /// Main

void CrearMemDinamica(int **pp, int Dim){
    int i=0;
    *pp = (int)malloc((Dim)*sizeof(int));
    printf("\nDireccion mem. dinamica: %d", *pp);

    for(i=0;i<Dim;i++){
        (*pp)[i]=i+1;}


}


void FuncReturn1(void){

    printf("\nNumero1");
    printf("\nNumero2");
    return;
    printf("\nNumero3");
    printf("\nNumero4");

}



void ContadorFunc(void){
    static Uint Contador=0;




    Contador++;
    printf("Contador: %d\n", Contador);}



Uint FuncReturn(Uint Entrada){
    Uint Resultado=0;

    Resultado=Entrada+10;
    return Resultado;


    Resultado=Entrada+1000;
    return Resultado;



}
