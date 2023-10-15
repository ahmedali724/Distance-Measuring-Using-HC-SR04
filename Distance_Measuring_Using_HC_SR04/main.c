/*
 ============================================================================
 Name        : main.c
 Module Name : APP
 Author      : Ahmed Ali
 Date        : 12 Oct 2023
 Description : The main function
 ============================================================================
 */

#include "HAL/LCD/lcd.h" /* To use LCD functions */
#include "HAL/ULTRASONIC_SENSOR/ultrasonic_sensor.h" /* To use ULTRASONIC SENSOR functions */
#include "MCAL/GPIO/gpio_private.h"/* To use SREG register definition */

int main(void)
{
	/* Configuration and initialization functions */
	uint16 distance = 0;
	/* Enable global interrupt */
	SREG_REG.Bits.I_Bit = 1;
	LCD_init();
	Ultrasonic_init();
	LCD_displayString("Distance=    cm");
	while (1)
	{
		/* Get the distance value from the sensor */
		distance = Ultrasonic_readDistance();
		LCD_moveCursor(0, 10);
		/* To ensure that the third digit in numbers less than 100 is not printed */
		LCD_intgerToString(distance);
		if (distance < 100)
		{
			LCD_displayCharacter(' ');
		}
		/* To ensure that the second digit in numbers less than 10 is not printed */
		else if (distance < 10)
		{
			LCD_displayString("  ");
		}
	}
}
