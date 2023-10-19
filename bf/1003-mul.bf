,          ; Read the first digit into cell 0
-          ; Subtract 48 to convert from ASCII to integer
,          ; Read the second digit into cell 1
-          ; Subtract 48 to convert from ASCII to integer
>          ; Move to cell 1 (second digit)
[          ; Start of loop to multiply
  <        ; Move to cell 0 (first digit)
  [->+<]   ; Multiply the first digit with the second digit and accumulate in cell 0
  >-       ; Move back to cell 1 (second digit) and subtract 1
]<         ; End of the loop
<.         ; Print the result as a character
10         ; Add 10 (newline character)
.
