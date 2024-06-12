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

int main(void)
{
//	node *n1 = NULL;

//    AddItemToNode(&n1, 100);
//    AddItemToNode(&n1, 20);
//    AddItemToNode(&n1, 500);

//    traverselist(&n1);

//    printf("pop - %d\n", searchlist(&n1, 0));
//    printf("pop - %d\n", searchlist(&n1, 1));
//    printf("pop - %d\n", searchlist(&n1, 2));

	ringbuffer spiBuffer;

	InitialiseRingBuffer(&spiBuffer, 4);

	PushToBuffer(&spiBuffer, 180);
	PushToBuffer(&spiBuffer, 200);
	PushToBuffer(&spiBuffer, 250);

	printf("popped data - %d\n",PopFromBuffer(&spiBuffer));
	printf("popped data - %d\n",PopFromBuffer(&spiBuffer));
	printf("popped data - %d\n",PopFromBuffer(&spiBuffer));

}
