/* 
 * Iain Workman
 * ipw969
 * 11139430
 */
#ifndef CMPT434_POLICIES_H
#define CMPT434_POLICIES_H

#define ENDEMIC_ALWAYS  0
#define ENDEMIC_SELECT  1
#define RANDOM          3

#include "dtn.h"

int endemic_selective_remove(dtn_node *self,
                             dtn_node *other,
                             dtn_message *message,
                             int *should_remove);

int endemic_always_remove(dtn_node *self,
                          dtn_node *other,
                          dtn_message *message,
                          int *should_remove);


int random_transmit(dtn_node *self,
                    dtn_node *other,
                    dtn_message *message,
                    int *should_remove);

#endif
