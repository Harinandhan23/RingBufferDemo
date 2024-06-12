/*
 * SLL.h
 *
 *  Created on: 12 Jun 2024
 *      Author: thunder
 */

#ifndef SLL_H_
#define SLL_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct Node
{
	int data;
	int nodeId;
	struct Node *next;
};

typedef struct Node node;

void AddItemToNode(node **currentNode, int data);

void traverselist(node **currentNode);

int searchlist(node **currentNode, int searchIndex);


#endif /* SLL_H_ */
