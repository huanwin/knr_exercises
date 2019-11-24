"Verify that the expression `getchar() != EOF` is 0 or 1."

I added `system("bin/stty raw")` and broke it. Luckily I had the process running in a tmux pane and only had to kill that pane.
