
#include "SPMS_Defines.h"
//#include <stdlib.h>
//#include <string.h>

#define NULL 0
#define false 0
#define true 1

void* SPM1_Head;
void* SPM1_Tail;
unsigned long SPM1_Size;

void* SPM2_Head;
void* SPM2_Tail;
unsigned long SPM2_Size;

int SPMS_wrote_addresses;

int SPMS_Initialize(unsigned long spm1_size, unsigned long spm2_size);
int SPMS_Initialize_Memory(unsigned long spm1_size, unsigned long spm2_size);

void SPMS_Free_Memory();

int SPMS_Write_Memory_Addresses_To_Sim();
