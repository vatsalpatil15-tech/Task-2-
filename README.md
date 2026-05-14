# Login and Registration System in C++

## Description
This project is a simple Login and Registration System developed using C++.  

The system allows users to:
- Register with a username and password
- Store user credentials in files
- Login using stored credentials
- Validate usernames
- Display success and error messages

This project demonstrates basic file handling and authentication concepts in C++.

---

## Features
- User Registration
- User Login
- Username Validation
- Duplicate Username Checking
- File Handling
- Password Verification
- Console-Based Interface

---

## Technologies Used
- C++
- File Handling
- Functions
- Strings
- VS Code

---

## Project Working

### Registration
- User enters username and password
- System checks whether username already exists
- If not, credentials are stored in a text file

### Login
- User enters username and password
- System reads stored data from file
- Credentials are verified
- Appropriate message is displayed

---

## Example Registration

Enter Username: vatsal  
Enter Password: 1234  

Registration Successful!

---

## Example Login

Enter Username: vatsal  
Enter Password: 1234  

Login Successful!

---

## Example Wrong Password

Incorrect Password!

---

## File Structure

Each user has a separate file:

vatsal.txt  
rahul.txt  

Example file content:

vatsal  
1234

---

## Concepts Used
- Functions
- File Handling
- Input/Output
- Strings
- Conditional Statements
- Loops

---

## How to Run

### Compile
g++ task2.cpp -o task2

### Run
./task2

---

## Author
Vatsal Patil
