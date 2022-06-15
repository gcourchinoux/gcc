int main() {


unsigned char *ptr = (unsigned char* ) 0x500; 

*ptr = 1; 

unsigned long  *ptr2 = (unsigned long *) 0x500;


*ptr2 = 2; 

unsigned short *ptr3 = (unsigned short*) 0x4000;


*ptr3 = 0x4; 




}
