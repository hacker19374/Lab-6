- **P6-1** Write a program that reads an integer _n_ , with _n_ ≥ 3, indicating the length of a side, and displays, using asterisks, a filled square and a hollow square placed next to each other with one space between them. **For** loops must be used to solve the problem. For hints please refer to Table 3 in Section 4.8 of your textbook. 

Example run (with user input indicated with **_bold italics_** ): 

```
Enter number of asterisks per side: 5
```

```
***** *****
***** *   *
***** *   *
***** *   *
***** *****
```

**Plan the rows before you write them.** Only three kinds of row appear: the first, the middle ones, and the last. On your checksheet, describe each kind in terms of _n_ — how many asterisks and spaces, in what order — before you write any code. 

**Predict before you run.** Sketch on your checksheet what your program will print for _n_ = 3 before you run it. At your demo, your TA picks two values of _n_ . 

**The example is hiding something.** For _n_ = 5, each middle row of the hollow square has three spaces inside it. A program that always prints three spaces there draws the example perfectly and is wrong for every other _n_ . That is why your TA chooses the values. 

- **P6-2** Write a program that reads an integer _n_ , with _n_ ≥ 2, and displays, using asterisks, a filled diamond of the given side length. **For** loops must be used to solve the problem. For hints please refer to Table 3 in Section 4.8 of your textbook. 

Example run (with user input indicated with **_bold italics_** ): 

```
Enter number of asterisks per side: 4
   *
  ***
 *****
*******
 *****
  ***
   *
```

**Plan the rows before you write them.** On your checksheet, count the leading spaces and the asterisks on every row of the example, then write each count as an expression in _n_ and the row number — once for the top half and once for the bottom half. Tell your duck which loop prints the widest row. 

**Predict before you run.** Sketch on your checksheet what your program will print for _n_ = 2, the smallest diamond allowed, before you run it. 

- **P6-3** Write a program that reads a set of floating-point data values, using an appropriate sentinel to indicate the end of the data set. When all values have been read, print the count of the values, the average, and the standard deviation. The average of a data set { _x_ 1, …, _xn_ } is: 



where _n_ is the number of input values. The standard deviation is: 



You can compute this quantity by keeping track of the count, the sum, and the sum of squares as you process the input values. Information on performing square roots can be found in Section 2.2.5 of your textbook. 

Example runs (with user input indicated with **_bold italics_** ): 

**Run #1:** 

```
Enter numbers - Q to quit: 1 2 3 4 5 q
n = 5, average = 3, standard deviation = 1.58114
```

## **Run #2:** 

```
Enter numbers - Q to quit: q
No data to process - exiting...
```

**Predict before you run.** Your checksheet lists four runs. Predict the count, the average, and the standard deviation for all four before you run any of them. 

**One run you cannot get wrong.** Enter a single number, then Q. The problem does not say what should happen with only one value, so there is no correct output and nothing you are required to fix. Run it anyway and record what your program printed. In your journal: which part of the formula produced that? 

**And one that looks like it can’t go wrong.** Enter 0.1 five times, then Q. Before you run it, decide what the standard deviation of five identical values should be. Then run it, and answer the question on your checksheet. 

**Once you have completed this lab, please go over and complete the Lab 06 Code Review assignment.** 

