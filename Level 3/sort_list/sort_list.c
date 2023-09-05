#include "list.h"
#include <unistd.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int	overflow;
	t_list	*tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			overflow = lst->data;
			lst->data = lst->next->data;
			lst->next->data = overflow;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

/*Esta función debe dar una lista dada como parámetro, usando la función puntero cmp para
 * seleccionar el orden a aplicar, y devuelve un puntero al primer elemento de la lista ordenada.
 *
 * los duplicados deben permanecer.
 *
 * las entradas serán siempre coherentes.
 *
 * debe  utilizare el tipo t_list descrito en el archivo list.h que se le proporciona
 * debe incluir ese fichero #include "list.h", pero no debe entregarlo. utilizaremos el nuestro propio.
 * 
 * las funciones pasadas como cmp siempre devolverán un valor distinto de 0 si a y b están en el orden correcto
 * y 0 en caso contrario. por ejemplo, la siguiente funcion usada como cmp ordeanrá una lista en orden ascendente. 
 *
 * int ascending(int a, int b)
{
	return (a <= b);
}
*/

