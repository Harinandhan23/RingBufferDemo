/*
 * SLL.c
 *
 *  Created on: 12 Jun 2024
 *      Author: thunder
 */


#include "SLL.h"

int indexno = 0;

void AddItemToNode(node **currentNode, int data)
{
    node* newNode = (node*) malloc(sizeof(node));

    // assign data value
    newNode->data = data;
    newNode->nodeId = indexno ++;
    // change the next node of this newNode
    // to current head of Linked List
    newNode->next = *currentNode;

    //re-assign head to this newNode
    *currentNode = newNode;
    printf("Inserted %d\n",newNode->data);
}

void traverselist(node **currentNode)
{
	node* current = *currentNode;

    while (current != NULL)
    {
        printf("%d ", current->data);

        current = current->next;
    }
}

int searchlist(node **currentNode, int searchIndex)
{
	int data = 0;
	node* current = *currentNode;

    while(current != NULL)
    {
        if(current->nodeId == searchIndex)
        {
            data = current->data;
        }
        current = current->next;
    }

    return data;
}
