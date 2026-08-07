#include <iostream>
#include <string>
using namespace std;

// USER--------------
struct User
{
    string username;
    string password;
    User *next;
};
User *userHead = NULL;

// BOOK--------------
struct Book
{
    int id;
    string name;
    int quantity;
    int price;
    string author;
    Book *next;
};
Book *bookHead = NULL;

// EMPLOYEE------------
struct Employee
{
    int id;
    string name;
    int age;
    string gender;
    Employee *next;
};
Employee *employeeHead = NULL;

int totalIncome = 0;

// ---------------- SIGNUP FUNCTION----------------
void signup()
{
    User *newUser = new User;
    cout << "Enter Username: ";
    cin >> newUser->username;
    cout << "Enter Password: ";
    cin >> newUser->password;
    newUser->next = userHead;
    userHead = newUser;

    cout << "Signup Successful!!" << endl;
}

// ---------------- LOGIN ----------------
bool login()
{
    string user, pw;
    cout << "Enter Username: ";
    cin >> user;
    cout << "Enter Password: ";
    cin >> pw;
    User *temp = userHead;
    while (temp != NULL)
    {
        if (temp->username == user && temp->password == pw)
        {
            cout << "Login Successful!!" << endl;
            return true;
        }
        temp = temp->next;
    }

    cout << "Invalid Username or Password" << endl;
    return false;
}

// ---------------- ADD BOOK ----------------
void addBook()
{
    int id;
    cout << "Enter Book ID: ";
    cin >> id;
    Book *temp = bookHead;
    while (temp != NULL)
    {
        if (temp->id == id)
        { // CHECK UNIQUENESS OF BOOK ID
            cout << "Book ID already exists!" << endl;
            return;
        }
        temp = temp->next;
    }

    Book *newBook = new Book;
    newBook->id = id;
    cout << "Enter Book Name: ";
    cin >> newBook->name;
    cout << "Enter Quantity: ";
    cin >> newBook->quantity;
    cout << "Enter Price: ";
    cin >> newBook->price;
    cout << "Enter Author: ";
    cin >> newBook->author;
    newBook->next = bookHead;
    bookHead = newBook;
}

// ---------------- SHOW BOOKS ----------------
void showBooks()
{
    if (bookHead == NULL)
    {
        cout << "No Books Available" << endl;
        return;
    }
    Book *temp = bookHead;
    while (temp != NULL)
    {
        cout << "ID: " << temp->id << endl;
        cout << "Name: " << temp->name << endl;
        cout << "Quantity: " << temp->quantity << endl;
        cout << "Price: " << temp->price << endl;
        cout << "Author: " << temp->author << endl;
        cout << endl;
        temp = temp->next;
    }
}

