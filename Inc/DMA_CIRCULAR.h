#include "stm32f1xx_hal.h"

extern UART_HandleTypeDef huart1;
extern DMA_HandleTypeDef hdma_usart1_rx;
extern UART_HandleTypeDef huart2;
extern DMA_HandleTypeDef hdma_usart2_rx;



void USART_IrqHandler_Uart_1 (UART_HandleTypeDef *huart, DMA_HandleTypeDef *hdma);
void USART_IrqHandler_Uart_2 (UART_HandleTypeDef *huart, DMA_HandleTypeDef *hdma);

void DMA_IrqHandler_Uart1_Rx (DMA_HandleTypeDef *hdma, UART_HandleTypeDef *huart);
void DMA_IrqHandler_Uart2_Rx (DMA_HandleTypeDef *hdma, UART_HandleTypeDef *huart);

uint8_t check_for (char *string);
