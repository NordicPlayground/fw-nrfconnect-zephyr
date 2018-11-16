/*
 * Copyright (c) 2018 Linaro Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* Board level DTS fixup file */

#if defined(CONFIG_BOARD_QUARK_SE_C1000_DEVBOARD)

#define DT_WIFI_WINC1500_SPI_DRV_NAME	DT_SNPS_DESIGNWARE_SPI_B0001400_ATMEL_WINC1500_0_BUS_NAME
#define DT_WIFI_WINC1500_SPI_SLAVE	DT_SNPS_DESIGNWARE_SPI_B0001400_ATMEL_WINC1500_0_BASE_ADDRESS
#define DT_WIFI_WINC1500_SPI_FREQ	DT_SNPS_DESIGNWARE_SPI_B0001400_ATMEL_WINC1500_0_SPI_MAX_FREQUENCY

#define DT_WIFI_WINC1500_GPIO_SPI_CS_DRV_NAME	DT_SNPS_DESIGNWARE_SPI_B0001400_CS_GPIOS_CONTROLLER
#define DT_WIFI_WINC1500_GPIO_SPI_CS_PIN	DT_SNPS_DESIGNWARE_SPI_B0001400_CS_GPIOS_PIN

#define DT_WINC1500_GPIO_CHIP_EN_DRV_NAME	DT_SNPS_DESIGNWARE_SPI_B0001400_ATMEL_WINC1500_0_ENABLE_GPIOS_CONTROLLER
#define DT_WINC1500_GPIO_CHIP_EN		DT_SNPS_DESIGNWARE_SPI_B0001400_ATMEL_WINC1500_0_ENABLE_GPIOS_PIN
#define DT_WINC1500_GPIO_IRQN_DRV_NAME		DT_SNPS_DESIGNWARE_SPI_B0001400_ATMEL_WINC1500_0_IRQ_GPIOS_CONTROLLER
#define DT_WINC1500_GPIO_IRQN			DT_SNPS_DESIGNWARE_SPI_B0001400_ATMEL_WINC1500_0_IRQ_GPIOS_PIN
#define DT_WINC1500_GPIO_RESET_N_DRV_NAME	DT_SNPS_DESIGNWARE_SPI_B0001400_ATMEL_WINC1500_0_RESET_GPIOS_CONTROLLER
#define DT_WINC1500_GPIO_RESET_N		DT_SNPS_DESIGNWARE_SPI_B0001400_ATMEL_WINC1500_0_RESET_GPIOS_PIN

#endif /* CONFIG_BOARD_QUARK_SE_C1000_DEVBOARD */
