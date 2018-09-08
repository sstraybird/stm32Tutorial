#define PERIPH_BASE		((unsigned int)0x40000000)				//���߻���ַ 
#define APB1PERIPH_BASE		PERIPH_BASE									//APB1����ַ
#define APB2PERIPH_BASE		(PERIPH_BASE + 0x10000)				//APB2����ַ
#define AHBPERIPH_BASE		(PERIPH_BASE + 0x20000)				//AHB����ַ

#define	RCC_BASE	(AHBPERIPH_BASE + 0x1000)							//RCC����ַ��AHB����ַ+ƫ�Ƶ�ַ
#define GPIOB_BASE	(APB2PERIPH_BASE + 0x0C00)					//PORTB����ַ����APB2����ַ+ƫ�Ƶ�ַ
#define GPIOE_BASE	(APB2PERIPH_BASE + 0x1800)					//PORTE����ַ����APB2����ַ+ƫ�Ƶ�ַ

#define RCC_APB2ENR		*(unsigned int*)(RCC_BASE + 0x18)	//RCC_APB2ENR��ַ����RCC����ַ+ƫ�Ƶ�ַ
	
#define GPIOB_CRL		*(unsigned int*)(GPIOB_BASE + 0x00)	//GPIOB_CRL��ַ����GPIOB����ַ+ƫ�Ƶ�ַ
#define GPIOB_ODR		*(unsigned int*)(GPIOB_BASE + 0x0C)	//GPIOB_ODR��ַ����GPIOB����ַ+ƫ�Ƶ�ַ
#define GPIOE_CRL		*(unsigned int*)(GPIOE_BASE + 0x00)	//GPIOE_CRL��ַ����GPIOE����ַ+ƫ�Ƶ�ַ
#define GPIOE_ODR		*(unsigned int*)(GPIOE_BASE + 0x0C)	//GPIOE_ODR��ַ����GPIOE����ַ+ƫ�Ƶ�ַ
	
#define BITBAND(addr, bitnum) ((addr & 0xF0000000)+0x2000000+((addr &0xFFFFF)<<5)+(bitnum<<2)) 
#define MEM_ADDR(addr)  *((volatile unsigned long  *)(addr)) 			
#define BIT_ADDR(addr, bitnum)   MEM_ADDR(BITBAND(addr, bitnum)) 	

#define GPIOB_ODR_Addr    (GPIOB_BASE+12) //0x40010C0C 						
#define GPIOE_ODR_Addr    (GPIOE_BASE+12) //0x4001180C 						
