# Automatic-Stamp-Vending-Machine

This program is a simulator of automatic stamp vending machine.

# Here is the process of this machine-

Following is the specifications for simulating an automatic stamp vending machine

(a) It should dispense 25, 15 and 10 rupees worth of stamps.
(b) It should accept 50, 25, 10 and 5 rupees coins.
(c) It can accept not more than one coin for each transaction.
(d) If more than one coin of the same denomination is to be returned as change after dispensing the stamp, the machine cannot do it. Instead the coin should be returned and a ‘no change’ the signal turned on.
(e) The machine should dispense the stamp and the correct change and must indicate exceptional cases such as ‘insufficient amount tendered’, ‘no stamp available’, ‘no change available’, etc. 

The input to the program would be the Amount tendered and the stamp requested (only one stamp).
The output of the program should be whether the stamp is dispensed or not, the value of the stamp dispensed,
the denomination of the coins returned (if any) and no changed signal if no change is returned and 
no stamp if the stamp is not available. The program should execute for a set of data until the user wants to quit.
After each transaction, the available quantity (i.e. how many) of stamps and coins should be displayed.
Note: You have to first store the quantity (i.e. how many) of stamps and the coins that are available 
in the machine. You can do this by assigning constant values to each stamp and each coin is given in 
the question. Once a transaction is done make sure to decrease the quantity of the sold stamp and to 
increase the quantity of the respective coin (i.e. depending on the amount tendered) tendered and 
to decrease the quantity of the coin if that coin is returned as the change to the user. These updated 
quantities should be considered for the next transaction. Use a number of test data and test your 
program.
