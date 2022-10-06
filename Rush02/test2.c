# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

#define BUF_SIZE 20

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

int main()
{
    int fd;
    int ret;
    char buf[BUF_SIZE + 1];
    char c;



    fd = open("numbers.dict", O_RDONLY); 
    
    if (fd == -1) //si dictionnaire pas fonctionnel
    {
        ft_putstr("Failled\n");
        return (1);
    }
    ret = read(fd, buf, 9);
    while (read(fd, &c, 1)) // imprime la bonne ligne
    {
        if(c == '\n')
        {
            break;
        }
        ft_putchar(c);
        
    }
    buf[ret] = '\0';
    ft_putnbr(ret);

    if (close(fd) == -1)// ferme le dictionnaire
    {
        ft_putstr("Closed\n");
        return (1);
    }
    return (0);
}