/*
 * Ringbuffer.h
 *
 *  Created on: 12 Jun 2024
 *      Author: thunder
 */

#ifndef RINGBUFFER_H_
#define RINGBUFFER_H_

#include <stdbool.h>
#include <stdint.h>

#include "SLL.h"

struct ringbuffer
{
	node *list;
	uint32_t head;
	uint32_t tail;
	uint32_t maxLength;
};

typedef struct ringbuffer ringbuffer;

void InitialiseRingBuffer(ringbuffer *handle, uint32_t size);

void PushToBuffer(ringbuffer *handle, uint32_t data);

uint32_t PopFromBuffer(ringbuffer *handle);

#endif /* RINGBUFFER_H_ */
