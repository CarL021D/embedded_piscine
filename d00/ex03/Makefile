SRC = main.c
OBJS = main.o
TARGET = main.bin
TARGET_HEX = main.hex
F_CPU = 20000000
CC = avr-gcc
FLAGS = -mmcu=atmega328p
PORT =/dev/ttyACM0

all: hex flash

hex:
	$(CC) -Os -DF_CPU=$(F_CPU) $(FLAGS) -c -o $(OBJS) $(SRC)
	$(CC) $(FLAGS) $(OBJS) -o $(TARGET)
	avr-objcopy -O ihex $(TARGET) $(TARGET_HEX)

flash:
	avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyUSB0 -b 115200 -U flash:w:$(TARGET_HEX)

clean:
	rm -f $(OBJS)
	rm -f $(TARGET)
	rm -f $(TARGET_HEX)