#include <stdio.h>
int main(){
unsigned char lights = 0; //0000 0000
  
  unsigned char light1 = 1 << 0; //0000 0001
  unsigned char light2 = 1 << 1; //0000 0010
  unsigned char light3 = 1 << 2; //0000 0100
  unsigned char light4 = 1 << 3; //0000 1000
  unsigned char light5 = 1 << 4; //0001 0000
  unsigned char light6 = 1 << 5; //0010 0000
  unsigned char light7 = 1 << 6; //0100 0000
  unsigned char light8 = 1 << 7; //1000 0000

int a,b;
printf("           Control Panel:\n");
printf("------------------------------------------\n");
printf("Option 1: Switch lights\n");
printf("Option 2: Show working lights\n");
printf("\n");
printf("Enter 1/2:  ");
scanf("%d",&a);
switch(a){
    case 1: {printf("Which light to switch?  -> ");
             scanf("%d",&b);
             switch (b)
             {
             case 1: lights = lights ^ light1; break;
             case 2: lights = lights ^ light2; break;
             case 3: lights = lights ^ light3; break;
             case 4: lights = lights ^ light4; break;
             case 5: lights = lights ^ light5; break;
             case 6: lights = lights ^ light6; break;
             case 7: lights = lights ^ light7; break;
             case 8: lights = lights ^ light8; break;
             default: break;
             }
             }break;
    case 2: for (int i = sizeof(lights) * 8 - 1; i >= 0; i--) {
    printf("%u", (lights >> i) & 1);}break;
    default: printf("Option not available");break;
}
}