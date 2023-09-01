#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;main.h&quot;
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
        int num, j, result;
        int coins[] = {25, 10, 5, 2, 1};
        if (argc != 2)
        {
                printf(&quot;Error\n&quot;);
                return (1);
        }

        num = atoi(argv[1]);
        result = 0;
        if (num &lt; 0)
        {
                printf(&quot;0\n&quot;);
                return (0);
        }
        for (j = 0; j &lt; 5 &amp;&amp; num &gt;= 0; j++)
        {
                while (num &gt;= coins[j])
                {
                        result++;
                        num -= coins[j];
                }
        }
        printf(&quot;%d\n&quot;, result);
        return (0);
}
