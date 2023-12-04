#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
#define GPIO_BASE_ADDRESS 0x40000000
#define GPIO_DIR__OFFSET 0x04
void blink_LED()
{
volatile uint32_t *gpio_base=(volatile uint32_t *)GPIO_BASE_ADDRESS;
gpio_base[GPIO_DIR_OFFSET] |=0X01;
while (true)
{
gpio_base[GPIO_DATA_OFFSET] ^=0X01;
for(volatile uint32 i=0;i<1000000;i++);
}
}
int main()
{
blink_LED();
return 0;
}

void getAccelerometerdata()
{
}
bool detectmovement(float x,float y,float z)
{
}
int main()
{
  while(1)
{
float accelX,accely,accelz;
getaccelerometerdata(&accelX,&accely,&accelz);
bool ismoving=detectmovement(accelX,accely,accelz);

if(ismoving)
{
}
else()
{
  }

}


return 0;
}



