#include <stdio.h>
#include <stdlib.h>

void input_arr(int num[]);
void print_arr(int num[]);
void append_arr(int num[]);
void insert_arr(int num[]);
void delete_arr(int num[]);
void search_arr(int num[]);
void delete_by_value_arr(int num[]);
int count, MAX = 100;

int main()
{
    int number[100];
    int choice;
    printf("\t\t\t ==== MENU ==== \n");
    printf("\t\t Press '1' to give Input to an Array\n");
    printf("\t\t Press '2' for Printing an Array\n");
    printf("\t\t Press '3' for appending a value into an Array\n");
    printf("\t\t Press '4' for inserting a value into your desired position\n");
    printf("\t\t Press '5' for deleting a value from an array(By Index)\n");
    printf("\t\t Press '6' to search a value in an array\n");
    printf("\t\t Press '7' for deleting a value from an array(Value of your choice)\n");
    printf("\t\t Press '8' to EXIT\n");

    while (1)
    {
        printf("\nEnter your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nInput Array\n");
            printf("\nWhen you're done with giving values just type -1 and hit Enter...\n");
            input_arr(number);
            break;

        case 2:
            printf("\nPrint an Array\n");
            print_arr(number);
            break;

        case 3:
            printf("\nappend a value into an Array\n");
            append_arr(number);
            break;

        case 4:
            printf("\nInsert Value at any Index\n");
            insert_arr(number);
            break;

        case 5:
            printf("\nDelete by Index\n");
            delete_arr(number);
            break;

        case 6:
            printf("\nSearch by Value\n");
            search_arr(number);
            break;

        case 7:
            printf("\nDelete by Value\n");
            delete_by_value_arr(number);
            break;

        case 8:
            exit(0);

        default:
            printf("Invalid Input...");
        }
    }
    return 0;
}

void input_arr(int num[])
{
    for (int i = 0; i < MAX; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &num[i]);

        if (num[i] == -1)
        {
            break;
        }

        count++;
    }
}

void print_arr(int num[])
{
    for (int i = 0; i < count; i++)
    {
        printf("Value %d is %d\n", i, num[i]);
    }
}

void append_arr(int num[])
{
    if (count < MAX)
    {
        printf("Enter the value you want to append: ");
        scanf("%d", &num[count]);
        count++;
    }
    else
    {
        printf("Array is already filled...");
    }
}

void insert_arr(int num[])
{
    int value, index;
    if (count < MAX)
    {
        printf("Enter the Value you want to insert: ");
        scanf("%d", &value);
        printf("Enter the index at which you want this value to be inserted: ");
        scanf("%d", &index);

        for (int i = count - 1; i >= index; i--)
        {
            num[i + 1] = num[i];
        }
        num[index] = value;
        count++;
    }
    else
    {
        printf("Array is already filled...");
    }
}

void delete_arr(int num[])
{
    int index, i;
    if (count > 0)
    {
        printf("Enter the Index you want to delete: ");
        scanf("%d", &index);

        if (index < count)
        {
            for (i = index; i < count; i++)
            {
                num[i] = num[i + 1];
            }
            count--;
            printf("Element successfully deleted...");
        }
        else
        {
            printf("Index out of bound");
        }
    }
    else
    {
        printf("Unable to delete(Empty Array)...");
    }
}

void search_arr(int num[])
{
    int numToSearch, i;
    if (count > 0)
    {
        printf("Enter Number you want to search: ");
        scanf("%d", &numToSearch);

        for (i = 0; i < count; i++)
        {
            if (num[i] == numToSearch)
            {
                printf("%d found at index %d", numToSearch, i);
            }
        }
    }
    else
    {
        printf("Empty Array...");
    }
}

void delete_by_value_arr(int num[])
{
    int value, i;
    if (count > 0)
    {
        printf("Enter the Value you want to delete: ");
        scanf("%d", &value);

        for (i = 0; i < count; i++)
        {
            if (num[i] == value)
            {
                num[i] = num[i + 1];
            }
        }
        count--;
        printf("Value successfully deleted...");
    }
    else
    {
        printf("Unable to delete(Empty Array)...");
    }
}
