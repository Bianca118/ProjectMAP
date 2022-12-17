FROM gcc:latest
WORKDIR /usr/src/proiect
COPY sort.c .
RUN gcc sort.c -o proiect 
CMD ["./proiect"]