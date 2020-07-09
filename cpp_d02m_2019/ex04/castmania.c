/*
** EPITECH PROJECT, 2020
** CPP Pool D02M
** File description:
** castmania
*/

#include "castmania.h"
#include <stdio.h>


void exec_instruction(instruction_type_t instruction_type, void *data);
void exec_operation(instruction_type_t instruction_type, void *data);

void exec_operation(instruction_type_t instruction_type, void *data)
{
    instruction_t *i;

    if (instruction_type == DIV_OPERATION) {
        i = (instruction_t *) data;
        exec_div(i->operation);
        if (i->output_type == VERBOSE &&
            ((division_t *) i->operation)->div_type == INTEGER) {
            printf("%i\n",
            ((integer_op_t *) ((division_t *) i->operation)->div_op)->res);
        }
        else if (i->output_type == VERBOSE) {
            printf("%f\n",
            ((decimale_op_t *) ((division_t *) i->operation)->div_op)->res);
        }
    } else if (instruction_type == ADD_OPERATION) {
        i = (instruction_t *) data;
        exec_add(i->operation);
        if (i->output_type == VERBOSE)
            printf("%i\n", ((addition_t *) i->operation)->add_op.res);
    }
}

void exec_instruction(instruction_type_t instruction_type, void *data)
{
    if (instruction_type == DIV_OPERATION || instruction_type == ADD_OPERATION)
        exec_operation(instruction_type, data);
    if (instruction_type == PRINT_INT) {
        printf("%i\n", (int) *((int *) data));
    if (instruction_type == PRINT_FLOAT)
        printf("%f\n", (float) *((float *) data));
}