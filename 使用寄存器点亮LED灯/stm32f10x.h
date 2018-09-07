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
