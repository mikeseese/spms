
#include "SPMS.h"

void* SPM1_Head = NULL;
void* SPM1_Tail = NULL;
unsigned long SPM1_Size = 0;

void* SPM2_Head = NULL;
void* SPM2_Tail = NULL;
unsigned long SPM2_Size = 0;

int SPMS_wrote_addresses = false;

int SPMS_Initialize(unsigned long spm1_size, unsigned long spm2_size) {
    SPMS_Initialize_Memory(spm1_size, spm2_size);

    return true;
}

int SPMS_Initialize_Memory(unsigned long spm1_size, unsigned long spm2_size) {
    SPMS_Free_Memory();

    //SPM1_Head = malloc(spm1_size);
    SPM1_Tail = SPM1_Head + spm1_size - 1;
    //SPM2_Head = malloc(spm2_size);
    SPM2_Tail = SPM2_Head + spm2_size - 1;

    SPMS_wrote_addresses = false;

    return true;
}

void SPMS_Free_Memory() {
    if(SPM1_Head != NULL) {
        //free(SPM1_Head);
    }
    if(SPM2_Head != NULL) {
        //free(SPM2_Head);
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

    //memcpy((void*) SPMS_HEAD1_ADDR, &(SPM1_Head), sizeof(void*));
    //memcpy((void*) SPMS_TAIL1_ADDR, &(SPM1_Tail), sizeof(void*));
    //memcpy((void*) SPMS_HEAD2_ADDR, &(SPM2_Head), sizeof(void*));
    //memcpy((void*) SPMS_TAIL2_ADDR, &(SPM2_Tail), sizeof(void*));

    SPMS_wrote_addresses = true;
}
