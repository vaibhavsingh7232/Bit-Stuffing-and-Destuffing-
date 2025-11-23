🔐 Bit Stuffing & Destuffing in C

This project implements Bit Stuffing and Bit Destuffing — a widely used technique in Data Link Layer (DLL) of computer networks to prevent flag imitation in data transmission.
The program accepts a bit stream as input, performs bit stuffing, and then retrieves the original data using bit destuffing.

📌 What is Bit Stuffing?

Bit stuffing ensures that special bit patterns (like 01111110 used as frame delimiters) do not appear in the actual data.
Whenever five consecutive 1s appear in the data stream, a 0 is automatically inserted after them.

Example:

Input:  1111101
Stuffed: 11111001   (extra '0' inserted after 11111)


During destuffing, this extra 0 is removed to recover the original stream.

🧠 Program Features

✔ Accepts user input bit stream
✔ Performs bit stuffing after five consecutive 1s
✔ Performs bit destuffing to restore original data
✔ Accurate and lossless round-trip conversion

🧰 Tech Used
Component	Description
Language	C
Concepts	Data Link Layer, Bit Stuffing, Bit Destuffing
🚀 How to Run
🔹 Compile
gcc bit_stuffing.c -o bit_stuffing

🔹 Execute
./bit_stuffing

📌 Sample Output
Enter the bit stream: 111110111110
Stuffed bit stream: 1111100111110010
Destuffed bit stream: 111110111110

📂 File Description
File	Purpose
bit_stuffing.c	Program source code implementing bit stuffing & destuffing
📝 Code Overview

bitStuffing()
Scans input bit stream → inserts 0 after 5 consecutive 1s

bitDestuffing()
Scans stuffed stream → removes stuffed 0 after 5 consecutive 1s

Main function interacts with user → displays both stuffed & destuffed bitstreams.

⭐ Learning Outcomes

By using this program, you understand:

🔹 How framing works in Computer Networks
🔹 Avoiding flag pattern imitation in data transmission
🔹 Bit manipulation and string processing in C
