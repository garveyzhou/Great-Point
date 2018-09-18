# include <stdio.h>
# include <stdlib.h>

unsigned int i = 3000000000;
char * ip = &i;

  
int main(){
  printf("original hex is: %x\n",i);
  int j = 0;
  
  while(j < 4){
    printf("Byte : %d ,Hex : %hhx \n",j,ip);
    j++;
    ip++;
  }
  
  ip = &i;
  j == 0;
  
  while(j<4){
    (*ip)++;
    ip++;
    j++;
  }
  printf("Increment 1 \nByte : %d , Hex : %x \n",i,i);
  ip = &i;
  j == 0;
  
  while(j<4){
    *ip+=16;
    ip++;
    j++;
  }
  
  printf("Increment 16 \nByte : %d , Hex : %x \n",i,i);
  return 0;
}
