/*
 * Ringbuffer.c
 *
 *  Created on: 12 Jun 2024
 *      Author: thunder
 */

#ifndef RINGBUFFER_C_
#define RINGBUFFER_C_

#include "Ringbuffer.h"

void InitialiseRingBuffer(ringbuffer *handle, uint32_t size)
{
	handle->head = 0;
	handle->tail = 0;
	handle->maxLength = size + 1;

	node *newList = (node *)malloc(sizeof(node));

	handle->list = newList;
}

void PushToBuffer(ringbuffer *handle, uint32_t data)
{
	uint32_t next;

	next = handle->head + 1;

	if(next >= handle->maxLength)
	{
		next = 0;
	}

	if(next == handle->tail)
	{
		return;
	}

	AddItemToNode(handle->list, data);

	handle->head = next;
}

uint32_t PopFromBuffer(ringbuffer *handle)
{
	uint32_t next;
	uint32_t data;

	if(handle->head == handle->tail)
	{
		return 0;
	}

	next = handle->tail + 1;

	if(next >= handle->maxLength)
	{
		next = 0;
	}

	data = searchlist(handle->list, handle->tail);

	handle->tail = next;

	return data;
}

#endif /* RINGBUFFER_C_ */
