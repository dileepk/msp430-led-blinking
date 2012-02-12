#include<msp430.h>
main()
{
unsigned bit;
P1DIR=0X40;
unsigned lfsr=0X8725;
TACTL=0X02a0;
while(1)
{
while((TACTL&1)==0);
bit=((lfsr<<0)^(lfsr<<2)^(lfsr<<3)^(lfsr<<5))&(1<<15);
lfsr=(lfsr<<1)|(bit>>15);
P1OUT=lfsr&(1<<6);
TACTL&=(~1);
}
}
