#include "rush_02.h"





int main()
{
    int fd;
    char buf[10];
    int ret;
    t_dict mon_dict;
    t_dict *ptr;

    ptr = malloc(sizeof(t_dict) * 40);

    mon_dict.nbr = ft_atoi(buf)
    mon_dict.value  = malloc(sizeof(char *) * 15);
    mon_dict.value = "quarante-deux";
    
    ptr[0] = mon_dict;
    ptr[0].nbr = 43;

    fd = open("numbers.dict", O_RDONLY);
    if (fd == -1)
    {
        ft_putstr("Failled\n");
        return (1);
    }
    ret = read(fd, buf, 9);
    ft_putstr(buf);
    ft_putnbr(fd);
    if (close(fd) == -1)
    {
        ft_putstr("Closed\n");
        return (1);
    }
    return (0);
} 