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
	
	// ����PORTB_ODR�Ĵ�����ʹPORTB.5��� 0
	GPIOB_ODR &= ~(1<<5);
	
	// ����PORTE_ODR�Ĵ�����ʹPORTE.5��� 0
	GPIOE_ODR &= ~(1<<5);
}

void SystemInit(void){
	//������Ϊ�գ�Ŀ����Ϊ��ƭ��������������
}
