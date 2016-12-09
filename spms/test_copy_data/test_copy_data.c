
#include <SPMS.h>

int main() {
    SPMS_Initialize(1000,1000);
    *(char*)SPM1_Head = 0;
    *(char*)SPM2_Head = 5;
    SPMS_Write_Memory_Addresses_To_Sim();
    printf("Test Copy App - Value at 0 offset of SPM1 head: %d\n", *((char*)SPM1_Head));
    printf("Test Copy App - Value at 0 offset of SPM2 head: %d\n", *((char*)SPM2_Head));
    printf("Test Copy App - Copying SPM2_Head[0-999] to SPM1_Head[0-999]\n");
    SPMS_Copy_Data(SPM1_Head, SPM2_Head, 1000);
    printf("Test Copy App - Value at 0 offset of SPM1 head: %d\n", *((char*)SPM2_Head));

    return 0;
}
