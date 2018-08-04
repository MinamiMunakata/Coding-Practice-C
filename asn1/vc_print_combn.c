/* ************************************ */
/*                                      */
/* vc_print_combn.c                     */
/*                                      */
/* By: Bianca, Minami, Giada            */
/*                                      */
/* ************************************ */

#include <stdio.h>

void print_array_only_if_it_matches_the_condition(int temp[], int n){
    int flag;
    int i;
    int j;
    flag = 0;

    for (i = n - 1; i > 0; i--)
    {
        if (temp[i] > temp[i - 1])
        {
            flag++;
        }
    }
    if (flag == n - 1){
        for(j = 0; j < n; j++)
        {
            putchar(temp[j] + '0');
        }
        putchar(',');
        putchar(' ');
    }
}

int my_pow(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    a *= my_pow(a, b -1);
    return a;
}

void convert_num_to_array(int arr[], int num, int n){
    int i;
    for(i = 0; i < n; i++)
    {
        if (num / my_pow(10, n - i - 1) < 1)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = num / my_pow(10, n - i - 1);
            num -= arr[i] * my_pow(10, n - i - 1);
        }
    }
    print_array_only_if_it_matches_the_condition(arr, n);
}

int find_end_of_numbers_helper(int n){
    int result;
    result = 0;
    if (n == 0)
    {
        return 0;
    }
    result += my_pow(10, n) + find_end_of_numbers_helper(n - 1);
    return result;
}

int find_end_of_numbers_helper2(int n){
    int result;
    result = 0;
    if (n == 1)
    {
        return 1;
    }
    result += (my_pow(10, n - 1) * n) + find_end_of_numbers_helper2(n - 1);
    return result;
}

int find_end_of_numbers(int n){
    return find_end_of_numbers_helper(n) - find_end_of_numbers_helper2(n);
}

void vc_print_combn(int n) {
    int num;
    int start;
    int end;
    int arr[n];
    start = 1; /* never start with 0 */
    end = find_end_of_numbers(n); /* last number */

    for(num = start; num <= end; num++)
    {
        convert_num_to_array(arr, num, n);
    }
}


