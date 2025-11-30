#Latte Brew Ordering System

LatteBrew is a **simple command-line coffee shop ordering system** built in **C++**.  
It simulates a real coffee shop experience where users can view a menu, select items, check stock, compute totals, and get a receipt-like summary.

---

## **Features**

1. **Interactive Menu**  
   - Displays all available coffee items with name, price, and stock.
   - User can easily choose items by number.

2. **Inventory System**  
   - Tracks remaining stock for each coffee item.
   - Prevents users from ordering items that are out of stock.

3. **Ordering System**  
   - Accepts user input for coffee selection and quantity.
   - Validates input to ensure correctness.
   - Allows multiple items to be ordered before checkout.

4. **Subtotal and Total Calculation**  
   - Computes subtotal for each order.
   - Keeps running total for all ordered items.

5. **Input Validation**  
   - Checks if user enters valid menu numbers.
   - Ensures quantity is positive and does not exceed stock.

6. **Loop for Multiple Orders**  
   - Asks the user if they want to order another item.
   - Repeats until the user decides to finish.

7. **Order Summary**  
   - Displays the total amount due.
   - Provides a thank-you message.

---

## **How the Program Works**

1. Program displays the menu with all coffee items.  
2. User selects an item by entering its number.  
3. Program checks if the selected item exists.  
4. User enters the desired quantity.  
5. Program verifies if the stock is sufficient.  
6. Subtotal is calculated and added to the total.  
7. Stock is updated.  
8. User can choose to order another item.  
9. Once finished, the program prints the **total amount due**.

---

## **Code Structure**

- **Struct `Coffee`**: Stores information about each coffee item (name, price, stock).  
- **Array `menu`**: Stores all coffee items in the menu.  
- **Variables**:  
  - `choice` — menu item selected  
  - `qty` — quantity ordered  
  - `total` — running total of all orders  
- **Loops**: `while` loop allows multiple orders.  
- **Conditionals (`if` statements)**:  
  - Check valid menu selection.  
  - Check valid quantity.  
  - Check available stock.  
- **Output**: Displays subtotal, total, and order summary.

---

## **Why I Used These Techniques**

- **Structs**: Organize coffee information in one place.  
- **Arrays**: Store multiple coffee items in a simple list.  
- **Loops**: Allow repeated ordering without rewriting code.  
- **Conditionals**: Validate user input and prevent errors.  
- **Basic Math**: Compute subtotal and total for the order.  

This approach makes the program **simple, organized, and easy to read** for beginners.

---

## **How to Run**

1. Open a C++ compiler (e.g., Code::Blocks, Visual Studio, or g++).  
2. Compile the program:

```bash
g++ main.cpp -o lattebrew

