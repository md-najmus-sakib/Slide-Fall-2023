#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char name[40];
    char id[20];
    char email[40];
    char phone[20];
    char blood[10];
    struct Node *next;
};

struct Node *head = NULL;

void insert(char name[], char id[], char email[], char phone[], char blood[])
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    strcpy(new->name, name);
    strcpy(new->id, id);
    strcpy(new->email, email);
    strcpy(new->phone, phone);
    strcpy(new->blood, blood);
    new->next = NULL;

    if (head == NULL)
    {
        head = new;
    }
    else
    {
        struct Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new;
    }
}

// Search By Name
void findByName(char name[])
{
    int a = 0;
    struct Node *current = head;
    printf("-----------------------------------------\n");
    while (current != NULL)
    {
        if (strcmp(current->name, name) == 0)
        {
            printf("Student Information: \n");
            printf("Name  : %s\n", current->name);
            printf("ID    : %s\n", current->id);
            printf("Email : %s\n", current->email);
            printf("Phone : %s\n", current->phone);
            printf("Blood : %s\n", current->blood);
            a++;
        }
        current = current->next;
    }
    if (a == 0)
    {
        printf("Not Found. Try Again\n");
    }
    printf("-----------------------------------------\n\n");
}

// Search By ID
void findByID(char id[])
{
    int a = 0;
    struct Node *current = head;
    printf("-----------------------------------------\n");
    while (current != NULL)
    {
        if (strcmp(current->id, id) == 0)
        {
            printf("Student Information: \n");
            printf("Name  : %s\n", current->name);
            printf("ID    : %s\n", current->id);
            printf("Email : %s\n", current->email);
            printf("Phone : %s\n", current->phone);
            printf("Blood : %s\n", current->blood);
            a++;
        }
        current = current->next;
    }
    if (a == 0)
    {
        printf("Not Found. Try Again\n");
    }
    printf("-----------------------------------------\n\n");
}

// Search By Email
void findByEmail(char email[])
{
    int a = 0;
    struct Node *current = head;
    printf("-----------------------------------------\n");
    while (current != NULL)
    {
        if (strcmp(current->email, email) == 0)
        {
            printf("Student Information: \n");
            printf("Name  : %s\n", current->name);
            printf("ID    : %s\n", current->id);
            printf("Email : %s\n", current->email);
            printf("Phone : %s\n", current->phone);
            printf("Blood : %s\n", current->blood);
            a++;
        }
        current = current->next;
    }
    if (a == 0)
    {
        printf("Not Found. Try Again\n");
    }
    printf("-----------------------------------------\n\n");
}

// Search By Phone No
void findByPhone(char phone[])
{
    int a = 0;
    struct Node *current = head;
    printf("-----------------------------------------\n");
    while (current != NULL)
    {
        if (strcmp(current->phone, phone) == 0)
        {
            printf("Student Information: \n");
            printf("Name  : %s\n", current->name);
            printf("ID    : %s\n", current->id);
            printf("Email : %s\n", current->email);
            printf("Phone : %s\n", current->phone);
            printf("Blood : %s\n", current->blood);
            a++;
        }
        current = current->next;
    }
    if (a == 0)
    {
        printf("Not Found. Try Again\n");
    }
    printf("-----------------------------------------\n\n");
}

// Search By Blood Group
void findByBlood(char blood[])
{
    int a = 0;
    struct Node *current = head;
    printf("\n%s Blood Group Student List: \n", blood);
    printf("-----------------------------------------\n");
    while (current != NULL)
    {
        if (strcmp(current->blood, blood) == 0)
        {
            printf("Student Information: \n");
            printf("Name  : %s\n", current->name);
            printf("ID    : %s\n", current->id);
            printf("Email : %s\n", current->email);
            printf("Phone : %s\n", current->phone);
            printf("Blood : %s\n", current->blood);
            printf("\n");
            a++;
        }
        current = current->next;
    }
    if (a == 0)
    {
        printf("Not Found. Try Again\n");
    }
    printf("-----------------------------------------\n\n");
}

