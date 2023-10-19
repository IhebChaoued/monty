,          ; Read the first digit into cell 0
-          ; Subtract 48 to convert from ASCII to integer
,          ; Read the second digit into cell 1
-          ; Subtract 48 to convert from ASCII to integer
[          ; Start of loop to multiply
  -        ; Subtract 1 from the second digit (cell 1)
  >        ; Move to cell 2 (used for accumulation)
  +        ; Add 1 to the accumulation (cell 2)
  <        ; Move back to cell 1
  [->+<]   ; Multiply the first digit (cell 0) with the accumulation (cell 2)
  >>-      ; Move to cell 0 (first digit) and subtract 1
]          ; End of the loop
<<.         ; Print the result as a character
