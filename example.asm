.data
    # Data section
    result: .asciiz "Sum: "

.text
    # Text section
    .globl main

main:
    # Initialize values
    li $s0, 10  # First integer (e.g., 10)
    li $s1, 20  # Second integer (e.g., 20)

    # Calculate the sum
    add $s2, $s0, $s1  # $s2 = $s0 + $s1

    # Display the result
    li $v0, 4
    la $a0, result
    syscall

    li $v0, 1
    move $a0, $s2  # Load the sum into $a0
    syscall

    # Exit
    li $v0, 10
    syscall