// ---------------- SEARCH BOOK ----------------
void searchBook()
{
    int id;
    cout << "Enter Book ID: "; // BOOK ID IS UNIQUE
    cin >> id;
    Book *temp = bookHead;
    while (temp != NULL)
    {
        if (temp->id == id)
        {
            cout << "Book Found" << endl;
            cout << "Name: " << temp->name << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Book Not Found\n";
}

// ---------------- DELETE BOOK ----------------
void deleteBook()
{
    int id;
    cout << "Enter Book ID: ";
    cin >> id;

    Book *current = bookHead;
    Book *previous = NULL;

    while (current != NULL && current->id != id)
    {
        previous = current;
        current = current->next;
    }

    if (current == NULL)
    {
        cout << "Book Not Found\n";
        return;
    }

    if (previous == NULL)
    {
        bookHead = current->next;
    }
    else
    {
        previous->next = current->next;
    }

    delete current;

    cout << "Book Deleted Successfully\n";
}

// ---------------- ADD EMPLOYEE ----------------
void addEmployee()
{
    int id;
    cout << "Enter ID: ";
    cin >> id;

    Employee *temp = employeeHead;

    while (temp != NULL)
    {
        if (temp->id == id)
        {
            cout << "Employee ID already exists\n";
            return;
        }
        temp = temp->next;
    }

    Employee *newEmp = new Employee;

    newEmp->id = id;

    cout << "Enter Name: ";
    cin >> newEmp->name;

    cout << "Enter Age: ";
    cin >> newEmp->age;

    cout << "Enter Gender: ";
    cin >> newEmp->gender;

    newEmp->next = employeeHead;
    employeeHead = newEmp;

    cout << "Employee Added Successfully\n";
}

// ---------------- SHOW EMPLOYEES ----------------
void showEmployees()
{
    if (employeeHead == NULL)
    {
        cout << "No Employees\n";
        return;
    }

    Employee *temp = employeeHead;

    while (temp != NULL)
    {
        cout << "ID: " << temp->id << endl;
        cout << "Name: " << temp->name << endl;
        cout << "Age: " << temp->age << endl;
        cout << "Gender: " << temp->gender << endl;
        cout << "-------------------\n";
        temp = temp->next;
    }
}

// ---------------- DELETE EMPLOYEE ----------------
void deleteEmployee()
{
    int id;
    cout << "Enter Employee ID: ";
    cin >> id;

    Employee *current = employeeHead;
    Employee *previous = NULL;

    while (current != NULL && current->id != id)
    {
        previous = current;
        current = current->next;
    }

    if (current == NULL)
    {
        cout << "Employee Not Found\n";
        return;
    }

    if (previous == NULL)
    {
        employeeHead = current->next;
    }
    else
    {
        previous->next = current->next;
    }

    delete current;

    cout << "Employee Deleted Successfully\n";
}

// ---------------- SELL BOOK ----------------
void sellBook()
{
    int id, qty;

    cout << "Enter Book ID: ";
    cin >> id;

    Book *temp = bookHead;

    while (temp != NULL)
    {
        if (temp->id == id)
        {
            cout << "Enter Quantity: ";
            cin >> qty;

            if (qty > temp->quantity)
            {
                cout << "Not Enough Stock\n";
                return;
            }

            temp->quantity -= qty;
            totalIncome += qty * temp->price;

            cout << "Book Sold Successfully\n";
            return;
        }
        temp = temp->next;
    }

    cout << "Book Not Found\n";
}

// ---------------- SHOW INCOME ----------------
void showIncome()
{
    cout << "Total Income = " << totalIncome << endl;
}

// ---------------- MAIN ----------------
int main()
{
    int choice;

    while (true)
    {
        cout << "\n===== WELCOME TO BOOK BANK =====\n";
        cout << "1. Signup\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            signup();
        }
        else if (choice == 2)
        {
            if (login())
            {

                int ch;

                while (true)
                {
                    cout << "\n--- BOOK MENU ---\n";
                    cout << "1. Add Book\n";
                    cout << "2. Delete Book\n";
                    cout << "3. Search Book\n";
                    cout << "4. Show Books\n";
                    cout << "5. Add Employee\n";
                    cout << "6. Delete Employee\n";
                    cout << "7. Show Employees\n";
                    cout << "8. Sell Book\n";
                    cout << "9. Show Income\n";
                    cout << "10. Logout\n";
                    cout << "Enter Choice: ";
                    cin >> ch;

                    if (ch == 1)
                        addBook();
                    else if (ch == 2)
                        deleteBook();
                    else if (ch == 3)
                        searchBook();
                    else if (ch == 4)
                        showBooks();
                    else if (ch == 5)
                        addEmployee();
                    else if (ch == 6)
                        deleteEmployee();
                    else if (ch == 7)
                        showEmployees();
                    else if (ch == 8)
                        sellBook();
                    else if (ch == 9)
                        showIncome();
                    else if (ch == 10)
                    {
                        cout << "Logged Out Successfully\n";
                        break;
                    }
                    else
                    {
                        cout << "Invalid Choice\n";
                    }
                }
            }
        }
        else if (choice == 3)
        {
            cout << "Thank You!\n";
            break;
        }
        else
        {
            cout << "Invalid Choice\n";
        }
    }

    return 0;
}