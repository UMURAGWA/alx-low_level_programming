#include &lt;stdio.h&gt;
#include &quot;main.h&quot;
/**
 * _putchar - writes the character c to stdout
 * @c:Ther character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &amp;c, 1));
}
