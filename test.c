#include"studio.h"

void delay(int i);

int main(void)
{
  printf("This is a C Program.\n");
  printf("This is a C Program. V1.0\n");
  printf("change by vim")
  while(1)
  {
	delay(200);  
  
  }
  return 0;  
}

void delay (int i)
{
 for(i=0;i<100;i++)
 {
	__NOP(); 
	 
 }	  
}
