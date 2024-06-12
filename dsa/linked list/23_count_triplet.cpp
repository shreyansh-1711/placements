
#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node* next, *prev;
};

int countTriplets(struct Node* head, int x)
{
	struct Node* ptr1, *ptr2, *ptr3;
	int count = 0;

	for (ptr1 = head; ptr1 != NULL; ptr1 = ptr1->next)
		for (ptr2 = ptr1->next; ptr2 != NULL; ptr2 = ptr2->next)
			for (ptr3 = ptr2->next; ptr3 != NULL; ptr3 = ptr3->next)

				if ((ptr1->data + ptr2->data + ptr3->data) == x)

					count++;

	return count;
}

void insert(struct Node** head, int data)
{
	// allocate node
	struct Node* temp = new Node();

	temp->data = data;
	temp->next = temp->prev = NULL;

	if ((*head) == NULL)
		(*head) = temp;
	else {
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}
int main()
{
	struct Node* head = NULL;

	insert(&head, 9);
	insert(&head, 8);
	insert(&head, 6);
	insert(&head, 5);
	insert(&head, 4);
	insert(&head, 2);
	insert(&head, 1);

	int x = 17;

	cout << "Count = "
		<< countTriplets(head, x);
	return 0;
}
