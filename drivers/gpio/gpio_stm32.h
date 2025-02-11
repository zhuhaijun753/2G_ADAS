/*
 * Copyright (c) 2016 Open-RnD Sp. z o.o.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _STM32_GPIO_H_
#define _STM32_GPIO_H_

/**
 * @file header for STM32 GPIO
 */

#include <clock_control/stm32_clock_control.h>
#include <pinmux/stm32/pinmux_stm32.h>
#include <gpio.h>

/* GPIO buses definitions */
#ifdef CONFIG_SOC_SERIES_STM32F0X
#define STM32_CLOCK_BUS_GPIO STM32_CLOCK_BUS_AHB1
#define STM32_PERIPH_GPIOA LL_AHB1_GRP1_PERIPH_GPIOA
#define STM32_PERIPH_GPIOB LL_AHB1_GRP1_PERIPH_GPIOB
#define STM32_PERIPH_GPIOC LL_AHB1_GRP1_PERIPH_GPIOC
#define STM32_PERIPH_GPIOD LL_AHB1_GRP1_PERIPH_GPIOD
#define STM32_PERIPH_GPIOE LL_AHB1_GRP1_PERIPH_GPIOE
#define STM32_PERIPH_GPIOF LL_AHB1_GRP1_PERIPH_GPIOF
#elif CONFIG_SOC_SERIES_STM32F1X
#define STM32_CLOCK_BUS_GPIO STM32_CLOCK_BUS_APB2
#define STM32_PERIPH_GPIOA LL_APB2_GRP1_PERIPH_GPIOA
#define STM32_PERIPH_GPIOB LL_APB2_GRP1_PERIPH_GPIOB
#define STM32_PERIPH_GPIOC LL_APB2_GRP1_PERIPH_GPIOC
#define STM32_PERIPH_GPIOD LL_APB2_GRP1_PERIPH_GPIOD
#define STM32_PERIPH_GPIOE LL_APB2_GRP1_PERIPH_GPIOE
#define STM32_PERIPH_GPIOF LL_APB2_GRP1_PERIPH_GPIOF
#define STM32_PERIPH_GPIOG LL_APB2_GRP1_PERIPH_GPIOG
#elif CONFIG_SOC_SERIES_STM32F3X
#define STM32_CLOCK_BUS_GPIO STM32_CLOCK_BUS_AHB1
#define STM32_PERIPH_GPIOA LL_AHB1_GRP1_PERIPH_GPIOA
#define STM32_PERIPH_GPIOB LL_AHB1_GRP1_PERIPH_GPIOB
#define STM32_PERIPH_GPIOC LL_AHB1_GRP1_PERIPH_GPIOC
#define STM32_PERIPH_GPIOD LL_AHB1_GRP1_PERIPH_GPIOD
#define STM32_PERIPH_GPIOE LL_AHB1_GRP1_PERIPH_GPIOE
#define STM32_PERIPH_GPIOF LL_AHB1_GRP1_PERIPH_GPIOF
#define STM32_PERIPH_GPIOG LL_AHB1_GRP1_PERIPH_GPIOG
#define STM32_PERIPH_GPIOH LL_AHB1_GRP1_PERIPH_GPIOH
#elif CONFIG_SOC_SERIES_STM32F4X
#define STM32_CLOCK_BUS_GPIO STM32_CLOCK_BUS_AHB1
#define STM32_PERIPH_GPIOA LL_AHB1_GRP1_PERIPH_GPIOA
#define STM32_PERIPH_GPIOB LL_AHB1_GRP1_PERIPH_GPIOB
#define STM32_PERIPH_GPIOC LL_AHB1_GRP1_PERIPH_GPIOC
#define STM32_PERIPH_GPIOD LL_AHB1_GRP1_PERIPH_GPIOD
#define STM32_PERIPH_GPIOE LL_AHB1_GRP1_PERIPH_GPIOE
#define STM32_PERIPH_GPIOF LL_AHB1_GRP1_PERIPH_GPIOF
#define STM32_PERIPH_GPIOG LL_AHB1_GRP1_PERIPH_GPIOG
#define STM32_PERIPH_GPIOH LL_AHB1_GRP1_PERIPH_GPIOH
#define STM32_PERIPH_GPIOI LL_AHB1_GRP1_PERIPH_GPIOI
#define STM32_PERIPH_GPIOJ LL_AHB1_GRP1_PERIPH_GPIOJ
#define STM32_PERIPH_GPIOK LL_AHB1_GRP1_PERIPH_GPIOK
#elif CONFIG_SOC_SERIES_STM32L0X
#define STM32_CLOCK_BUS_GPIO STM32_CLOCK_BUS_IOP
#define STM32_PERIPH_GPIOA LL_IOP_GRP1_PERIPH_GPIOA
#define STM32_PERIPH_GPIOB LL_IOP_GRP1_PERIPH_GPIOB
#define STM32_PERIPH_GPIOC LL_IOP_GRP1_PERIPH_GPIOC
#define STM32_PERIPH_GPIOD LL_IOP_GRP1_PERIPH_GPIOD
#define STM32_PERIPH_GPIOE LL_IOP_GRP1_PERIPH_GPIOE
#define STM32_PERIPH_GPIOH LL_IOP_GRP1_PERIPH_GPIOH
#elif CONFIG_SOC_SERIES_STM32L1X
#define STM32_CLOCK_BUS_GPIO STM32_CLOCK_BUS_AHB1
#define STM32_PERIPH_GPIOA LL_AHB1_GRP1_PERIPH_GPIOA
#define STM32_PERIPH_GPIOB LL_AHB1_GRP1_PERIPH_GPIOB
#define STM32_PERIPH_GPIOC LL_AHB1_GRP1_PERIPH_GPIOC
#define STM32_PERIPH_GPIOD LL_AHB1_GRP1_PERIPH_GPIOD
#define STM32_PERIPH_GPIOE LL_AHB1_GRP1_PERIPH_GPIOE
#define STM32_PERIPH_GPIOF LL_AHB1_GRP1_PERIPH_GPIOF
#define STM32_PERIPH_GPIOG LL_AHB1_GRP1_PERIPH_GPIOG
#define STM32_PERIPH_GPIOH LL_AHB1_GRP1_PERIPH_GPIOH
#elif CONFIG_SOC_SERIES_STM32L4X
#define STM32_CLOCK_BUS_GPIO STM32_CLOCK_BUS_AHB2
#define STM32_PERIPH_GPIOA LL_AHB2_GRP1_PERIPH_GPIOA
#define STM32_PERIPH_GPIOB LL_AHB2_GRP1_PERIPH_GPIOB
#define STM32_PERIPH_GPIOC LL_AHB2_GRP1_PERIPH_GPIOC
#define STM32_PERIPH_GPIOD LL_AHB2_GRP1_PERIPH_GPIOD
#define STM32_PERIPH_GPIOE LL_AHB2_GRP1_PERIPH_GPIOE
#define STM32_PERIPH_GPIOF LL_AHB2_GRP1_PERIPH_GPIOF
#define STM32_PERIPH_GPIOG LL_AHB2_GRP1_PERIPH_GPIOG
#define STM32_PERIPH_GPIOH LL_AHB2_GRP1_PERIPH_GPIOH
#define STM32_PERIPH_GPIOI LL_AHB2_GRP1_PERIPH_GPIOI
#endif /* CONFIG_SOC_SERIES_.. */