int main()
{
    insert("Nasima Akter", "221-15-4755", "nasima15-4755@diu.edu.bd", "01234567890", "A+");
    insert("Anuradha Das Mitu", "221-15-4792", "mitu4792@diu.edu.bd", "01234567891", "B-");
    insert("Rakib Hosen", "221-15-4794", "rakib15-4794@diu.edu.bd", "01234567892", "O+");
    insert("Salman Ahmed Sajib", "221-15-4802", "sajib15-4802@diu.edu.bd", "01234567893", "AB-");
    insert("Md Mirajul Rahman", "221-15-4893", "mirajul15-4893@diu.edu.bd", "01234567894", "A-");
    insert("Tanjina Ahmed Tuly", "221-15-4902", "tanjina15-4902@diu.edu.bd", "01234567895", "O-");
    insert("Tanjid Ahammed Shafin", "221-15-4903", "shafin15-4903@diu.edu.bd", "01234567896", "AB+");
    insert("Sabbir Ahmed", "221-15-4916", "sabbir15-4916@diu.edu.bd", "01234567897", "B+");
    insert("Rumaia Khan Esha", "221-15-4918", "esha15-4918@diu.edu.bd", "01234567898", "A+");
    insert("Jannatul Ferdous Riva", "221-15-4928", "riva15-4928@diu.edu.bd", "01234567899", "O+");
    insert("Sohana Sultana Shanta", "221-15-4953", "shanta15-4953@diu.edu.bd", "01234567810", "AB-");
    insert("Jannatul Ferdaus", "221-15-4982", "ferdaus15-4982@diu.edu.bd", "01234567811", "A+");
    insert("Sumaiya binte mizan", "221-15-5077", "mizan15-5077@diu.edu.bd", "01234567812", "B+");
    insert("Lamia Akter Liza", "221-15-5100", "liza15-5100@diu.edu.bd", "01234567813", "O-");
    insert("Afia Binte Aziz Tonima", "221-15-5115", "tonima15-5115@diu.edu.bd", "01234567814", "AB-");
    insert("Md. Najmus Sakib", "221-15-5127", "sakib15-5127@diu.edu.bd", "01728557495", "O+");
    insert("Anika Afrin Moumeta", "221-15-5142", "moumeta15-5142@diu.edu.bd", "01234567816", "B-");
    insert("Montakir Emtiaz Ahmed", "221-15-5151", "rafid15-5151@diu.edu.bd", "01234567817", "A+");
    insert("Md. Jarif Akter", "221-15-5156", "jarif15-5156@diu.edu.bd", "01234567818", "B+");
    insert("Jamil Hasan", "221-15-5222", "jamil15-5222@diu.edu.bd", "01234567819", "O-");
    insert("Eiamin Hasan Shanto", "221-15-5251", "shanto15-5251@diu.edu.bd", "01234567820", "A+");
    insert("Atique Enam", "221-15-5292", "atique15-5292@diu.edu.bd", "01234567821", "AB+");
    insert("MD. Nehal Ahmed", "221-15-5300", "nehal15-5300@diu.edu.bd", "01234567822", "O+");
    insert("Iftekharul Islam", "221-15-5308", "iftekharul15-5308@diu.edu.bd", "01234567823", "B-");
    insert("Jahangir Alam Tamal", "221-15-5322", "tamal15-5322@diu.edu.bd", "01234567824", "A-");
    insert("MD. Nahid Islam", "221-15-5334", "nahid15-5334@diu.edu.bd", "01234567825", "AB+");
    insert("Rinvi Jaman Riti", "221-15-5371", "riti15-5371@diu.edu.bd", "01234567826", "B+");
    insert("Atia Sultana Mim", "221-15-5375", "mim15-5375@diu.edu.bd", "01234567827", "B+");
    insert("Pulak Deb Nath", "221-15-5376", "pulak15-5376@diu.edu.bd", "01234567828", "AB-");
    insert("MD. Sirajes Salakin", "221-15-5390", "salakin15-5390@diu.edu.bd", "01234567829", "A+");
    insert("Hossain Mohammad Shuvo", "221-15-5428", "shuvo15-5428@diu.edu.bd", "01234567830", "B-");
    insert("Mahfuj Ahmed", "221-15-5448", "mahfuj15-5448@diu.edu.bd", "01234567831", "O+");
    insert("Md. Abir Hasan", "221-15-5459", "abir15-5459@diu.edu.bd", "01234567832", "AB-");
    insert("Md: Uodoy Hossan Rafi", "221-15-5494", "rafi15-5494@diu.edu.bd", "01234567833", "A-");
    insert("K. M. Arafat Islam", "221-15-5498", "arafat15-5498@diu.edu.bd", "01234567834", "B+");
    insert("Adnan Morshedm", "221-15-5540", "adnan15-5540@diu.edu.bd", "01234567835", "A+");
    insert("Md. Nazmul Hossain Emon", "221-15-5557", "emon15-5557@diu.edu.bd", "01234567836", "O-");
    insert("Most.Azmira Shekh", "221-15-5569", "azmira15-5569@diu.edu.bd", "01234567837", "AB+");
    insert("Prapti Saha Antara", "221-15-5588", "prapti15-5588@diu.edu.bd", "01234567838", "A+");
    insert("MD Rofiqul Bari", "221-15-5598", "rofiqu115-5598@diu.edu.bd", "01234567839", "B-");
    insert("Foujia Afrose Tanha", "221-15-5609", "tanha15-5609@diu.edu.bd", "01234567840", "O+");
    insert("Kouser Ahamed", "221-15-5643", "kouser15-5643@diu.edu.bd", "01234567841", "AB-");
    insert("Md Asif Shahriar Arpon", "221-15-5655", "arpon15-5655@diu.edu.bd", "01234567842", "A+");
    insert("Mst. Happy Akther", "221-15-5671", "happy15-5671@diu.edu.bd", "01234567843", "B+");
    insert("Abdullah Al Noman", "221-15-5713", "noman15-5713@diu.edu.bd", "01234567844", "O-");
    insert("Mahamudul Hasan", "221-15-5740", "mahamudu15-l5740@diu.edu.bd", "01234567845", "A-");
    insert("Taifur Rahman", "221-15-5750", "taifur15-5750@diu.edu.bd", "01234567846", "AB+");
    insert("Sazzad Mahmud Joy", "221-15-5777", "joy15-5777@diu.edu.bd", "01234567847", "B+");
    insert("Shovan Samanta Turzo", "221-15-5785", "turzo15-5785@diu.edu.bd", "01234567848", "A+");
    insert("Kazi Sameer Bin Hasan", "221-15-5786", "sameer15-5786@diu.edu.bd", "01234567849", "O+");
    insert("Siam Akter Mim", "221-15-5924", "siam15-5924@diu.edu.bd", "01234567850", "AB-");

    char n[50];
    int x;

    while (1)
    {
        printf("1. Search By Name.\n");
        printf("2. Search By ID.\n");
        printf("3. Search By Email.\n");
        printf("4. Search By Phone No.\n");
        printf("5. Search By Blood Group.\n");
        printf("6. Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &x);
        getchar();

        if (x == 1)
        {
            printf("Enter Name: ");
            fgets(n, sizeof(n), stdin);
            n[strcspn(n, "\n")] = '\0';
            findByName(n);
        }
        else if (x == 2)
        {
            printf("Enter ID: ");
            fgets(n, sizeof(n), stdin);
            n[strcspn(n, "\n")] = '\0';
            findByID(n);
        }
        else if (x == 3)
        {
            printf("Enter Email: ");
            fgets(n, sizeof(n), stdin);
            n[strcspn(n, "\n")] = '\0';
            findByEmail(n);
        }
        else if (x == 4)
        {
            printf("Enter Phone No: ");
            fgets(n, sizeof(n), stdin);
            n[strcspn(n, "\n")] = '\0';
            findByPhone(n);
        }
        else if (x == 5)
        {
            printf("Enter Blood Group: ");
            fgets(n, sizeof(n), stdin);
            n[strcspn(n, "\n")] = '\0';
            findByBlood(n);
        }
        else if (x == 6)
        {
            break;
        }
        else
        {
            printf("You Enter wrong choice. Try Again\n");
        }
    }

    return 0;
}
