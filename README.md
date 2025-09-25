# Libft

## Funciones de `libc`

```c
int      ft_isalpha(int c);
int      ft_isdigit(int c);
int      ft_isalnum(int c);
int      ft_isascii(int c);
int      ft_isprint(int c);
int      ft_isspace(int c);
size_t   ft_strlen(const char *str);
void    *ft_memset(void *s, int c, size_t n);
void     ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
size_t   ft_strlcpy(char *dst, const char *src, size_t size);
size_t   ft_strlcat(char *dst, const char *src, size_t size);
int      ft_toupper(int c);
int      ft_tolower(int c);
char    *ft_strchr(char *str, int c);
char    *ft_strrchr(char *str, int c);
int      ft_strncmp(const char *s1, const char *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int      ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int      ft_atoi(const char *str);
void    *ft_calloc(size_t nelem, size_t size);
char    *ft_strdup(const char *str);
```

## Funciones adicionales

```c
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char   **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void     ft_striteri(char *s, void (*f)(unsigned int, char*));
void     ft_putchar_fd(char c, int fd);
void     ft_putstr_fd(char *s, int fd);
void     ft_putendl_fd(char *s, int fd);
void     ft_putnbr_fd(int n, int fd);
```

## Libft Bonus

Las funciones bonus están aprobadas por los tests de Francinette, pero no se enviaron al proyecto final.

```c
t_list  *ft_lstnew(void *content);
void     ft_lstadd_front(t_list **lst, t_list *new);
int      ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void     ft_lstadd_back(t_list **lst, t_list *new);
void     ft_lstdelone(t_list *lst, void (*del)(void *));
void     ft_lstclear(t_list **lst, void (*del)(void *));
void     ft_lstiter(t_list *lst, void (*f)(void *));
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

## Get Next Line
```c
char    *get_next_line(int fd);
```

## ft_printf
```c
int      ft_printf(char const *str, ...);
ssize_t  ft_putchar_r(char c);
ssize_t  ft_putstr_r(char *s);
ssize_t  ft_putnbr_r(int n);
ssize_t  ft_putnbr_u_r(unsigned int n);
ssize_t  ft_puthex_int_r(unsigned int num, char *base);
ssize_t  ft_putptr_r(void *ptr);
```

## Bugs

### ft_split.c

El test `francinette --strict` avisa de un fallo de doble free en `ft_split.c`:

```
You are trying to free a pointer that was already freed
```

### get_next_line.c
El test `francinette --strict` avisa del fallo `4_NULL_CHECK.KO` al hacer el test sobre `empty.txt` con distintos tamaños de buffer.

```
empty.txt           : 1.OK 2.OK 3_LEAKS.OK 4_NULL_CHECK.KO 
Segmentation fault (core dumped)
```

## Repositorios originales
<details>
<summary>Libft</summary>

```
git@vogsphere-v2.42madrid.com:vogsphere/intra-uuid-a3b8dc3e-b88f-4c41-a80e-0b88c37fa243-6489439-danielji
```
</details>

<details>
<summary>Get Next Line</summary>

```
git@vogsphere-v2.42madrid.com:vogsphere/intra-uuid-f0678712-de9b-492e-baef-03b406eb120e-6523107-danielji
```
</details>

<details>
<summary>ft_printf</summary>

```
git@vogsphere-v2.42madrid.com:vogsphere/intra-uuid-b4a275c9-93f9-43a0-9ecd-8bf8c9d1621f-6569925-danielji
```
</details>