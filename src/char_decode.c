#include <stdio.h>
int convert_number(int a);
int convert_letter(char c);

int main ()
{
    int option;
    if(scanf("%x", &option) == 1 && getchar() == '\n')
    {
        if (option == 0)
        {
            char ch;
            do 
            {
            if(scanf("%c", &ch) == 1)
            {
                printf("%x ", convert_letter(ch));
                
            }
            }
            while (getchar() != '\n');
        }
        
        else if (option == 1)
        {
            int number;
            do 
            {
                if(scanf("%x",&number) == 1)
                printf("%c ", convert_number(number));
            }
            while (getchar() != '\n');
            
        }
        else 
        {
            printf("n/a");
        }
    } 
    else  
    {
        printf("n/a");
    }
    return 0;
}

int convert_number(int a)
{
    char converted = (char) a;
    return converted;
}

int convert_letter(char c)
{
    int converted_2 = (int) c;
    return converted_2;
} 
/*int main()
{
    int option;
    scanf("%d", &option);
    if (option == 0)
    {
        char c;
        scanf("%c", &c);
        //call the function
    }
    else if (option == 1)
    {
        int n;
        char s;
        if (scanf("%d%c", &n, &s) == 2 || s != ' ') // c == a,b,c,d,a... OR c == ' ' ( 6A || 6 )
        {
            //call the function
        } 
    }

    return 0;
}

int convert_symbols(char a)
{
    int decimal = (int) a;
    int remainder = decimal / 16; 
    int number = decimal % 16;
}

int convert_number(int d, char sym)
{
    char symbol = (char) d;
    if ()
    // 2 symbols anyways 

}
// the end of the string check for enter 
// int ch; 
// if (scanf("%d%c", &n, &s) == 2 && getchar == ' ' || getchar == '\n' && ch != EOF)
// */


        
/*if (option == 0)
{
    while (getchar()!= '\n')
    {
        char ch;
        if(scanf("%c", &ch) == 1 && getchar() == ' ')
        {
            printf("%x ", convert_letter(ch));
        }
        else 
        {
            printf('n/a');
        }

    }
}*/