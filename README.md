# push_swap

This repository is about "push_swap": a computer science project in C language that challenges to create an algorithm using the stacks data structures. The objective is to sort a randomly ordered list of integers, positive and negative, numbers in two stacks (Stack A and Stack B) using a limited set of predefined actions, such as swapping elements, rotating the stacks, and pushing elements between the stacks. The main goal of the project is to sort the numbers in Stack A with the fewest possible actions. Students must devise efficient sorting strategies to accomplish this within the project's action limit.

Here's my roadmap for "push_swap" project, broken down into a 20-days schedule based on my experience:

## Day 1 - Day 4: Understanding the Project and Problem**

I read the subject and I asked some of my peers for help. I spend the first few days fully understanding the requirements and constraints of the "push_swap" project. I made sure I'm comfortable with the allowed actions: sa, sb, ss, ra, rb, rr, rra, rrb, rrr, pa, and pb. I reviewed the provided strategies for handling 3 random numbers and 5 random numbers, as they serve as the foundation for larger cases. After that I searched some infos on the web finding those resources:
- [Push Swap Medium Article](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)
- [Push Swap YouTube Video 1](https://www.youtube.com/watch?v=OaG81sDEpVk)
- [Push Swap YouTube Video 2](https://www.youtube.com/watch?v=7h1s2SojIRw)
- [Push Swap YouTube Video 3](https://www.youtube.com/watch?v=XE4VP_8Y0BU)
- [Push Swap YouTube Video 4](https://www.youtube.com/watch?v=-qOVVRIZzao)
- [Push Swap Visualizer](https://push_swap.simple.ink/)
- [Push Swap Medium Article by Jamie Dawson](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)
- [Push Swap YouTube Video 5](https://www.youtube.com/watch?v=XE4VP_8Y0BU)
- [Push Swap YouTube Video 6](https://www.youtube.com/watch?v=JPyuH4qXLZ0)
- [QuickSort - The Best Sorting Algorithm](https://medium.com/human-in-a-machine-world/quicksort-the-best-sorting-algorithm-6ab461b5a9d0)
- [Longest Increasing Subsequence - Wikipedia](https://en.wikipedia.org/wiki/Longest_increasing_subsequence#:~:text=In%20computer%20science%2C%20the%20longest,not%20necessarily%20contiguous%2C%20or%20unique)
- [Initializing a Struct in C](https://stackoverflow.com/questions/330793/how-to-initialize-a-struct-in-accordance-with-c-programming-language-standards)
- [Exit() in C Standard Library](https://koor.fr/C/cstdlib/exit.wp)
- [GCC Compiler Options](https://www.rapidtables.com/code/linux/gcc/gcc-g.html)
- [Quick Sort Using Recursion](https://www.mycareerwise.com/programming/category/sorting/quick-sort-using-recursion)
- [Worst, Average, and Best Case Analysis of Algorithms](https://www.geeksforgeeks.org/worst-average-and-best-case-analysis-of-algorithms/?ref=lbp)
- [Introduction to Algorithms - GeeksforGeeks](https://www.geeksforgeeks.org/introduction-to-algorithms/?ref=lbp)
- [Analysis of Algorithms - Wikipedia](https://en.wikipedia.org/wiki/Analysis_of_algorithms)
- [Stack Sorting PDF](https://liacs.leidenuniv.nl/~rijnjnvan/ds2013/assets/opdrachten/opdracht1-stacksorting.pdf)
- [Sorting in C](https://www.educba.com/sorting-in-c/)
- [Quick Sort - GeeksforGeeks](https://www.geeksforgeeks.org/quick-sort/)
- [C Programming Structures](https://www.programiz.com/c-programming/c-structures)
- [Big O Notation Explanation](https://www.jesuisundev.com/comprendre-la-notation-big-o-en-7-minutes/#:~:text=C%27est%20quoi%20la%20notation,l%27efficacité%20de%20ton%20code.)
- [Why Big O Notation Matters](https://www.freecodecamp.org/news/big-o-notation-why-it-matters-and-why-it-doesnt-1674cfa8a23c/)
- [Quick Sort Algorithm Tutorial](https://www.tutorialspoint.com/data_structures_algorithms/quick_sort_algorithm.htm)
- [Quick Sort Tutorial](https://www.programiz.com/dsa/quick-sort)
- [In-Place QuickSort in Java](https://www.java67.com/2014/07/quicksort-algorithm-in-java-in-place-example.html)
- [Flowcharts - An Introduction](https://www.geeksforgeeks.org/an-introduction-to-flowcharts/)
- [Push Swap Tutorial](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)
- [Insertion Sort - Wikipedia](https://en.wikipedia.org/wiki/Insertion_sort)
- [Insertion Sort YouTube Video](https://www.youtube.com/watch?v=kgBjXUE_Nwc)
- [Longest Increasing Subsequence DP](https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/)
- [Random Number Generator](https://www.calculatorsoup.com/calculators/statistics/random-number-generator.php)
- [Exit(0) vs. Exit(1) in C/C++](https://www.geeksforgeeks.org/exit0-vs-exit1-in-c-c-with-examples/)


After all this, considering that I pushed so_long and I had only 20 days until the end of November 2023, I find that the most fast, clear, pleasant and smart way for this project is to follow the guide of one of my friends at 42 called Lnicoter:
- [push_swap guide that I will follow](https://github.com/NicoTerabyte/Push_swap/blob/main/Push_swap/english_guide.pdf)


The idea is simple, You have two stacks called Stack A and Stack B. Stack A is given a random list of unorganized numbers. You must take the random list of numbers in Stack A and sort them so that Stack A is organized from smallest to largest. There are only a few moves you’re allowed to used to manipulate the stacks that we’re going to call “Actions”. The main goal of this project is to organize Stack A in as few actions as possible.

So what actions are we allowed to use on the two stacks?
The actions are named: sa, sb, ss, ra, rb, rr, rra, rrb, rrr, pa, pb.
Here’s how they all work:
sa / sb / ss : switch, swaps the first number in the stack with the second.
ra / rb / rr : rotate, moves the last number of the stack to the first position, consequently causing all the others to scale.
rra / rrb / rrr : reverse rotate, trivially the same as above but in the opposite sense.
pa / pb : push in *, moves the number to the top position of the opposite stack in the named stack. So pb takes the first number from a to b.

Now, I encountered a significant challenge in this project: determining the potential number of moves. A careful examination of the project description won't yield any specific mention of this aspect. Nonetheless, it's crucial to understand that achieving top scores necessitates executing 700 moves with 100 numbers and 5,500 moves with 500 numbers. I've allocated approximately 70% of my efforts to meticulously enhancing this aspect of the project. My dedication to optimization is evident throughout the entirety of my work.

**Day 4 - Day 5: Implementation for 3 Random Numbers**

- Begin coding the sorting algorithm for 3 random numbers.
- Test my code with various scenarios and ensure it sorts the numbers correctly in a minimal number of actions (2 or less).

**Day 6 - Day 8: Implementation for 5 Random Numbers**

- Extend my code to handle 5 random numbers.
- Apply the logic mentioned for moving the first two numbers to Stack B and sort the rest in Stack A.
- Test my implementation thoroughly.

**Day 9 - Day 11: Implementation for 100 Random Numbers (Initial Approach)**

- Implement the sorting algorithm for 100 random numbers, initially using the Insertion Sort algorithm and then the Quick Sort.
- Focus on getting the basic functionality working before optimization.

**Day 12 - Day 15: Optimization for 100 Random Numbers**

- Refine my code for 100 random numbers using the chunking strategy I outlined before.
- Test and compare the efficiency of my optimized approach with the Quick Sort method.
- Make sure it stays within the action limit of 12.

**Day 16 - Day 18: Implementation for 500 Random Numbers**

- Apply the optimized strategy for 100 random numbers to handle 500 random numbers.
- Make any necessary adjustments based on the larger dataset.
- I passed from Lnicoter/NicoTerabyte method to Dabi-rac method.

**Day 19 - Day 20: Testing and Fine-Tuning**

- Perform comprehensive testing with various input scenarios for all test cases: 3, 5, 100, and 500 random numbers.
- Fine-tune my code, making it more efficient and optimizing action usage.
- Debug issues that arise during testing.
- I fixed a bug: basically the terminal remains waiting after the last move when the last move is a pa with a number 0.

During the entire 20-day period, I actively used the push_swap visualizer tool to visualize and analyze the actions performed by my code, making it easier to spot any inefficiencies or errors.

The crucial aspect of this project is that planning takes precedence over coding. The code itself isn't "so difficult," but the design phase is the most challenging part. This project marks the first and perhaps the only one at 42 that delves into the initial approach to algorithms and data structures—a fundamental topic in the world of computer science and the professional realm. Algorithmic questions, similar to those found on sites like LeetCode, are frequently posed during interviews, making this project particularly relevant.

Unfortunately, 42 doesn't extensively cover these topics. The essence of this project lies in the fact that you could either take four university exams on the subject, invest three months in studying, or opt to choose an algorithm and implement it. Another consideration is the use of lists or arrays. Lists may pose challenges initially, but they optimize the workflow. On the other hand, arrays are more straightforward and rustic, making them suitable for those who are still novices in C.

The approach I took is to first write and then design. I opted for quicksort with the divide and conquer approach. The crux is recursion—understand it. The pivot's specific location isn't crucial; what matters is its presence and the categorization into smaller and larger elements.

**DESCRITPION**

```c
#include "push_swap.h"

int	main(int argc, char **argv)
{
	// Check if there are command-line arguments
	if (argc > 1)
	{
		// Move to the next element in argv (skip program name)
		argv++;
		
		// If there is only one argument, split it into separate strings
		if (argc == 2)
			argv = ft_split(*argv, ' ');

		// Call the function to fill the stack with parsed input values
		ft_fill_stack(argv);

		// Return 0 to indicate successful execution
		return (0);
	}

	// Return 0 to indicate successful execution if no arguments are provided
	return (0);
}
```

Explanation:

1. `#include "push_swap.h"`: Includes the header file containing function declarations and necessary includes for the push_swap program.

2. `int main(int argc, char **argv)`: The main function, which is the entry point of the program. It takes command-line arguments `argc` (argument count) and `argv` (argument vector).

3. `if (argc > 1)`: Checks if there are command-line arguments provided (excluding the program name).

4. `argv++`: Increments the `argv` pointer to skip the program name.

5. `if (argc == 2) argv = ft_split(*argv, ' ');`: If there is only one argument, use the `ft_split` function to split it into separate strings based on the space character (' '). Update the `argv` pointer to point to the resulting array of strings.

6. `ft_fill_stack(argv);`: Calls the `ft_fill_stack` function to fill the stacks with the parsed input values. This function is not provided in the provided code snippet, so further analysis would depend on its implementation.

7. `return (0);`: Returns 0 to the operating system to indicate successful execution.

8. The last `return (0);` is executed if no command-line arguments are provided. It also returns 0 to the operating system.

This `main` function primarily handles command-line arguments, processes them using the `ft_split` function, and then calls another function (`ft_fill_stack`) to perform the core functionality of filling the stacks.


Let's analyze the `ft_fill_stack` function:

```c
#include "push_swap.h"

void	ft_fill_stack(char **argv)
{
	// Declare a structure of type 't_stack' to hold the stacks and other information
	t_stack	stack;
	// Variables to store the size of the input and the loop index
	int		size;
	int		i;

	// Initialize the 'moves' field in the 'stack' structure to 0
	stack.moves = 0;

	// Initialize the loop index to -1
	i = -1;

	// Calculate the size of the input stack using the 'ft_len_stack' function
	size = ft_len_stack(argv);

	// Allocate memory for stack 'a' based on the size of the input
	stack.a = malloc(size * sizeof(int));
	if (!stack.a)
		return ;

	// Set the length of stack 'a' in the 'stack' structure
	stack.len_a = size;

	// Allocate memory for stack 'b' based on the size of the input
	stack.b = malloc(size * sizeof(int));
	if (!stack.b)
	{
		// Free memory allocated for stack 'a' if memory allocation for stack 'b' fails
		free(stack.a);
		return ;
	}

	// Initialize the length of stack 'b' in the 'stack' structure to 0
	stack.len_b = 0;

	// Loop to fill stack 'a' with parsed integer values from the input
	while (++i < size)
		stack.a[i] = ft_atoi(argv[i], stack.a);

	// Check for duplicate values in stack 'a' and handle them
	ft_find_doubles(stack.a, size);

	// Call the sorting function 'ft_sort' to sort the stacks
	ft_sort(&stack, size);

	// Free the allocated memory for stack 'a' and stack 'b'
	free(stack.a);
	free(stack.b);
}
```

Explanation:

1. `t_stack stack;`: Declares a structure of type `t_stack` to hold information about the stacks and other related data.

2. `int size;`: Declares a variable to store the size of the input stack.

3. `int i;`: Declares a loop index variable.

4. `stack.moves = 0;`: Initializes the 'moves' field in the 'stack' structure to 0.

5. `i = -1;`: Initializes the loop index to -1.

6. `size = ft_len_stack(argv);`: Calls the function `ft_len_stack` to calculate the size of the input stack.

7. Memory allocation for stack 'a':
   ```c
   stack.a = malloc(size * sizeof(int));
   if (!stack.a)
       return ;
   ```

   If memory allocation fails, the function returns without proceeding further.

8. `stack.len_a = size;`: Sets the length of stack 'a' in the 'stack' structure.

9. Memory allocation for stack 'b':
   ```c
   stack.b = malloc(size * sizeof(int));
   if (!stack.b)
   {
       free(stack.a);
       return ;
   }
   ```

   If memory allocation fails, it frees the memory allocated for stack 'a' and returns.

10. `stack.len_b = 0;`: Initializes the length of stack 'b' in the 'stack' structure to 0.

11. Loop to fill stack 'a' with parsed integer values from the input:
   ```c
   while (++i < size)
       stack.a[i] = ft_atoi(argv[i], stack.a);
   ```

12. `ft_find_doubles(stack.a, size);`: Calls a function to check for duplicate values in stack 'a' and handles them.

13. `ft_sort(&stack, size);`: Calls the sorting function `ft_sort` to sort the stacks.

14. `free(stack.a);`: Frees the memory allocated for stack 'a'.

15. `free(stack.b);`: Frees the memory allocated for stack 'b'.



Let's analyze the `ft_error` and `ft_atoi` functions:

```c
#include "push_swap.h"

void	ft_error(int *stack)
{
	// Free the memory allocated for the stack
	free(stack);
	// Write the "Error" message to standard output
	write(0, "Error\n", 6);
	// Exit the program with a return code of 1
	exit(1);
}
```

Explanation:

1. `void ft_error(int *stack)`: The function takes a pointer to an integer array (`stack`) as a parameter.

2. `free(stack);`: Frees the memory allocated for the stack.

3. `write(0, "Error\n", 6);`: Writes the "Error" message to the standard output using the `write` system call.

4. `exit(1);`: Exits the program with a return code of 1, indicating an error.

```c
int ft_is_digit(int c)
{
	// Check if the character is a digit (0-9)
	if (c >= '0' && c <= '9')
		return (1);
	// Return 0 if the character is not a digit
	return (0);
}
```

Explanation:

1. `int ft_is_digit(int c)`: The function takes an integer `c` as a parameter.

2. `if (c >= '0' && c <= '9')`: Checks if the integer corresponds to a digit (0-9).

3. `return (1);`: Returns 1 if the character is a digit.

4. `return (0);`: Returns 0 if the character is not a digit.

```c
int ft_atoi(char *num, int *stack)
{
	// Variables to keep track of the index, sign, and result of the conversion
	int			i;
	int			sign;
	long int	res;

	// Initialize variables
	i = 0;
	sign = 1;
	res = 0;

	// Skip leading whitespaces
	while (num[i] == 32 || (num[i] >= 9 && num[i] <= 13))
		i++;

	// Handle the sign
	if (num[i] == '+')
		i++;
	else if (num[i] == '-')
	{
		sign = -1;
		i++;
	}

	// Process the digits
	while (num[i])
	{
		// Check if the character is a digit
		if (!ft_is_digit(num[i]))
			// Call the error function if a non-digit character is encountered
			ft_error(stack);
		// Update the result based on the digit
		res = res * 10 + num[i++] - '0';
	}

	// Check for overflow or underflow
	if (res > INT_MAX || res < INT_MIN)
		// Call the error function if overflow or underflow occurs
		ft_error(stack);

	// Return the final result with the appropriate sign
	return (res * sign);
}
```

Explanation:

1. `int ft_atoi(char *num, int *stack)`: The function takes a string `num` and a pointer to an integer array (`stack`) as parameters.

2. Variables:
   - `int i`: Loop index.
   - `int sign`: Sign of the resulting integer.
   - `long int res`: Result of the conversion.

3. `while (num[i] == 32 || (num[i] >= 9 && num[i] <= 13))`: Skip leading whitespaces.

4. Handle the sign:
   - `if (num[i] == '+')`: Skip the plus sign.
   - `else if (num[i] == '-')`: Set the sign to negative and skip the minus sign.

5. Process the digits:
   - `while (num[i])`: Loop through the characters of the string.
   - Check if the character is a digit using `ft_is_digit`.
   - Update the result based on the digit.

6. `if (res > INT_MAX || res < INT_MIN)`: Check for overflow or underflow.

7. `return (res * sign);`: Return the final result with the appropriate sign.





Let's analyze the ft_quicksort in the given code:

```c
static void ft_temp_sort(int *temp_stack, int size)
{
	// Sort the temporary stack in ascending order
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			// Swap elements if they are in the wrong order
			if (temp_stack[i] > temp_stack[j])
			{
				temp = temp_stack[i];
				temp_stack[i] = temp_stack[j];
				temp_stack[j] = temp;
			}
			j++;
		}
		i++;
	}
}
```

Explanation:

1. `static void ft_temp_sort(int *temp_stack, int size)`: The function takes an integer array `temp_stack` and its size as parameters.

2. Sorting Algorithm: The function uses the Bubble Sort algorithm to sort the elements of the `temp_stack` array in ascending order.

3. Nested Loops: Two nested loops are used to compare and swap elements.

4. Bubble Sort: Elements are swapped if they are in the wrong order, gradually pushing the larger elements to the end of the array.

```c
static int ft_check_pivot(int *pivot, int *stack, int size)
{
	// Find the pivot by sorting a temporary stack
	int *temp_stack;
	int i;

	// Allocate memory for the temporary stack
	temp_stack = (int *)malloc(size * sizeof(int));
	if (!temp_stack)
		return (0);

	// Copy elements from the original stack to the temporary stack
	i = 0;
	while (i < size)
	{
		temp_stack[i] = stack[i];
		i++;
	}

	// Sort the temporary stack to find the median (pivot)
	ft_temp_sort(temp_stack, size);
	*pivot = temp_stack[size / 2];

	// Free memory allocated for the temporary stack
	free(temp_stack);

	return (1);
}
```

Explanation:

1. `static int ft_check_pivot(int *pivot, int *stack, int size)`: The function takes an integer pointer `pivot`, an integer array `stack`, and its size as parameters.

2. Memory Allocation: Allocates memory for a temporary stack (`temp_stack`).

3. Copy Elements: Copies elements from the original stack to the temporary stack.

4. Sort: Calls `ft_temp_sort` to sort the temporary stack.

5. Find Pivot: Sets the pivot value to the middle element of the sorted temporary stack.

6. Memory Deallocation: Frees the memory allocated for the temporary stack.

7. Return: Returns 1 if the pivot is successfully found.

```c
static void ft_quicksort_stacks(t_stack *stack, int len)
{
	// Recursive quicksort implementation for stack A
	if (len == 3 && stack->len_a == 3)
		ft_sort_3a(stack);
	else if (len == 2)
	{
		if (stack->a[0] > stack->a[1])
			ft_sa(stack);
	}
	else if (len == 3)
	{
		// Loop until stack A is sorted
		while (len != 3 || !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
		{
			// Sorting logic for stack A with three elements
			if (len == 3 && stack->a[0] > stack->a[1] && stack->a[2])
				ft_sa(stack);
			else if (len == 3 && !(stack->a[2] > stack->a[0] && stack->a[2] > stack->a[1]))
				len = ft_check_push(stack, len, 0);
			else if (stack->a[0] > stack->a[1])
				ft_sa(stack);
			else if (len++)
				ft_pa(stack);
		}
	}
}
```

Explanation:

1. `static void ft_quicksort_stacks(t_stack *stack, int len)`: The function takes a pointer to a `t_stack` structure (`stack`) and an integer `len` as parameters.

2. Quick Sort Implementation: Implements the quicksort algorithm for stack A (`len` elements).

3. Sorting Logic:
   - If `len` is 3 and the length of stack A is 3, call `ft_sort_3a`.
   - If `len` is 2, swap elements in stack A if necessary.
   - If `len` is 3, loop until stack A is sorted using specific sorting logic.

```c
int ft_quicksort_b(t_stack *stack, int len, int count_rot)
{
	// Quicksort implementation for stack B
	int pivot;
	int numbers;

	// Move sorted elements from B to A if B

 is already sorted
	if (ft_check_order(stack->b, len, 1) == 1)
		while (len--)
			ft_pa(stack);

	// If there are 3 or fewer elements in B, sort them
	if (len <= 3)
	{
		ft_sort_3b(stack, len);
		return (1);
	}

	// Initialize variables
	numbers = len;

	// Find the pivot for B
	if (!ft_check_pivot(&pivot, stack->b, len))
		return (0);

	// Move elements from B to A or rotate B until the pivot is reached
	while (len != numbers / 2)
	{
		if (stack->b[0] >= pivot && len--)
			ft_pa(stack);
		else if (++count_rot)
			ft_rb(stack);
	}

	// Rotate B back to the original position
	while (numbers / 2 != stack->len_b && count_rot--)
		ft_rrb(stack);

	// Recursively call quicksort on A and B
	return (ft_quicksort_a(stack, numbers / 2 + numbers % 2, 0)
		&& ft_quicksort_b(stack, numbers / 2, 0));
}

int ft_quicksort_a(t_stack *stack, int len, int count_rot)
{
	// Quicksort implementation for stack A
	int pivot;
	int numbers;

	// If A is already sorted, return
	if (ft_check_order(stack->a, len, 0) == 1)
		return (1);

	// Initialize variables
	numbers = len;

	// If there are 3 or fewer elements in A, sort them using a specialized function
	if (len <= 3)
	{
		ft_quicksort_stacks(stack, len);
		return (1);
	}

	// Find the pivot for A
	if (!ft_check_pivot(&pivot, stack->a, len))
		return (0);

	// Move elements from A to B or rotate A until the pivot is reached
	while (len != numbers / 2 + numbers % 2)
	{
		if (stack->a[0] < pivot && (len--))
			ft_pb(stack);
		else if (++count_rot)
			ft_ra(stack);
	}

	// Rotate A back to the original position
	while (numbers / 2 + numbers % 2 != stack->len_a && count_rot--)
		ft_rra(stack);

	// Recursively call quicksort on A and B
	return (ft_quicksort_a(stack, numbers / 2 + numbers % 2, 0)
		&& ft_quicksort_b(stack, numbers / 2, 0));
	return (1);
}
```

Explanation:

1. `int ft_quicksort_b(t_stack *stack, int len, int count_rot)`: The function implements the quicksort algorithm for stack B (`len` elements). It returns 1 if successful, 0 otherwise.

2. Sorting B:
   - Move sorted elements from B to A if B is already sorted.
   - If there are 3 or fewer elements in B, sort them using a specialized function (`ft_sort_3b`).
   - Find the pivot for B.
   - Move elements from B to A or rotate B until the pivot is reached.
   - Rotate B back to the original position.

3. Recursive Call:
   - Recursively call quicksort on A and B.

4. `int ft_quicksort_a(t_stack *stack, int len, int count_rot)`: The function implements the quicksort algorithm for stack A (`len` elements). It returns 1 if successful, 0 otherwise.

5. Sorting A:
   - If A is already sorted, return.
   - If there are 3 or fewer elements in A, sort them using a specialized function (`ft_quicksort_stacks`).
   - Find the pivot for A.
   - Move elements from A to B or rotate A until the pivot is reached.
   - Rotate A back to the original position.

6. Recursive Call:
   - Recursively call quicksort on A and B.






```c
int ft_check_push(t_stack *stack, int dim, int push)
{
	// Push or pop elements between stacks based on the 'push' parameter
	if (push == 0)
		ft_pb(stack);
	else
		ft_pa(stack);
	dim--;
	return (dim);
}
```

Explanation:

1. `int ft_check_push(t_stack *stack, int dim, int push)`: The function takes a pointer to a `t_stack` structure (`stack`), an integer `dim`, and an integer `push` as parameters.

2. Push or Pop Elements: If `push` is 0, it calls `ft_pb` (push B) to move the top element from stack A to stack B. If `push` is 1, it calls `ft_pa` (push A) to move the top element from stack B to stack A.

3. Decrement Dimension: Decrements the `dim` variable (number of elements).

4. Return: Returns the updated value of `dim`.

```c
int ft_sort_3b(t_stack *stack, int len)
{
	// Sort the top 3 elements in stack B
	if (len == 1)
		ft_pa(stack);
	else if (len == 2)
	{
		// Swap elements in stack B if necessary and push to stack A
		if (stack->b[0] < stack->b[1])
			ft_sb(stack);
		while (len--)
			ft_pa(stack);
	}
	else if (len == 3)
	{
		// Loop until stack A is sorted
		while (len || !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
		{
			// Sorting logic for stack A and B with three elements
			if (len == 1 && stack->a[0] > stack->a[1])
				ft_sa(stack);
			else if (len == 1 || (len >= 2 && stack->b[0] > stack->b[1])
				|| (len == 3 && stack->b[0] > stack->b[2]))
				len = ft_check_push(stack, len, 1);
			else
				ft_sb(stack);
		}
	}
	return (0);
}
```

Explanation:

1. `int ft_sort_3b(t_stack *stack, int len)`: The function takes a pointer to a `t_stack` structure (`stack`) and an integer `len` as parameters.

2. Sorting Top 3 Elements in B:
   - If `len` is 1, push the top element from stack B to stack A.
   - If `len` is 2, swap elements in stack B if necessary, then push them to stack A.
   - If `len` is 3, loop until stack A is sorted using specific sorting logic.

```c
void ft_sort_3a(t_stack *stack)
{
	// Sort the top 3 elements in stack A
	if (stack->a[0] < stack->a[1] && stack->a[0] < stack->a[2] && stack->a[1] < stack->a[2])
		return;
	else if (stack->a[0] < stack->a[1] && stack->a[0] < stack->a[2] && stack->a[1] > stack->a[2])
	{
		// Special case: Rotate and swap in stack A
		ft_rra(stack);
		ft_sa(stack);
	}
	else if (stack->a[0] > stack->a[1] && stack->a[0] < stack->a[2] && stack->a[1] < stack->a[2])
		ft_sa(stack);
	else if (stack->a[0] < stack->a[1] && stack->a[0] > stack->a[2] && stack->a[1] > stack->a[2])
		ft_rra(stack);
	else if (stack->a[1] < stack->a[2] && stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2])
		ft_ra(stack);
	else if (stack->a[1] > stack->a[2] && stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2])
	{
		// Special case: Rotate and swap in stack A
		ft_ra(stack);
		ft_sa(stack);
	}
}
```

Explanation:

1. `void ft_sort_3a(t_stack *stack)`: The function takes a pointer to a `t_stack` structure (`stack`) as a parameter.

2. Sorting Top 3 Elements in A: Sorts the top 3 elements in stack A using specific cases:
   - If the first element is the smallest, do nothing (already sorted).
   - If the first element is smaller than the second and larger than the third, rotate and swap in stack A.
   - If the first element is larger than the second and smaller than the third, swap elements in stack A.
   - If the first element is larger than the second and larger than the third, rotate in stack A.
   - If the second element is larger than the third and the first element is larger than both, rotate in stack A.
   - If the second element is smaller than the third and the first element is larger than both, rotate and swap in stack A.

```c
int ft_sort(t_stack *stack, int size)
{
	// Sort the stack using various sorting functions
	if (ft_check_order(stack->a, stack->len_a, 0) == 0)
	{
		// If there are 2 elements, swap them
		if (size == 2)
			ft_sa(stack);
		// If there are 3 elements, use a specialized sorting function
		else if (size == 3)
			ft_sort_3a(stack);
		// If there are more than 3 elements, use the quicksort algorithm
		else
			ft_quicksort_a(stack, size, 0);
	}
	return (0);
}
```

Explanation:

1. `int ft_sort(t_stack *stack, int size)`: The function takes a pointer to a `t_stack` structure (`stack`) and an integer `size` as parameters.



2. Sorting the Stack:
   - Check if stack A is already sorted. If not, sort it using various sorting functions.
   - If there are 2 elements, swap them (`ft_sa`).
   - If there are 3 elements, use a specialized sorting function (`ft_sort_3a`).
   - If there are more than 3 elements, use the quicksort algorithm (`ft_quicksort_a`).
  



Let's analyze the functions in the ft_split:

```c
size_t	ft_str_len(const char *str)
{
	// Calculate the length of the string
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
```

Explanation:

1. `size_t ft_str_len(const char *str)`: The function takes a pointer to a constant character array (`str`) and returns a `size_t` value representing the length of the string.

2. Calculating Length: It iterates through the string until it reaches the null terminator (`'\0'`) and increments the counter `i` for each character.

3. Return: Returns the final count `i`, representing the length of the string.

```c
char *ft_sub_str(char const *s, unsigned int start, size_t len)
{
	// Extract a substring from the given string
	char	*ptr;
	size_t	index;

	if (!s)
		return (NULL);
	// Adjust the starting index if it exceeds the length of the string
	if (start >= ft_str_len(s))
		start = ft_str_len(s);
	// Adjust the length if it extends beyond the string's length
	if ((start + len) >= ft_str_len(s))
		len = ft_str_len(s) - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	index = 0;
	while (index != len)
	{
		ptr[index] = *(s + start + index);
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
```

Explanation:

1. `char *ft_sub_str(char const *s, unsigned int start, size_t len)`: The function takes a pointer to a constant character array (`s`), an unsigned integer `start`, and a `size_t` length `len`. It returns a dynamically allocated substring.

2. Null Check: Checks if the input string is NULL and returns NULL if true.

3. Adjusting Indices: Adjusts the starting index (`start`) if it exceeds the length of the string and adjusts the length (`len`) if it extends beyond the string's length.

4. Memory Allocation: Allocates memory for the substring (`ptr`) based on the adjusted length.

5. Copying Characters: Copies characters from the original string to the substring.

6. Null Terminator: Adds a null terminator at the end of the substring.

7. Return: Returns the dynamically allocated substring.

```c
static size_t	ft_count_word(const char *s, char c)
{
	// Count the number of words in the string separated by a specified character
	size_t	words;

	words = 0;
	while (*s)
	{
		if (*s != c)
		{
			++words;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (words);
}
```

Explanation:

1. `static size_t ft_count_word(const char *s, char c)`: The function takes a pointer to a constant character array (`s`) and a character `c`. It returns the number of words in the string separated by the specified character.

2. Counting Words: It iterates through the string, increments the `words` counter when a word is encountered, and moves to the next word.

3. Return: Returns the total count of words.

```c
char **ft_split(const char *s, char c)
{
	// Split the string into an array of substrings based on a specified character
	char	**str;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	// Allocate memory for the array of substrings
	str = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!str)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			// Calculate the length of the current word
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			// Create a substring and store it in the array
			str[i++] = ft_sub_str(s - len, 0, len);
		}
		else
			++s;
	}
	str[i] = 0; // Null-terminate the array of substrings
	return (str);
}
```

Explanation:

1. `char **ft_split(const char *s, char c)`: The main function that takes a pointer to a constant character array (`s`) and a character `c`. It returns an array of dynamically allocated substrings.

2. Null Check: Checks if the input string is NULL and returns NULL if true.

3. Memory Allocation: Allocates memory for the array of substrings (`str`) based on the count of words.

4. Parsing and Creating Substrings: Iterates through the string, calculates the length of each word, and creates a substring for each word using the `ft_sub_str` function. Stores the substrings in the array.

5. Null Termination: Adds a null terminator at the end of the array of substrings.

6. Return: Returns the array of dynamically allocated substrings.



Let's analyze the functions in the given "utils" file:

```c
int ft_len_stack(char **argv)
{
	// Calculate the length of the stack
	int i = 0;
	while (*argv)
	{
		argv++;
		i++;
	}
	return i;
}
```

Explanation:

1. `int ft_len_stack(char **argv)`: The function takes a pointer to an array of strings (`argv`) as a parameter.

2. Counting Stack Length: It iterates through the array of strings until it encounters a NULL pointer, counting the number of elements in the stack.

3. Return: Returns the calculated length of the stack.

```c
int ft_check_order(int *stack, int size, int order)
{
	// Check if the elements in the stack are in ascending or descending order
	int i;

	if (order == 0)
	{
		i = 1;
		while (i < size)
		{
			if (stack[i - 1] > stack[i])
				return 0;
			i++;
		}
		return 1;
	}
	else
	{
		i = 1;
		while (i < size)
		{
			if (stack[i - 1] < stack[i])
				return 0;
			i++;
		}
		return 1;
	}
}
```

Explanation:

1. `int ft_check_order(int *stack, int size, int order)`: The function takes an array of integers (`stack`), an integer `size`, and an integer `order` as parameters.

2. Checking Order:
   - If `order` is 0, it checks if the elements in the stack are in ascending order.
   - If `order` is not 0, it checks if the elements in the stack are in descending order.

3. Return: Returns 1 if the condition is met, 0 otherwise.

```c
void ft_find_doubles(int *stack, int size)
{
	// Check for duplicate elements in the stack
	int i, j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (stack[i] == stack[j])
				ft_error(stack);
			j++;
		}
		i++;
		j = i + 1;
	}
}
```

Explanation:

1. `void ft_find_doubles(int *stack, int size)`: The function takes an array of integers (`stack`) and an integer `size` as parameters.

2. Checking for Duplicates: It uses nested loops to compare each element with every other element in the stack, checking for duplicates.

3. Duplicate Found: If a duplicate is found, it calls `ft_error` to handle the error.



Let's analyze the "moves" functions in the "push_swap" project:

```c
void ft_pa(t_stack *stack)
{
	// Push the top element from stack B to stack A
	int i;

	if (!stack->b)
		return;
	stack->len_a++;
	i = stack->len_a - 1;
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[0] = stack->b[0];
	i = 0;
	while (i < stack->len_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->len_b--;
	write(1, "pa\n", 3);
	stack->moves++;
}
```

Explanation:

1. `void ft_pa(t_stack *stack)`: The function performs the "pa" operation, pushing the top element from stack B to stack A.

2. Shift Elements: It shifts elements in stack A and B to make room for the new element.

3. Update Stack Sizes: Adjusts the sizes of stacks A and B accordingly.

4. Output: Prints "pa" to signify the operation.

5. Increment Moves: Updates the move count.

Similar explanations apply to the other "moves" functions (`ft_pb`, `ft_ra`, `ft_rb`, `ft_rr`, `ft_rra`, `ft_rrb`, `ft_rrr`, `ft_sa`, `ft_sb`, `ft_ss`). Each function represents a specific move in the "push_swap" algorithm, and they share a common structure:

The `ft_pb` function step by step:

```c
void	ft_pb(t_stack *stack)
{
    // Declare a variable 'i' for iteration.
    int i;

    // Check if stack A is empty. If it is, return from the function.
    if (!stack->a)
        return;

    // Increment the length of stack B.
    stack->len_b++;

    // Shift elements in stack B to make room for the new element.
    i = stack->len_b - 1;
    while (i > 0)
    {
        stack->b[i] = stack->b[i - 1];
        i--;
    }

    // Move the top element from stack A to the bottom of stack B.
    stack->b[0] = stack->a[0];

    // Shift elements in stack A to fill the gap left by the moved element.
    i = 0;
    while (i < stack->len_a - 1)
    {
        stack->a[i] = stack->a[i + 1];
        i++;
    }

    // Decrement the length of stack A.
    stack->len_a--;

    // Print the move ("pb") to the standard output.
    write(1, "pb\n", 3);

    // Increment the 'moves' counter in the stack structure.
    stack->moves++;
}
```

Explanation:

1. **Check if stack A is empty:** The function starts by checking if stack A (`stack->a`) is empty. If it is, the function returns without performing any further operations.

2. **Increment the length of stack B:** The length of stack B (`stack->len_b`) is incremented to make room for the new element.

3. **Shift elements in stack B:** The elements in stack B are shifted up by one position to make space for the new element that will be pushed onto stack B.

4. **Move the top element from stack A to stack B:** The top element (index 0) from stack A is moved to the bottom of stack B.

5. **Shift elements in stack A:** The elements in stack A are shifted down by one position to fill the gap left by the moved element.

6. **Decrement the length of stack A:** The length of stack A is decremented since an element has been moved from stack A to stack B.

7. **Print the move ("pb"):** The move "pb" (push B) is printed to the standard output using the `write` function.

8. **Increment the 'moves' counter:** The 'moves' counter in the `t_stack` structure is incremented to keep track of the number of moves made in the algorithm.

In summary, `ft_pb` implements the "push B" operation, moving the top element from stack A to stack B and updating the lengths of both stacks.


These three functions, `ft_sa`, `ft_sb`, and `ft_ss`, are responsible for performing swapping operations on stacks A and B in my push swap algorithm. Here's an explanation for each:

1. **ft_sa: Swap A**
    - If the length of stack A is less than 2, there's nothing to swap, so the function returns.
    - Otherwise, it swaps the top two elements of stack A.
    - Prints "sa" to indicate the swap operation.
    - Increments the 'moves' counter.

    ```c
    void	ft_sa(t_stack *stack)
    {
        int temp;

        if (stack->len_a < 2)
            return;
        
        temp = stack->a[0];
        stack->a[0] = stack->a[1];
        stack->a[1] = temp;

        write(1, "sa\n", 3);
        stack->moves++;
    }
    ```

2. **ft_sb: Swap B**
    - If the length of stack B is less than 2, there's nothing to swap, so the function returns.
    - Otherwise, it swaps the top two elements of stack B.
    - Prints "sb" to indicate the swap operation.
    - Increments the 'moves' counter.

    ```c
    void	ft_sb(t_stack *stack)
    {
        int temp;

        if (stack->len_b < 2)
            return;

        temp = stack->b[1];
        stack->b[1] = stack->b[0];
        stack->b[0] = temp;

        write(1, "sb\n", 3);
        stack->moves++;
    }
    ```

3. **ft_ss: Swap Both**
    - If either stack A or stack B has a length less than 2, there's nothing to swap, so the function returns.
    - Otherwise, it swaps the top two elements of both stack A and stack B.
    - Prints "ss" to indicate the swap operation.
    - Increments the 'moves' counter.

    ```c
    void	ft_ss(t_stack *stack)
    {
        int temp_a;
        int temp_b;

        if (stack->len_a < 2 || stack->len_b < 2)
            return;

        temp_a = stack->a[1];
        stack->a[1] = stack->a[0];
        stack->a[0] = temp_a;

        temp_b = stack->b[1];
        stack->b[1] = stack->b[0];
        stack->b[0] = temp_b;

        write(1, "ss\n", 3);
        stack->moves++;
    }
    ```

These operations are fundamental for maintaining the order of elements in my stacks during the sorting process.


These functions (`ft_ra`, `ft_rb`, and `ft_rr`) are related to the rotation operations in your push swap algorithm. Let's break down each function:

1. **ft_ra - Rotate A:**
   - `void ft_ra(t_stack *stack)`
   - Description: Rotates the top element of stack A to the bottom.
   - Explanation:
     - If the length of stack A is less than 2, there is no need to rotate, so the function returns.
     - Store the top element of stack A in the variable `temp`.
     - Shift all elements in stack A one position to the top.
     - Place the stored element (`temp`) at the bottom of stack A.
     - Print the move ("ra") to the standard output.
     - Increment the 'moves' counter in the stack structure.

```c
void	ft_ra(t_stack *stack)
{
	int	temp;
	int	i;

	i = 0;
	if (stack->len_a < 2)
		return ;
	temp = stack->a[0];
	while (i < stack->len_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[i] = temp;
	write(1, "ra\n", 3);
	stack->moves++;
}
```


2. **ft_rb - Rotate B:**
   - `void ft_rb(t_stack *stack)`
   - Description: Rotates the top element of stack B to the bottom.
   - Explanation:
     - If the length of stack B is less than 2, there is no need to rotate, so the function returns.
     - Store the top element of stack B in the variable `temp`.
     - Shift all elements in stack B one position to the top.
     - Place the stored element (`temp`) at the bottom of stack B.
     - Print the move ("rb") to the standard output.
     - Increment the 'moves' counter in the stack structure.
    
```c
void	ft_rb(t_stack *stack)
{
	int	temp;
	int	i;

	i = 0;
	if (stack->len_b < 2)
		return ;
	temp = stack->b[0];
	while (i < stack->len_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[i] = temp;
	write(1, "rb\n", 3);
	stack->moves++;
}
```



3. **ft_rr - Rotate Both:**
   - `void ft_rr(t_stack *stack)`
   - Description: Applies `ft_ra` and `ft_rb` simultaneously, effectively rotating both stacks.
   - Explanation:
     - If either stack has a length of less than 2, there is no need to rotate, so the function returns.
     - Store the top elements of both stack A (`temp_a`) and stack B (`temp_b`).
     - Shift all elements in stack A one position to the top.
     - Shift all elements in stack B one position to the top.
     - Place the stored elements (`temp_a` and `temp_b`) at the bottom of stacks A and B, respectively.
     - Print the move ("rr") to the standard output.
     - Increment the 'moves' counter in the stack structure.

```c
void	ft_rr(t_stack *stack)
{
	int	temp_a;
	int	temp_b;
	int	i;

	if (stack->len_a < 2 || stack->len_b < 2)
		return ;
	temp_a = stack->a[0];
	temp_b = stack->b[0];
	i = 0;
	while (i < stack->len_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[i] = temp_a;
	i = 0;
	while (i < stack->len_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[i] = temp_b;
	write(1, "rr\n", 3);
	stack->moves++;
}
```




These rotation operations are fundamental in rearranging elements within the stacks during the sorting process. They are crucial for achieving the desired order of elements.


These three functions (`ft_rra`, `ft_rrb`, and `ft_rrr`) in my C code implement the "reverse rotate" operations for the stacks. Let's break down each function:

1. **ft_rra: Reverse Rotate Stack A**
   - The function takes a pointer to a `t_stack` structure (`stack`) as an argument.
   - It rotates all elements in stack A downward by one position.
   - It prints "rra" to signify the reverse rotation of stack A.
   - The 'moves' counter in the `t_stack` structure is incremented.

```c
void ft_rra(t_stack *stack)
{
    int temp;
    int i;

    i = stack->len_a - 1;
    temp = stack->a[i];
    while (i > 0)
    {
        stack->a[i] = stack->a[i - 1];
        i--;
    }
    stack->a[0] = temp;
    write(1, "rra\n", 4);
    stack->moves++;
}
```

2. **ft_rrb: Reverse Rotate Stack B**
   - Similar to `ft_rra`, but it performs a reverse rotation on stack B.

```c
void ft_rrb(t_stack *stack)
{
    int temp;
    int i;

    i = stack->len_b - 1;
    temp = stack->b[i];
    while (i > 0)
    {
        stack->b[i] = stack->b[i - 1];
        i--;
    }
    stack->b[0] = temp;
    write(1, "rrb\n", 4);
    stack->moves++;
}
```

3. **ft_rrr: Reverse Rotate Both Stacks**
   - It combines the reverse rotations of stack A and stack B into a single operation.
   - The function first checks if there are at least 2 elements in both stacks.
   - It then performs the reverse rotation on both stacks separately.
   - It prints "rrr" to signify the combined reverse rotation.
   - The 'moves' counter in the `t_stack` structure is incremented.

```c
void ft_rrr(t_stack *stack)
{
    int temp_a;
    int temp_b;
    int i;

    i = stack->len_a - 1;
    if (stack->len_a < 2 || stack->len_b < 2)
        return;
    temp_a = stack->a[i];
    temp_b = stack->b[0];
    while (i > 0)
    {
        stack->a[i] = stack->a[i - 1];
        i--;
    }
    stack->a[i] = temp_a;
    i = stack->len_b - 1;
    temp_b = stack->b[i];
    while (i > 0)
    {
        stack->b[i] = stack->b[i - 1];
        i--;
    }
    stack->b[i] = temp_b;
    write(1, "rrr\n", 4);
    stack->moves++;
}
```

These functions are essential for manipulating the order of elements in your stacks during the sorting process.



These functions collectively implement the various moves required to sort the stacks in the "push_swap" project.


Now the Makefile:

```make
NAME = push_swap

SRCS = ft_atoi.c \
       ft_fill_stack.c \
       ft_main.c \
       ft_push.c \
       ft_quicksort.c \
       ft_reverse_rotate.c \
       ft_rotate.c \
       ft_sort.c \
       ft_split.c \
       ft_swap.c \
       ft_utils.c \

OBJS = $(SRCS:.c=.o)

CC = gcc -g

RM = rm -f

FLGS = -Wall -Wextra -Werror -g

%.o: %.c
	$(CC) ${FLGS} -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLGS) -o $(NAME) $(OBJS)
	@echo "\033[32mCompiled, OK!\033[0m"

all: $(NAME)

clean:
	$(RM) $(OBJS)
	@echo "\033[33mClean, OK!\033[0m"

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
```

Explanation:

1. **Variables:**
   - `NAME`: Represents the executable name.
   - `SRCS`: List of source files.
   - `OBJS`: List of object files derived from source files.
   - `CC`: Compiler command.
   - `RM`: Remove command.
   - `FLGS`: Compiler flags.

2. **Pattern Rule:**
   - `%.o: %.c`: A pattern rule to compile C source files into object files.

3. **Compilation Rule:**
   - `$(NAME): $(OBJS)`: Defines a rule to build the executable from object files.
   - `$(CC) $(FLGS) -o $(NAME) $(OBJS)`: Compiles and links the object files to create the executable.
   - `@echo "\033[32mCompiled, OK!\033[0m"`: Prints a message indicating successful compilation.

4. **Phony Targets:**
   - `.PHONY: all clean fclean re`: Marks these targets as phony (not associated with files) to ensure they are always executed.

5. **Targets:**
   - `all`: Default target. Builds the executable.
   - `clean`: Removes object files.
   - `fclean`: Removes object files and the executable.
   - `re`: Cleans and rebuilds the project.

The Makefile provides a convenient way to compile, clean, and rebuild the "push_swap" project.


The header file for the "push_swap" project is well-structured and provides a clear overview of the functions and their prototypes:

```c

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	len_a;
	int	len_b;
	int	moves;
}	t_stack;

// ft_atoi.c
void	ft_error(int *stack);
int		ft_is_digit(int c);
int		ft_atoi(char *num, int *stack);

// ft_main.c
void	ft_fill_stack(char **argv);
int		main(int argc, char **argv);

// ft_push.c
void	ft_pa(t_stack *stack);
void	ft_pb(t_stack *stack);

// ft_quicksort.c
int		ft_quicksort_a(t_stack *stack, int len, int count_rot);
int		ft_quicksort_b(t_stack *stk, int len, int count_rot);

// ft_reverse_rotate.c
void	ft_rra(t_stack *stack);
void	ft_rrb(t_stack *stack);
void	ft_rrr(t_stack *stack);

// ft_rotate.c
void	ft_ra(t_stack *stack);
void	ft_rb(t_stack *stack);
void	ft_rr(t_stack *stack);

// ft_sort.c
int		ft_sort(t_stack *stack, int size);
void	ft_sort_3a(t_stack *stack);
int		ft_sort_3b(t_stack *stack, int len);
int		ft_check_push(t_stack *stak, int dim, int push);

// ft_split.c
char	**ft_split(const char *s, char c);
char	*ft_sub_str(char const *s, unsigned int start, size_t len);
size_t	ft_str_len(const char *str);

// ft_swap.c
void	ft_sa(t_stack *stack);
void	ft_sb(t_stack *stack);
void	ft_ss(t_stack *stack);

// ft_utils.c
void	ft_find_doubles(int *stack, int size);
int		ft_check_order(int *stack, int size, int order);
int		ft_len_stack(char **argv);

#endif

```

1. **Header Guards:**
   - You have used proper header guards (`#ifndef PUSH_SWAP_H`, `#define PUSH_SWAP_H`, `#endif`) to prevent double inclusion of the header file.

2. **Includes:**
   - You have included necessary standard C libraries (`<unistd.h>`, `<stdio.h>`, `<stdlib.h>`, `<limits.h>`).

3. **Data Structures:**
   - The `t_stack` structure is appropriately defined to hold information about the two stacks (`a` and `b`), their lengths, and the number of moves.

4. **Function Prototypes:**
   - Function prototypes are well-declared and match the implementations in the source files.

5. **Comments:**
   - Each function prototype has a brief comment describing its purpose, which is helpful for understanding the functionality at a glance.

6. **Consistency:**
   - The naming of functions and structure members is consistent and follows a clear pattern, which is good for code readability.

Overall, the header file provides a clear interface for the functions in the project, making it easy for other developers (or yourself) to understand and use the code.
