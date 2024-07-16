#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#define MAX_CATEGORY_LEN 50 //maximum lengths of category names
#define MAX_DESCRIPTION_LEN 100
#define MAX_DATE_LEN 11

typedef struct Transaction {
    char date[MAX_DATE_LEN];
    char category[MAX_CATEGORY_LEN];
    double amount;
    char description[MAX_DESCRIPTION_LEN];
    struct Transaction* next; //next : pointer to another Transaction structure, allowing the creation of a linked list of transactions.
} Transaction;

// add a new transaction to the linked list of transactions (head), given the transaction details(....)
void add_transaction(Transaction** head, const char* date, const char* category, double amount, const char* description);
//print out all transactions in the linked list starting from head.
void view_transactions(Transaction* head);
//free memory allocated for the linked list => to prevent memory leaks.
void free_transactions(Transaction* head);

#endif
