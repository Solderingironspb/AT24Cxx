## Библиотека для работы с микросхемой памяти EEPROM типа AT24Cxx
![AT24C](https://user-images.githubusercontent.com/68805120/139391755-91df9004-631e-46ed-99dd-d2aa4cb19c69.jpg)
##
Описание:
```
Микросхема памяти EEPROM типа AT24Cxx имеет "хх" килобит данных ( т.е. хх/8 килобайта )
Модели бывают следущие:
(частота шины I2C зависит от напряжения питания 100 kHz (1.8V, 2.5V, 2.7V) and 400 kHz (5V)---------------------------
AT24C01   128  слов по 8 бит 	(1 килобит)		16 страниц, каждая емкостью по 8 байт		размер адреса памяти 7-bit
AT24C02   256  слов по 8 бит 	(2 килобит)		32 страниц, каждая емкостью по 8 байт		размер адреса памяти 8-bit
AT24C04   512  слов по 8 бит 	(4 килобит)		32 страниц, каждая емкостью по 16 байт	размер адреса памяти 9-bit
AT24C08   1024 слов по 8 бит 	(8 килобит)		64 страниц, каждая емкостью по 16 байт	размер адреса памяти 10-bit
AT24C16   2048 слов по 8 бит 	(16 килобит)	128 страниц, каждая емкостью по 16 байт	размер адреса памяти 11-bit

(частота шины I2C зависит от напряжения питания 100 kHz (1.8V, 2.5V, 2.7V) and 400 kHz (5V)---------------------------
AT24C32   4096	 слов по 8 бит 	(32 килобит)	128 страниц, каждая емкостью по 32 байта	размер адреса памяти 12-bit
AT24C64   8192	 слов по 8 бит	(64 килобит)	256 страниц, каждая емкостью по 32 байта	размер адреса памяти 13-bit

(частота шины I2C зависит от напряжения питания 1 MHz (5V), 400 kHz (2.7V, 2.5V) and 100 kHz (1.8V )------------------
AT24C128  16,384 слов по 8 бит	(128 килобит)	256 страниц, каждая емкостью по 64 байта	размер адреса памяти 14-bit
AT24C256  32,768 слов по 8 бит	(256 килобит)	512 страниц, каждая емкостью по 64 байта	размер адреса памяти 15-bit

(частота шины I2C зависит от напряжения питания 1 MHz (5V), 400 kHz (2.7V, 2.5V) and 100 kHz (1.8V )-----------------
AT24C512  65,536 слов по 8 бит	(512 килобит)	512 страниц, каждая емкостью по 128 байта	размер адреса памяти 16-bit

ВАЖНО!
За 1 раз НЕЛЬЗЯ записать больше чем размер 1 страницы.
Если записать больше, чем размер 1 страницы - то страница запишется до конца и все. На следующую страницу запись не произведется.

Читать же можно хоть всю память целиком.
Для указания адреса в памяти отправляем 1 или 2 байта, в зависимости от размера адреса памяти.

В стертом состоянии, вся память EEPROM заполнена единицами (все ячейки содержат значение слова данных 0xFF).

Vcc = от 1.7V до 5.5V

Пин WP ( write protect ) - служит для блокировки записи.(Читать можно в любом случае).
Когда вход защиты от записи подключен к Vcc, верхний квадрант памяти (1800-1FFFH)
защищен от операций записи. Для нормальной работы записи пин WP должен быть заземлен.
 
 ```
 
**[[Скачать]](https://github.com/Solderingironspb/AT24Cxx/archive/refs/heads/main.zip)**
**[[Главная страница]](https://github.com/Solderingironspb/Lessons-Stm32/blob/master/README.md)**
