# Hospital Patient Queue System (C++)

This project is a **simple Hospital Patient Queue Management System** implemented using **C++**, **STL Queue**, and **Object-Oriented Programming (OOP)** concepts.  
It simulates how patients are served in a hospital on a **First Come, First Served (FCFS)** basis.

---

## 🎯 Objective

The main objectives of this project are:
- To understand the **Queue data structure**
- To apply **OOP concepts** in real-world scenarios
- To simulate patient handling in a hospital environment
- To practice STL containers in C++

---

## 🧠 Concepts Used

- Queue Data Structure (STL `queue`)
- Object-Oriented Programming (OOP)
- Classes and Objects
- Constructors
- FIFO (First In First Out) principle
- Input/Output operations (`cout`)

---

## 🧾 Program Description

- The **Patient** class stores patient details (name).
- The **HospitalQueue** class manages patients using a queue.
- Patients are added to the queue using `addPatient()`.
- Patients are served in the order they arrive using `servePatient()`.
- If no patients are waiting, an appropriate message is displayed.

---

## 🧩 Class Structure

### Class: `Patient`
**Data Member**
- `string name`

**Constructor**
- Initializes patient name

---

### Class: `HospitalQueue`
**Data Member**
- `queue<Patient> q`

**Member Functions**
- `void addPatient(string name)`
- `void servePatient()`

---

## ▶️ Sample Output

