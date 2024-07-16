#ifndef FILE_IO_H
#define FILE_IO_H

#include "transactions.h"

void save_transactions(const char* filename, Transaction* head);
void load_transactions(const char* filename, Transaction** head);

#endif
