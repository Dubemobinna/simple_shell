#include "main.h"

/**
 * add_sep_node_end - adds separator at the end
 * @head: linked list head
 * @sep: separator
 * Return: head address.
 */
sep_list *add_sep_node_end(sep_list **head, char sep)
{
	sep_list *new_x, *temp_x;

	new_x = malloc(sizeof(sep_list));
	if (new_x == NULL)
		return (NULL);

	new_x->separator = sep;
	new_x->next = NULL;
	temp_x = *head;

	if (temp_x == NULL)
	{
		*head = new_x;
	}
	else
	{
		while (temp_x->next != NULL)
			temp_x = temp_x->next;
		temp_x->next = new_x;
	}

	return (*head);
}

/**
 * free_sep_list - it frees up the sep_list
 * @head: linked list head.
 * Return: nothing to return.
 */
void free_sep_list(sep_list **head)
{
	sep_list *temp_x;
	sep_list *curr_x;

	if (head != NULL)
	{
		curr_x = *head;
		while ((temp_x = curr_x) != NULL)
		{
			curr_x = curr_x->next;
			free(temp_x);
		}
		*head = NULL;
	}
}

/**
 * add_line_node_end - at at the end, it adds a command line
 * @head: linked list head.
 * @line: command line.
 * Return: head address.
 */
line_list *add_line_node_end(line_list **head, char *line)
{
	line_list *new_x, *temp_x;

	new_x = malloc(sizeof(line_list));
	if (new_x == NULL)
		return (NULL);

	new_x->line = line;
	new_x->next = NULL;
	temp_x = *head;

	if (temp_x == NULL)
	{
		*head = new_x;
	}
	else
	{
		while (temp_x->next != NULL)
			temp_x = temp_x->next;
		temp_x->next = new_x;
	}

	return (*head);
}

/**
 * free_line_list - it creats space in the line_list
 * @head: head of linked list
 * Return: nothing to return.
 */

void free_line_list(line_list **head)
{
	line_list *temp_x;
	line_list *curr_x;

	if (head != NULL)
	{
		curr_x = *head;
		while ((temp_x = curr_x) != NULL)
		{
			curr_x = curr_x->next;
			free(temp_x);
		}
		*head = NULL;
	}
}
