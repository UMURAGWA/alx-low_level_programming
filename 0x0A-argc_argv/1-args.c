#include &lt;stdio.h&gt;
#include &quot;main.h&quot;
/**
 * main - print the number of arguments passed to the program

 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
        printf(&quot;%d\n&quot;, argc - 1);
        return (0);
}
