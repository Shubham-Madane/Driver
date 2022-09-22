
// LCD interface (should agree with the diagram above)
//   make sure that the LCD RW pin is connected to GND
#define lcd_D13_port     PORTD                   // lcd D13 connection
#define lcd_D13_bit      PORTD13
#define lcd_D13_ddr      DDRD

#define lcd_D12_port     PORTD                   // lcd D12 connection
#define lcd_D12_bit      PORTD12
#define lcd_D12_ddr      DDRD

#define lcd_D11_port     PORTD                   // lcd D11 connection
#define lcd_D11_bit      PORTD11
#define lcd_D11_ddr      DDRD

#define lcd_D10_port     PORTD                   // lcd D10 connection
#define lcd_D10_bit      PORTD10
#define lcd_D10_ddr      DDRD

#define lcd_D9_port     PORTD                   // lcd D9 connection
#define lcd_D9_bit      PORTD9
#define lcd_D9_ddr      DDRD

#define lcd_D8_port     PORTD                   // lcd D8 connection
#define lcd_D8_bit      PORTD8
#define lcd_D8_ddr      DDRD

#define lcd_D7_port     PORTD                   // lcd D7 connection
#define lcd_D7_bit      PORTD7
#define lcd_D7_ddr      DDRD

#define lcd_D6_port     PORTD                   // lcd D6 connection
#define lcd_D6_bit      PORTD6
#define lcd_D6_ddr      DDRD

#define lcd_D5_port     PORTD                   // lcd D5 connection
#define lcd_D5_bit      PORTD5
#define lcd_D5_ddr      DDRD

#define lcd_D4_port     PORTD                   // lcd D4 connection
#define lcd_D4_bit      PORTD4
#define lcd_D4_ddr      DDRD

#define lcd_D3_port     PORTD                   // lcd D3 connection
#define lcd_D3_bit      PORTD3
#define lcd_D3_ddr      DDRD

#define lcd_D2_port     PORTD                   // lcd D2 connection
#define lcd_D2_bit      PORTD2
#define lcd_D2_ddr      DDRD

#define lcd_D1_port     PORTD                   // lcd D1 connection
#define lcd_D1_bit      PORTD1
#define lcd_D1_ddr      DDRD

#define lcd_D0_port     PORTD                   // lcd D0 connection
#define lcd_D0_bit      PORTD0
#define lcd_D0_ddr      DDRD

#define lcd_E_port      PORTB                   // lcd Enable pin
#define lcd_E_bit       PORTB1
#define lcd_E_ddr       DDRB

#define lcd_RS_port     PORTB                   // lcd Register Select pin
#define lcd_RS_bit      PORTB0
#define lcd_RS_ddr      DDRB



// LCD module information
#define lcd_LineOne     0x00                    // start of line 1
#define lcd_LineTwo     0x40





// LCD instructions
#define lcd_Clear           0b00000001          // replace all characters with ASCII 'space'
#define lcd_Home            0b00000010          // return cursor to first position on first line
#define lcd_EntryMode       0b00000110          // shift cursor from left to right on read/write
#define lcd_DisplayOff      0b00001000          // turn display off
#define lcd_DisplayOn       0b00001100          // display on, cursor off, don't blink character
#define lcd_FunctionReset   0b00110000          // reset the LCD
#define lcd_FunctionSet8bit 0b00111000          // 8-bit data, 2-line display, 5 x 7 font
#define lcd_SetCursor       0b10000000          // set cursor position                              101100010000000000000000000000000000



