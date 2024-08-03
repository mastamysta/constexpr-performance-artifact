Moving the code onto my Windows machine with an Intel i5-13400F (Raptor Lake) and compiling with MSVC, the code started behaving as expected (unexpectedly!).

The loop operating using a constexpr bound is ~50% faster:
![image](https://github.com/user-attachments/assets/5f28c0f4-5c50-42e7-b163-c70cdda99653)

The loop operating using a call to size() every iteration spends 20% of its time in size():
![image](https://github.com/user-attachments/assets/2afd470f-5710-40c7-9321-b2a88ac12d7a)
