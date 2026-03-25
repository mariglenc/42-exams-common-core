
ft_putnbr(int nr){
    if(nr>=10){
        ft_putnbr(nr/10);
    }
    char c = nr % 10 + '0';
    write(1,&c,1);
}