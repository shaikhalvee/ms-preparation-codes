Tentative Lesson Plan
---------------------

##1. Discrete Math
####1.1 Topics
	- Pigeonhole Principle
	- Proof strategy
	- Problems regarding truth & false. e.g. In a village there are 2 types of people, who only speaks true or false.
	 If you ask ......[similar type of question]

####1.2 Questions
	- discrete math problem about telephone number.
	- discrete math proof of x+y>=100 then proof or disproof x>=50 or y>=50
	- Prove that in a group of 50 students of different height there is a increasing subsequence of height of length at least 8.
	
##2. Structural Programming
####2.1 Topics
	- #define in C
	- Macro
	- Structure, Union concepts
	- Static, extern variables
	- Coding practice on function, recursion, string, array, etc.
	- palindrome code
	- sum of digit code
	- c program for n reverse of digits

####1.2 Questions
	- #define related problems.
	- #define CONCATE(a, b) a##b
	- #define makeString(a) #a
	- difference between callByValue and callByreference
	- function that swaps two variable without using the third variable
	- function to determine the second largest element of a array [or third largest etc.]
	- function that takes an integer and returns the reverse format of the taken integer without using any build-in 
	string function
	- reverse a string without using library function, a 3rd variable or an array.
	- palindrome codes
	- sum of digits representations. e.g. print digits of a number using recursion or reverse print. likewise for string
	- pointer arithmatics [very tough, including multidimensional array]
	- short notes on ...... [different topics]
	- Using pointer insert a number in a sorted list, it was forbidden to use array notation like array[] , all should be done by pointer notation.
	
##3. OOP
####3.1 Topics:
	- implementing java method (so we can infer that language specific questions might actually come)
	- finding errors in a given code
			
	C++
	==============
	- Encapsulation, Polymorphism, Inheritance
	- Public, private, protected access
	- Overloading, overriding
	- Operator overloading related codes
	- Friend function
	- Copy constructor
		# 3 cases where copy constructor is applied
		 
	- Virtual Function
		*virtual function
		*pure virtual function
		*abstract class
	- C++11 thread code. i.e. without pthreads
	- C++ lambda expressions, tuples etc.
	- calculate factorial ( not pthread). C++11 thread
	
	JAVA
	==============
	- Abstract class vs Interface
	- Thread Synchronization
	- two different way of thread-code
	- Reader writer problem
	- super class
	- inheritance from private or which
	- lambda expression
	
##4. Data Structure
####4.1 Topics
	- post/pre/in-order traversal of BST
	- Stack, Queue
	- Simulations
	- stack and queue interchange

####4.2 Questions
	- Explain that we can write 10n^2+7n=O(n^2), but we can not write 10n^2+7n=O(n)
	- What is heap? Build a max heap using the following number.
	- What is asymtotic upper bound of an algorithm? Can we write 10n^2+7n=O(n^2)? Explain
	- pseudo-code for implementing PUSH and POP operation
	- pseudo code for quick, merge sort. & heap sort.
	- the insert operation of doubly linked list and write the pseudo code for it
	- Construct a binary search tree from the following number:
      45,12,35,60,23,12,66,9
    - Draw a binary tree for : 10,5,2,6,14,12,15
    - implement queue using linked list.
    - implement stack using queue & vice versa
    - pre, in, post order traversal
    - Meaning and usefulness of three operand operations, which data structures should be used for them

##5. Algorithm
####5.1 Topics
	- basic algos like sorting/bfs/dfs
	- in general simulations might come (last year merge sort and DFS traversal was given)
	- BFS/DFS
	- Heap
	- Shortest Path
	- Sorting
	- MST
	- NP, NP hard, NP complete
	- greedy method of minimum spanning tree
	- time complexity of quick sort
	- heap's pseducode

####5.2 Questions
	- Draw a minimmum spanning tree of the following graph. What is the weight of your minimmum spanning tree?
	- if an algorithm needs 21 steps for a 7x7 matrix multiplication, how many steps would it need for a nxn matrix multiplication.
	- How can you search a number in O(1) average complexity.
	- Write an algorithm for finding the k-th smallest element in an array of n element. Analyze the time-complexty of your algorithm
	- greedy method of mst.

##6. Compiler and Automata
####6.1 Topics
	- Deterministic Finite Automata (DFA)
	- Non-deterministic Finite Automata (NFA)
	- Regular Expression
	- Parse tree
	- Regular Language (DFA, NFA)
	- Typical phases of a program
	- Typical phases of a compiler
	- relocatable machine code
	- CFG, Parsing
	- True/false on compiler
	- Language to Grammar
	- semantic parser
	- generator of compiler

####6.2 Questions
	- Context Free Grammar of Even length non empty palindromes comprising of { a , b , c }.
	- True false questions
	- CFG, NFA, DFA rel ques.

##7. DLD:
####7.1 Topics
	- function implementation, function reduction using K-map with don't care
	- comparator design
	- Flip Flops
	- Encoder, Decoder, MUX, Adder basics
	- Registers, Counters
	- 4*16 decoder design from two 3*8 decoders
	- state diagram
	- T flip flops

####7.2 Questions
	- Mainly k-map
	- boolean algebra(simplification)
	- 4*16 decoder design from two 3*8 decoders

