
#include "SPMS_Defines.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef NULL
#define NULL 0
#endif
#define false 0
#define true 1

void* SPM1_Head;
void* SPM1_Tail;
unsigned long SPM1_Size;

void* SPM2_Head;
void* SPM2_Tail;
unsigned long SPM2_Size;

int SPMS_wrote_addresses;

int SPMS_Initialize(size_t spm1_size, size_t spm2_size);
int SPMS_Initialize_Memory(size_t spm1_size, size_t spm2_size);

void SPMS_Free_Memory();

int SPMS_Write_Memory_Addresses_To_Sim();
int SPMS_Copy_Data(void* src, void* dst, size_t size);
