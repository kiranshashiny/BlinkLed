/*******************************************************************************
 * Copyright (c) 2015 IBM Corp.
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * and Eclipse Distribution License v1.0 which accompany this distribution.
 *
 *******************************************************************************/
/* Code to change Pin 17 on and off for 1/2 a second on a Raspberry Pi.
 * It is assumed  that you have connected the LED to the Raspberry Pi before 
 * running this piece of code.
*/


#include <wiringPi.h>
#include <stdio.h>
int main (void)
{
  if ( wiringPiSetupGpio () == -1 ){
	printf ("wiring failed - returning ! ");
	return 0;
  }
  pinMode (17, OUTPUT) ;
  for (;;)
  {
    digitalWrite (17, HIGH) ; delay (500) ;
    digitalWrite (17,  LOW) ; delay (500) ;
  }
  return 0 ;
}
