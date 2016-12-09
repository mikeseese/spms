
#include <SPMS.h>

int main() {
    int i;
    char c;
    char* mem = malloc(10000);
    SPMS_Initialize(10000,1);
    SPMS_Write_Memory_Addresses_To_Sim();

    for(i = 0; i < 10000; i++) {
        c = ((char*)SPM1_Head)[i];
    }

    return 0;
}
