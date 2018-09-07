#define PERIPH_BASE		((unsigned int)0x40000000)				//总线基地址 
#define APB1PERIPH_BASE		PERIPH_BASE									//APB1基地址
#define APB2PERIPH_BASE		(PERIPH_BASE + 0x10000)				//APB2基地址
#define AHBPERIPH_BASE		(PERIPH_BASE + 0x20000)				//AHB基地址

#define	RCC_BASE	(AHBPERIPH_BASE + 0x1000)							//RCC基地址，AHB基地址+偏移地址
#define GPIOB_BASE	(APB2PERIPH_BASE + 0x0C00)					//PORTB基地址，由APB2基地址+偏移地址
#define GPIOE_BASE	(APB2PERIPH_BASE + 0x1800)					//PORTE基地址，由APB2基地址+偏移地址

#define RCC_APB2ENR		*(unsigned int*)(RCC_BASE + 0x18)	//RCC_APB2ENR地址，由RCC基地址+偏移地址
	
#define GPIOB_CRL		*(unsigned int*)(GPIOB_BASE + 0x00)	//GPIOB_CRL地址，由GPIOB基地址+偏移地址
#define GPIOB_ODR		*(unsigned int*)(GPIOB_BASE + 0x0C)	//GPIOB_ODR地址，由GPIOB基地址+偏移地址
#define GPIOE_CRL		*(unsigned int*)(GPIOE_BASE + 0x00)	//GPIOE_CRL地址，由GPIOE基地址+偏移地址
#define GPIOE_ODR		*(unsigned int*)(GPIOE_BASE + 0x0C)	//GPIOE_ODR地址，由GPIOE基地址+偏移地址
