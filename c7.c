#include<msp430.h>
main()
{
unsigned bit;
P1DIR=0X40;
TACCR0=0X8725;
TACTL=0X02D0;
while(1)
{
while((TACTL&1)==0);
bit=((TACCR0<<0)^(TACCR0<<2)^(TACCR0<<3)^(TACCR0<<5))&(1<<15);
TACCR0=(TACCR0<<1)|(bit>>15);
P1OUT=TACCR0;
TACTL&=(~1);
}
}
