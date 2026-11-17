cat > sadaf.c << 'EOF'
CC = gcc
CFLAGS = -Wall -Wextra -g -fsanitize=address
sadaf: sadaf.c ; $(CC) $(CFLAGS) -o sadaf sadaf.c
clean: ; rm -f sadaf
EOF

