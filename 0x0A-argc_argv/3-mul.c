#include &lt;stdio.h&gt;
#include &quot;main.h&quot;
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
        int i, d, n, len, f, digit;
        i = 0;

        d = 0;
        n = 0;
        len = 0;
        f = 0;
        digit = 0;
        while (s[len] != &#39;\0&#39;)
                len++;
        while (i &lt; len &amp;&amp; f == 0)
        {
                if (s[i] == &#39;-&#39;)
                        ++d;
                if (s[i] &gt;= &#39;0&#39; &amp;&amp; s[i] &lt;= &#39;9&#39;)
                {
                        digit = s[i] - &#39;0&#39;;
                        if (d % 2)
                                digit = -digit;
                        n = n * 10 + digit;
                        f = 1;
                        if (s[i + 1] &lt; &#39;0&#39; || s[i + 1] &gt; &#39;9&#39;)
                                break;
                        f = 0;
                }
                i++;
        }
        if (f == 0)
                return (0);
        return (n);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
        int result, num1, num2;
        if (argc &lt; 3 || argc &gt; 3)
        {
                printf(&quot;Error\n&quot;);
                return (1);
        }

        num1 = _atoi(argv[1]);
        num2 = _atoi(argv[2]);
        result = num1 * num2;
        printf(&quot;%d\n&quot;, result);
        return (0);
}
