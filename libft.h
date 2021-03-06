#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1
#endif

/** linked list from libft bonus**/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/** simple linked list structs **/
typedef struct snode
{
	int				val;
	struct snode	*next;
} node;

typedef struct linked_list
{
	node	*begin;
	node	*end;
	int		size;
} linkedlist;

/** double linked list structs**/
typedef struct dnode
{
	int				val;
	struct dnode	*prev;
	struct dnode	*next;
} d_node;

typedef struct dlinked_list
{
	d_node	*begin;
	d_node	*end;
	size_t	size;
} d_linked_list;

/** circular double linked list structs **/
typedef struct circ_node
{
	int					val;
	struct circ_node	*prev;
	struct circ_node	*next;
} c_node;

typedef struct circ_list
{
	c_node	*begin;
	c_node	*end;
	size_t	size;
} c_list;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
int		ft_atoi(const char *nptr);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_len_nbr(int n);
void	ft_putnbr_base(int nbr, char *base);
void	ft_int_to_hex(int nbr);
int		ft_len_uns_nbr(unsigned int n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
int		get_next_line(int fd, char **line);

/** linked list from libft bonus**/
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/** Refactored functions to work with linkedlists **/
node		*ft_snode_create(int val);
linkedlist	*ft_linkedlist_create();
void		ft_linkedlist_add_first(linkedlist *list, int val);
void		ft_linkdedlist_print(linkedlist *list);
void		ft_linkedlist_add_last(linkedlist *list, int val);
void		ft_linkedlist_remove(linkedlist *list, int val);
void		ft_linkedlist_destroy(linkedlist **list_ref);
int			ft_linkedlist_size(linkedlist *list);
int			ft_linkedlist_get_val(linkedlist *list, int index);

/** double linkedlist **/
d_node			*ft_dnode_create(int val);
d_linked_list	*ft_dlist_create();
void			ft_dlist_destroy(d_linked_list **d_list_ref);
void			ft_dlinkdedlist_print(d_linked_list *list);
d_linked_list	*ft_dlinkedlist_create();
void			ft_dlinkedlist_add_last(d_linked_list *list, int val);
void	ft_linkedlist_remove(linkedlist *list, int val);

/** circular double linkedlist **/
c_node	*ft_cnode_create(int val);
void	ft_cnode_destroy(c_node **node_ref);
c_list	*ft_clinkedlist_create();
void	ft_clinkedlist_destroy(c_list **list_ref);
void	ft_clinkedlist_add_first(c_list *list, int val);
void	ft_clinkedlist_add_last(c_list *list, int val);
void	ft_clinkdedlist_print(c_list *list);
void	ft_clinkdedlist_inv_print(c_list *list);
void	ft_clinkedlist_remove(c_list *list, int val);

#endif