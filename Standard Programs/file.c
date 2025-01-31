// #include <stdio.h>
// #include <stdlib.h>

// void print_file(const char *filename)
// {
//     FILE *file = fopen(filename, "r");
//     if (file == NULL)
//     {
//         printf("Could not open file %s for reading.\n", filename);
//         return;
//     }

//     char ch;
//     printf("Contents of %s:\n", filename);
//     while ((ch = fgetc(file)) != EOF)
//     {
//         putchar(ch);
//     }
//     fclose(file);
// }

// void delete_file_contents(const char *filename)
// {
//     FILE *file = fopen(filename, "w");
//     if (file == NULL)
//     {
//         printf("Could not open file %s for deleting contents.\n", filename);
//         return;
//     }

//     // Truncate the file by opening it in write mode
//     fclose(file);
//     printf("Contents of %s deleted successfully.\n", filename);
// }

// void copy_file(const char *source_file, const char *destination_file)
// {
//     FILE *src = fopen(source_file, "r");
//     if (src == NULL)
//     {
//         printf("Could not open source file %s for reading.\n", source_file);
//         return;
//     }

//     FILE *dest = fopen(destination_file, "w");
//     if (dest == NULL)
//     {
//         printf("Could not open destination file %s for writing.\n", destination_file);
//         fclose(src);
//         return;
//     }

//     char ch;
//     while ((ch = fgetc(src)) != EOF)
//     {
//         fputc(ch, dest);
//     }

//     fclose(src);
//     fclose(dest);
//     printf("Contents copied from %s to %s successfully.\n", source_file, destination_file);
// }

// int main()
// {
//     char filename1[100], filename2[100];
//     int choice;

//     printf("Select an option:\n");
//     printf("1. Print file contents\n");
//     printf("2. Delete file contents\n");
//     printf("3. Copy contents from one file to another\n");
//     printf("Enter your choice: ");
//     scanf("%d", &choice);
//     getchar(); // to consume the newline after choice input

//     switch (choice)
//     {
//     case 1:
//         printf("Enter the file name to print: ");
//         scanf("%s", filename1);
//         print_file(filename1);
//         break;

//     case 2:
//         printf("Enter the file name to delete contents: ");
//         scanf("%s", filename1);
//         delete_file_contents(filename1);
//         break;

//     case 3:
//         printf("Enter the source file name: ");
//         scanf("%s", filename1);
//         printf("Enter the destination file name: ");
//         scanf("%s", filename2);
//         copy_file(filename1, filename2);
//         break;

//     default:
//         printf("Invalid choice.\n");
//     }

//     return 0;
// }

// file merge

#include <stdio.h>
#include <stdlib.h>

void merge_files(const char *file1, const char *file2, const char *destination_file)
{
    FILE *src1 = fopen(file1, "r");
    FILE *src2 = fopen(file2, "r");
    FILE *dest = fopen(destination_file, "w");

    if (src1 == NULL || src2 == NULL || dest == NULL)
    {
        printf("Error opening one or more files.\n");
        if (src1)
            fclose(src1);
        if (src2)
            fclose(src2);
        if (dest)
            fclose(dest);
        return;
    }

    // Copy contents of the first file to the destination file
    char ch;
    while ((ch = fgetc(src1)) != EOF)
    {
        fputc(ch, dest);
    }

    // Copy contents of the second file to the destination file
    while ((ch = fgetc(src2)) != EOF)
    {
        fputc(ch, dest);
    }

    printf("Contents of %s and %s merged into %s successfully.\n", file1, file2, destination_file);

    fclose(src1);
    fclose(src2);
    fclose(dest);
}

void print_file(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Could not open file %s for reading.\n", filename);
        return;
    }

    char ch;
    printf("Contents of %s:\n", filename);
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }
    fclose(file);
}

int main()
{
    char file1[100], file2[100], destination_file[100];

    // Get file names from the user
    printf("Enter the name of the first file: ");
    scanf("%s", file1);
    print_file(file1);

    printf("\nEnter the name of the second file: ");
    scanf("%s", file2);
    print_file(file2);

    printf("\nEnter the name of the destination file: ");
    scanf("%s", destination_file);
    printf("\n");

    // Merge the files
    merge_files(file1, file2, destination_file);
    print_file(destination_file);
    return 0;
}
