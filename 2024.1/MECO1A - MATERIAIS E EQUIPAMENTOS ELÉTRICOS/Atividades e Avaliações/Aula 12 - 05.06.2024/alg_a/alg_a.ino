#include <U8glib.h>

// Inicialização do display 128x64 com pinos da RAMPS 1.4
U8GLIB_ST7920_128X64 u8g(53, 51, 52);  // Pinos: CS, MOSI, SCK

void setup() {
  // Configurações iniciais do display
  u8g.setFont(u8g_font_unifont);
}

void loop() {
  // Começa o desenho na tela
  u8g.firstPage();  
  do {
    // Desenha uma mensagem para teste
    u8g.drawStr( 20, 30, "Teste Display 128x64");
    u8g.drawStr( 20, 50, "RAMPS 1.4");
  } while( u8g.nextPage() );
  
  delay(1000); // Espera um segundo para atualizar
}
