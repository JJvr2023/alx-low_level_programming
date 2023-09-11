#include &quot;hash_tables.h&quot;
/**
* hash_djb2 - function to compute hash of &#39;str&#39; using djb2
* @str: string to hash
*
* Return: value of 64 bits hash
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;
hash = 5381;

while ((c = *str++))
{
hash = ((hash &lt;&lt; 5) + hash) + c; /* hash * 33 + c */
}
return (hash);
}
