Simple Banking System in C

A simple **console-based banking system written in C** that allows a user to securely access a bank account using a PIN and perform basic banking operations.

## 📌 Features

* 🔐 PIN-based authentication
* 💰 Check account balance
* 💸 Withdraw money
* 💵 Deposit money
* 🔄 Continue performing transactions
* 🚪 Exit the banking system

## 🛠️ Technologies Used

* **Language:** C
* **Compiler:** GCC / Any standard C compiler
* **Interface:** Command Line / Terminal

## ⚙️ How It Works

1. The program asks the user to enter a PIN.
2. The entered PIN is compared with the predefined PIN.
3. If the PIN is correct, the banking menu is displayed.
4. The user can select from the following options:

   * Check balance
   * Withdraw cash
   * Deposit cash
   * Quit
5. After completing an operation, the user can choose whether to continue.

## 💳 Initial Account Details

| Detail          |   Value |
| --------------- | ------: |
| PIN             |  `1234` |
| Initial Balance | `10000` |

> **Note:** These values are hardcoded into the program for demonstration purposes.

## 📋 Menu

```text
Welcome to the bank
Which service would you like to avail?

1. Check balance
2. Withdraw cash
3. Deposit cash
4. Quit
```

### Withdrawal

The program checks whether the requested withdrawal amount is greater than the available balance.

If:

```text
Withdrawal amount > Balance
```

the transaction is rejected with an **Insufficient balance** message.

Otherwise, the withdrawal amount is deducted from the account balance.

### Deposit

The entered deposit amount is added directly to the current account balance.

## ▶️ How to Run

### 1. Compile the program

Using GCC:

```bash
gcc banking.c -o banking
```

### 2. Run the program

On Linux/macOS:

```bash
./banking
```

On Windows:

```bash
banking.exe
```

## 📂 Project Structure

```text
banking-system/
│
├── banking.c
└── README.md
```

## ⚠️ Limitations

This project is intended for **learning and demonstration purposes** and is not a real banking application.

* PIN is hardcoded.
* Account data is not stored permanently.
* There is no database.
* There is no encryption or secure authentication.
* Only a single account is supported.
* Input validation is limited.

## 🚀 Possible Future Improvements

* Add multiple user accounts
* Store account information using files or a database
* Implement secure password/PIN handling
* Add transaction history
* Add PIN change functionality
* Add fund transfer functionality
* Improve input validation
* Add account number support

## 📚 Learning Objectives

This project demonstrates the use of fundamental C programming concepts including:

* Variables and data types
* `if-else` statements
* `switch-case`
* `do-while` loops
* User input using `scanf()`
* Arithmetic operations
* Character handling
* Basic program control flow

## 👨‍💻 Author

**Avik Jadhav**

A beginner C programming project created for learning and practicing fundamental programming concepts.
