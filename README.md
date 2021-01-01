# circular-list-structure-using-node-structure-spin-wheel-game-to-earn-rewards
Implement the given methods of circular list structure using node structure and pointers a) Create node structure that can store label and value (string and one integer) b) Create CircularList class, declare data members as discussed and write constructor • Write main method and create a circular list object c) Write display method that display the list each element as LABEL (VALUE). • Call this method in main to test d) Write addFirst method that accept a string and integer number and place it at start of circular list. Properly adjust the pointers. • Call this method in main to add Coins | 1500, Life | 3, and display to confirm e) Write addLast method that accept a string and integer number and place it at start of circular list. Properly adjust the pointers. • Call this method in main to add Keys | 20, and display to confirm f) Write get that accept position and return the node structure at the position, if list is empty the it return null • Call this method to get second element g) Write removeFirst method that remove first element • Call this method in main to remove and display to confirm h) Write removeLast method that removes last element • Call this method is main to remove and display to confirm i) Write add method that accept a node and position and place it at given position • Call this method to insert Shields (10) at 3rd position j) Write search method that accepts a string and return its position in the list • Call this method to find Coins k) Implement the destructor of circular link list 2. Implement a portion of game where character moves to the shop and plays the spin wheel game to earn rewards. Implement the main method by using the circular link list and ask the user to press any key to spin wheel. Then spin the wheel (It will not show on screen as we are not doing graphics) and show the earned rewards. (see the picture below) o Be realistic how a wheel can spine o While wheel is spinning show the current marker position o You can give delays using sleep_for function from thread // Example program for delay #include &lt;iostream> #include &lt;string> #include &lt;thread> #include &lt;chrono> using namespace std::this_thread; // sleep_for, sleep_until using namespace std::chrono; //for seconds, milliseconds, nanoseconds using namespace std; int main() { string name; cout &lt;&lt; "What is your name? "; getline (cin, name); sleep_for(milliseconds(100)); cout &lt;&lt; "Hello, " &lt;&lt; name &lt;&lt; "!\n"; }