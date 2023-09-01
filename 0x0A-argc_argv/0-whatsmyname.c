#include &lt;stdio.h&gt;
#include &quot;main.h&quot;
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
        printf(&quot;%s\n&quot;, *argv);
        return (0);
}
