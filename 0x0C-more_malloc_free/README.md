1. **Task 0: malloc_checked**
   - Function `malloc_checked` allocates memory using `malloc`.
   - It returns a pointer to allocated memory.
   - If `malloc` fails, it terminates the process with an exit status of 98.

2. **Task 1: string_nconcat**
   - Function `string_nconcat` concatenates two strings.
   - It returns a pointer to a new memory space containing the concatenated strings (up to `n` bytes).
   - If the function fails, it returns NULL.

3. **Task 2: _calloc**
   - Function `_calloc` allocates memory for an array and initializes it with zeros.
   - It returns a pointer to the allocated memory.
   - Returns NULL if `nmemb` or `size` is 0 or if `malloc` fails.

4. **Task 3: array_range**
   - Function `array_range` creates an array of integers from `min` to `max`.
   - It returns a pointer to the newly created array.
   - Returns NULL if `min` is greater than `max` or if `malloc` fails.
