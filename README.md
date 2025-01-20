# Projeto: Teste de LED RGB com Raspberry Pi Pico W

Este projeto realiza o teste de um LED RGB e de um buzzer conectados ao Raspberry Pi Pico W. O teste é iniciado pressionando um botão, ligando cada cor do LED RGB sequencialmente e, ao final, ativando o buzzer.

---

## 🛠️ **Funcionalidades**
- Acionamento de LEDs RGB (verde, azul e vermelho) por 1 segundo cada.
- Emissão de mensagens no terminal indicando qual LED está ativo.
- Acionamento do buzzer por 2 segundos após a sequência de LEDs.
- Operação iniciada pelo acionamento de um botão.

---

## 📑 **Especificações do Hardware**
| Componente      | GPIO (Pino)       |
|------------------|-------------------|
| Botão           | GPIO 5            |
| Buzzer          | GPIO 21           |
| LED Verde       | GPIO 11           |
| LED Azul        | GPIO 12           |
| LED Vermelho    | GPIO 13           |

---

## 📋 **Requisitos**
1. **Raspberry Pi Pico W**.
2. **SDK do Raspberry Pi configurado**.
3. **Visual Studio Code** com extensão do Raspberry instalada.
4. **BitLabDog** para componentes de teste.

---

## 🚀 **Como Funciona**
1. Pressione o botão conectado ao GPIO 5 para iniciar o teste.
2. O sistema acende cada cor do LED RGB por 1 segundo:
   - Verde, depois Azul, e por fim Vermelho.
3. Após os LEDs, o buzzer toca por 2 segundos.
4. Durante o teste, mensagens no terminal indicam os LEDs sendo ativados.

---

## 🖥️ **Configuração e Execução**
1. **Clone o Repositório**:
   ```bash
   git clone https://github.com/seu-usuario/seu-repositorio.git

## 🔗 **Link com a demonstração em vídeo**
- [Videoapresentação](https://www.youtube.com/shorts/PPQQb8wRUJ4)