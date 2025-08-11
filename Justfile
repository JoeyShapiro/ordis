build:
    ~/Downloads/v/v -autofree -skip-unused -prod .
debug:
    ~/Downloads/v/v -g -autofree -skip-unused -o ordis.c .
    ~/Downloads/v/v -g -autofree -show-timings -skip-unused .
