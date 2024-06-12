/*
 ============================================================================
 Name        : Ringbuffer.c
 Author      : Hari nandhan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "SLL.h"
#include "Ringbuffer.h"

static uint32_t bufferLength = 0;

static uint32_t *data = NULL;

static ringbuffer inputData;

int main(void)
{
	printf("Enter ringbuffer size.........\n");
	scanf("%d", &bufferLength);

	data = (uint32_t *)malloc(bufferLength * sizeof(uint32_t));

	InitialiseRingBuffer(&inputData, bufferLength);

	printf("\nThe ringbuffer size - %d\n", bufferLength);

	printf("Enter elements.....\n");

	for(int inputCount = 0; inputCount < bufferLength; inputCount++)
	{
		scanf("%d", &data[inputCount]);
	}

	printf("\nPushing data into ringbuffer.......\n");

	for(int inputCount = 0; inputCount < bufferLength; inputCount++)
	{
		PushToBuffer(&inputData, data[inputCount]);
	}

	printf("\nRetrieving data from ringbuffer.......\n");

	for(int inputCount = 0; inputCount < bufferLength; inputCount++)
	{
		printf("%d\n",PopFromBuffer(&inputData));
	}

	free(data);
	data = NULL;
}
