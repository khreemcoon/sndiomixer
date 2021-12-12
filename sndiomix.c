#include <stdio.h>
#include <stdlib.h>
void nick(){
 printf("\033cSNDIO MIXER C\n");
 printf("----------------------\n");
 system("sndioctl output.level");
 system("sndioctl input.level");
 printf("----------------------\n");
 printf("What would you like to do?\n[1]Change output level\n[2]Change input level\n[3]Exit\n");
 printf("----------------------\n");
 int answ=0;
 scanf("%d", &answ);
 switch(answ){
  case 1:
   printf("\033cSNDIO MIXER C\n");
   printf("----------------------\n");
   printf("Input new output level(VALUE MUST BE BETWEEN 1 AND 0): ");
   float input=0;
   scanf("%f", &input);
   char* ocmnd=malloc(64);
   sprintf(ocmnd, "sndioctl output.level=%f", input);
   system(ocmnd);
   printf("----------------------\n");
   nick();
   break;
  case 2:
   printf("\033cSNDIO MIXER C\n");
   printf("----------------------\n");
   printf("Input new input level(VALUE MUST BE BETWEEN 1 AND 0): ");
   float input2=0;
   scanf("%f", &input2);
   char* icmnd=malloc(64);
   sprintf(icmnd, "sndioctl input.level=%f", input2);
   system(icmnd);
   printf("----------------------\n");
   nick();
   break;
  case 3:
   printf("\033cSNEEDIO MIXER C\n");
   printf("----------------------\n");
   printf("Goodbye. Don't forget to hate MTUyIDE0NSAxNjcgMTYzCg==\n");
   printf("----------------------\n");
   break;
  default:
   nick();
 }
}
int main(int argc, char ** args){
 nick();
 return 0;
}
