esptool --chip esp32 --port "/dev/ttyUSB0" --baud 115200 --before no_reset --after hard_reset write_flash -z --flash_mode dio --flash_freq 20m \
--flash_size detect 0x1000 /home/pikeypl/.platformio/packages/framework-arduinoespressif32/tools/sdk/bin/bootloader_dio_40m.bin \
0x8000 /home/pikeypl/PROJECTS/CoolThings/ESPRFGateway/.pioenvs/esp32thing/partitions.bin \
0xe000 /home/pikeypl/.platformio/packages/framework-arduinoespressif32/tools/partitions/boot_app0.bin \
0x10000 .pioenvs/esp32thing/firmware.bin