/**
 * @brief configuration of GPIO device
 */
struct gpio_stm32_config {
	/* port base address */
	u32_t *base;
	/* IO port */
	int port;
	struct stm32_pclken pclken;
};

/**
 * @brief driver data
 */
struct gpio_stm32_data {
	/* Enabled INT pins generating a cb */
	u32_t cb_pins;
	/* user ISR cb */
	sys_slist_t cb;
};

/**
 * @brief helper for mapping of GPIO flags to SoC specific config
 *
 * @param flags GPIO encoded flags
 * @param out conf SoC specific pin config
 *
 * @return 0 if flags were mapped to SoC pin config
 */
int stm32_gpio_flags_to_conf(int flags, int *conf);

/**
 * @brief helper for configuration of GPIO pin
 *
 * @param base_addr GPIO port base address
 * @param pin IO pin
 * @param func GPIO mode
 * @param altf Alternate function
 */
int stm32_gpio_configure(u32_t *base_addr, int pin, int func, int altf);

/**
 * @brief helper for setting of GPIO pin output
 *
 * @param base_addr GPIO port base address
 * @param pin IO pin
 * @param value 1, 0
 */
int stm32_gpio_set(u32_t *base, int pin, int value);

/**
 * @brief helper for reading of GPIO pin value
 *
 * @param base_addr GPIO port base address
 * @param pin IO pin
 * @return pin value
 */
int stm32_gpio_get(u32_t *base, int pin);

/**
 * @brief enable interrupt source for GPIO pin
 * @param port
 * @param pin
 */
int stm32_gpio_enable_int(int port, int pin);

#endif /* _STM32_GPIO_H_ */

