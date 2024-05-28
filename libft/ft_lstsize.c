#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	size_t	count;
	t_list	*current;

	count = 0;
	current = lst;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}

int main()
{
    // Örnek bağlı liste düğümleri oluşturma
    t_list node3 = {"Node 3", NULL};
    t_list node2 = {"Node 2", &node3};
    t_list node1 = {"Node 1", &node2};

    // Bağlı listeyi gezme
    printf("%d",ft_lstsize(&node1));

    return 0;
}