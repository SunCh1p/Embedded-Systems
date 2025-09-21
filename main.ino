
int main(void){
    //THIS CODE ASSUMES ALL BITS IN EACH REGISTER ARE ALREADY SET TO 0 BY DEFAULT
    //declare ptr to external interrupt control register A
    unsigned char* EICRA;
    //point it to external interrupt control register
    EICRA = (unsigned char*) 0x69;
    //set bits 3 and 2 to 1 and 0 respectively for falling edge
    *EICRA |= 0x08;

    //declare ptr to external interrupt mask register
    unsigned char* EIMSK;
    //point it to the external interrupt mask register
    EIMSK = (unsigned char*) 0x3D;
    //set the bit for INT1 to 1
    *EIMSK |= 0x02;
    
    //lastly we need to enable interrupts
    unsigned char* ptrSREG;
    ptrSREG = (unsigned char*) 0x5F;
    *ptrSREG |= 0x80;



}