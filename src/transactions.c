#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "transactions.h"

// Add a new transaction to the list
void add_transaction(Transaction** head, const char* date, const char* category, double amount, const char* description) {
    Transaction* new_transaction = (Transaction*)malloc(sizeof(Transaction));
    strcpy(new_transaction->date, date);
    strcpy(new_transaction->category, category);
    new_transaction->amount = amount;
    strcpy(new_transaction->description, description);
    new_transaction->next = *head;
    *head = new_transaction;
}

// View all transactions
void view_transactions(Transaction* head) {
    Transaction* current = head;
    while (current != NULL) {
        printf("Date: %s, Category: %s, Amount: %.2f, Description: %s\n",
               current->date, current->category, current->amount, current->description);
        current = current->next;
    }
}

// Free all transactions
void free_transactions(Transaction* head) {
    Transaction* current = head;
    while (current != NULL) {
        Transaction* temp = current;
        current = current->next;
        free(temp);
    }
}
