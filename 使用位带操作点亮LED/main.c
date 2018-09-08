#include "stm32f10x.h"

int main(void){
	// 使能GPIOB,GPIOE的时钟
	RCC_APB2ENR  |=  ( (1001) << 3 );
	
	// 配置PORTB.5口为推挽输出(0001)
	GPIOB_CRL &=  ~( (0x0f) << (4*5) );//先把相应的4个位设置为0
	GPIOB_CRL |=  ( (1) << (4*5) );	//然后把这4个位设置为0001
	
	// 配置PORTE.5口为推挽输出
	GPIOE_CRL &=  ~( (0x0f) << (4*5) );
	GPIOE_CRL |=  ( (1) << (4*5) );
	
	// 控制PORTB_ODR寄存器，使GPIOB_ODR寄存器第5位为0,使PORTB.5输出 0
//	GPIOB_ODR &= ~(1<<5);
	
	// 控制PORTE_ODR寄存器，使GPIOE_ODR寄存器第5位为0,使PORTE.5输出 0
//	GPIOE_ODR &= ~(1<<5);
	
	//使用位带操作，使GPIOB_ODR寄存器第5位为0，使PORTB.5输出 0
	MEM_ADDR(BITBAND(GPIOB_ODR_Addr,5)) = 0;	
		//使用位带操作，使GPIOE_ODR寄存器第5位为0，使PORTE.5输出 0
	MEM_ADDR(BITBAND(GPIOE_ODR_Addr,5)) = 0;	
}

void SystemInit(void){
	//函数体为空，目的是为了骗过编译器不报错
}
