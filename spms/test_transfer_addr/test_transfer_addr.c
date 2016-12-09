
#include <SPMS.h>

int main() {
    SPMS_Initialize(5,10);
    printf("Test Transfer App - Head 1 Addr: %x\n", SPM1_Head);
    printf("Test Transfer App - Tail 1 Addr: %x\n", SPM1_Tail);
    printf("Test Transfer App - Head 2 Addr: %x\n", SPM2_Head);
    printf("Test Transfer App - Tail 2 Addr: %x\n", SPM2_Tail);
    *(char*)SPM1_Head = 5;
    printf("Test Transfer App - Value at 0 offset of SPM1 head: %d\n", *((char*)SPM1_Head));
    SPMS_Write_Memory_Addresses_To_Sim();

    return 0;
}
