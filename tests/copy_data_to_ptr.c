int main() {

unsigned char  *x1 = (unsigned char *) 0x4000; 


*x1 =  0xff;


unsigned short *x2 = (unsigned short *) 0x4000; 

*x2 =  0xff; 

unsigned long *x3 = (unsigned long *) 0x7000; 

*x3 = 0xff;




}
