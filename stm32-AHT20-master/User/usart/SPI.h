#define OLED_CMD 0   //��������
#define OLED_DATA 1 //��������

#define OLED_CLK    PAout(4)    // CLKʱ��    d0
#define OLED_MOSI   PAout(3)    // MOSI     d1
#define OLED_RST    PAout(2)    // RET��λ    ret
#define OLED_DC     PAout(1)    // ����|����    dc  ��0��������1�������ݣ�

void OLED_SPI_Init(void); //����MCU��SPI
void SPI_WriteByte(uint8_t addr,uint8_t data); //��Ĵ�����ַдһ��byte������
void WriteCmd(unsigned char cmd); //д����
void WriteDat(unsigned char data); //д����