##8. Computer Architecture
####8.1 Topics
	- virtual memory/address
	- cache
	- Performance comparison
	- Pipelining basics; Hazards
	- Cache related math
	- diagram of hazard
	- networking commands of windows or linux

####8.2 Questions
	- Unidirection buffer and bidirectional buffer
	- page index related math
	- Two different ways of designing control unit
	- Short question from cache , functional position of cache in computer architecture , write through and write back cache , merits and demerits
	- Fill in the blanks.

##9. OS
####9.1 Topics
	- basics
	- IPC
	- Deadlock
	- LINUX basics

####9.2 Questions
	- write down linux shell command for, replacing all .c files into .cpp files and remove all java files.
	- moving same type of files to a diferent directory
	- math from Operating System , page size and etc.
	- Explain whith example, how deadlock can be described by resource allocation graphs.
	- How page faults occur? Describe the action taken by OS when page fault occure
	- Logical address space of 16 pages of 2048 words each which is mapped with a physical memory of 64 frames. Then,
		# How many bits are required for logical address
		# How many bit required for physical address
	- Explain the concept of "Locality of refrence"
	- Draw gantt charts using FCFS, SJF and non-preemptive priority scheduling with the follwing data:
		# process, arrival time, burts time, priority
	- **Descrive four condition required for deadlock to occur
	- Distinguish between process and thread. When thread can be more efficient than process
	- Advantage and disadvantage of having small page size
	- Define turn around time and waiting time. SJF, FCFS use kre gantt chart and turn around time ber krte hbe. arrival time,burst time deya chilo

##10. Microprocessor/Microcontroller
####10.1 Topics
	- Delay loop calculation
	- 8255 Control Word
	- parallel I/O modes
	- Microprocessor theke program counter related kichu
	- difference between uP and uC
	- instruction

####10.2 Question
	- Program counter from Microprocessor
	- Difference between Microprocessor & Microcontroller
	- What is superscalar processor , why pentium is a superscalar processor but 80386 is not
	- Advantages of AVR-8086 over 80386
	- Some math about counter
	- Convert a 100 MHz clock to 50 MHz and 25 MHz by only using D flip-flops. https://www.chegg.com/homework-help/given-100-mhz-clock-signal-derive-circuit-using-d-flip-flops-chapter-7-problem-5p-solution-9780077211646-exc

##11. Database
####11.1 Topics
	- CRUD
	- write ahead
	- constraints
	- ER diagram
	- **ACID principle
	- Relational Algebra
	- Basic SQL
	- B+ tree
	- Lock related from database

####11.2 Question
	- SQL/DDL code, mainly using join, inner/left outer join.
	- Query having multiple subqueries
	- Lock related from database
	- Implementing B & B+ tree
	- Database indexing

##12. Software Engineering
####12.1 Topics
	- Critical Path Method (CPM) and PERT chart
	- alpha-beta testing
	- software validation and verification
	- waterfall model
	- design depends on software components
	
##13. ISD
####13.1 Topics
	- design patterns
	- Diagrams

####13.2 Question
	- ***Waterfall model. advantages disadvantages
	- ER diagram.
	- Class diagram.
	- Use case diagram. of e-commerce service
	- state diagram
	- alpha beta testing

##14. Network Communication
####14.1 Topics
	- IP address
	- OSI Reference model
	- Network Security
	- TCP/UDP related question
	- networking commands of windows or linux

####14.2
	- Some question about PAT , NAT.
	- Should we compress before encrypting or encrypt after compressing, why?
	- salient feature of WiMAX
	- Difference between connetionless and connection-oriented delivery
	- Difference among cicuit switching, packet switching and cell switching
	- Difference between TCP and UDP. Which protocol use TCP and which ine use UDP?
	- Network address 172.19.0.0 This network need to be grouped among several department each have maximmum 590 hosts. Assume you are the admin of a dpt which have been given the subnet number 9.Write down your subnetwork address and two valid host address.
	- Difference between logical and physical address
	- What is quality of service (QoS) of a network? How to achieve good QoS?
	- Compare TCP/IP and OSI model
	- Difference between baseband and broadband transmission
	- What are 10base2,10base5 and 10baseT ethernet LAN?
	- Difference amonth message switching, packet switching, circuit switching and cell switching.
	- Math pattern:
		- If a host on a network has the address 172.16.45.14/30, what is the subnetwork this host belongs to?
		- Your company has been given the IP Address of 199.2.1.0 /24 to subnet. You plan to put each of the 5 floors in your building on its own subnet. What is the IP range of the LAST available network once you subnet?
		- IP Corporation has been assigned the Class B network address 165.87.0.0. NuTex needs to divide the network into eight subnets. What subnet mask should be applied to the network to provide the most hosts per subnet?
		-In an organization, the network address is 172.19.0.0. The network is to be grouped among several 
		departments each having provision of maximum 590 hosts. Assume that the admin of the department has given the subnet number 9. what is the subnetwork address and write any two host address.

	
##15. AI
####15.1 Topics
	- Agent, Rational agent
	- Task environment (PEAS)
		� Performance Measure
		� Environment
		� Actuators
		� Sensors
	- A* search
		� Simulation
		� Admissible and consistent heuristics
	- IDA
	- Local search
		� Local maxima
		� Ridge, Plateau
		- Simulated Annealing
	- alpha beta pruning