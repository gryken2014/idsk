#ifndef __MAIN_CPP__
#define __MAIN_CPP__
#define VERSION "iDSK version 0.21 ( gryken2014 ; 28/01/2021 ; https://github.com/gryken2014/idsk )"
#define PROGNAME "iDSK"
char Nom[256];
char Msg[128];
StDirEntry TabDir[64];
int PosItem[64];
int Langue;
bool IsDsk, IsDskValid, IsDskSaved;
int TypeModeImport, TypeModeExport;

void help(void);
void DecomposeArg(char **argv, int argc);

#endif
