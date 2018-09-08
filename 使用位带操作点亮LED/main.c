#include "stm32f10x.h"

int main(void){
	// ʹ��GPIOB,GPIOE��ʱ��
	RCC_APB2ENR  |=  ( (1001) << 3 );
	
	// ����PORTB.5��Ϊ�������(0001)
	GPIOB_CRL &=  ~( (0x0f) << (4*5) );//�Ȱ���Ӧ��4��λ����Ϊ0
	GPIOB_CRL |=  ( (1) << (4*5) );	//Ȼ�����4��λ����Ϊ0001
	
	// ����PORTE.5��Ϊ�������
	GPIOE_CRL &=  ~( (0x0f) << (4*5) );
	GPIOE_CRL |=  ( (1) << (4*5) );
	
	// ����PORTB_ODR�Ĵ�����ʹGPIOB_ODR�Ĵ�����5λΪ0,ʹPORTB.5��� 0
//	GPIOB_ODR &= ~(1<<5);
	
	// ����PORTE_ODR�Ĵ�����ʹGPIOE_ODR�Ĵ�����5λΪ0,ʹPORTE.5��� 0
//	GPIOE_ODR &= ~(1<<5);
	
	//ʹ��λ��������ʹGPIOB_ODR�Ĵ�����5λΪ0��ʹPORTB.5��� 0
	MEM_ADDR(BITBAND(GPIOB_ODR_Addr,5)) = 0;	
		//ʹ��λ��������ʹGPIOE_ODR�Ĵ�����5λΪ0��ʹPORTE.5��� 0
	MEM_ADDR(BITBAND(GPIOE_ODR_Addr,5)) = 0;	
}

void SystemInit(void){
	//������Ϊ�գ�Ŀ����Ϊ��ƭ��������������
}
