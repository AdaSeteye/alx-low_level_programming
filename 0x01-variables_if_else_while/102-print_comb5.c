#include <stdio.h>
/**
 *  * main - main block
 *   * Description: it computes what is required
 *    * Return: 0
 *     */
int main(void) 
{
	    int i, j, k, l;
	        for (i=0; i<10; i++)
			    {
				            for (j = 0; j < 10; j++)
						            {
								               for (k = 0; k < 10; k++)
										                  {
													                 for (l = 0; l < 10; l++)
																                {
																			                    putchar(i + '0');
																					                        putchar(j + '0');
																								                    putchar(' ');
																										                        putchar(k + '0');
																													                    putchar(l + '0');
																															                        putchar(',');
																																		                    putchar(' ');
																																				               }
															            
															         }
									           }
			    }
		    return 0;
}
