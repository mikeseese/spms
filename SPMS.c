
#include "SPMS_Defines.h"

#define NULL 0
#define false 0
#define true 1

void* SPM1_Head = NULL;
void* SPM1_Tail = NULL;
unsigned long SPM1_Size = 0;

void* SPM2_Head = NULL;
void* SPM2_Tail = NULL;
unsigned long SPM2_Size = 0;

int SPMS_wrote_addresses = false;

int SPMS_Initialize(unsigned long spm1_size, unsigned long spm2_size);
int SPMS_Initialize_Memory(unsigned long spm1_size, unsigned long spm2_size);

void SPMS_Free_Memory();

int SPMS_Write_Memory_Addresses_To_Sim();

int SPMS_Initialize(unsigned long spm1_size, unsigned long spm2_size) {
    SPMS_Initialize_Memory(spm1_size, spm2_size);

    return true;
}

int SPMS_Initialize_Memory(unsigned long spm1_size, unsigned long spm2_size) {
    SPMS_Free_Memory();

    SPMS_wrote_addresses = false;

    return true;
}

void SPMS_Free_Memory() {
    if(SPM1_Head != NULL) {
        free(SPM1_Head);
    }
    if(SPM2_Head != NULL) {
        free(SPM2_Head);
    }
    SPM1_Head = NULL;
    SPM1_Tail = NULL;
    SPM1_Size = 0;
    SPM2_Head = NULL;
    SPM2_Tail = NULL;
    SPM2_Size = 0;
}

int SPMS_Write_Memory_Addresses_To_Sim() {
    if(SPMS_wrote_addresses) {
        // Can't write addresses after they've been written. The sim won't expect it
        return false;
    }

    memcpy((void*) SPMS_HEAD1_ADDR, &(SPM1_Head), sizeof(void*));

    SPMS_wrote_addresses = true;
}
