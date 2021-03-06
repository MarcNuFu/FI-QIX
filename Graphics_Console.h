//===================================================================================
// NOM: Graphics_Console.h
//===================================================================================
// DESCRIPCIO: Declaració de les variables i funcions que controlen la part grafica
// de les aplicacions tipus consola
//===================================================================================
#include <windows.h>


//===================================================================================
// Definicio de colors
#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGREY 7
#define DARKGREY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15
#define BLINK 128

//===================================================================================
// Dimensions del finestra de la consola
#define DX 41
#define DY 31


//===================================================================================
// Declaració de funcions
void GotoXY(int,int,HANDLE);
void TextColor(int,int,HANDLE);
void SetScreenSize(HANDLE);
void InitScreen(HANDLE);

//===================================================================================
// Declaració de funcions propies
//void PintarPantalla(int, int, int, int, HANDLE);
