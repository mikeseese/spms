
#include <SPMS.h>

int main() {
    SPMS_Initialize(5,10);
    printf("head1: %0x\n", SPM1_Head);
    *(char*)SPM1_Head = 5;
    printf("val: %d\n", *((char*)SPM1_Head));
    SPMS_Write_Memory_Addresses_To_Sim();

    return 0;
}
