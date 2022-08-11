//Друзья, у кого возникнут вопросы с библиотекой, прошу писать на почту: olegdizzvolkov@yandex.ru

/*---Шагайте по адресам строго по 8 байт. 4 байта данные и 4 байта CRC32----*/
#define A_ADDRESS  0
#define B_ADDRESS  8
#define C_ADDRESS  16
#define D_ADDRESS  24

/*------Это просто флаги для теста-----*/
bool flag_connect = false;
bool flag_write_A0 = false;
bool flag_read_A1 = false;
bool flag_write_B0 = false;
bool flag_read_B1 = false;
bool flag_write_C0 = false;
bool flag_read_C1 = false;
bool flag_write_D0 = false;
bool flag_read_D1 = false;

/*-----Данные разных типов-----*/
uint8_t A0 = 121;
uint8_t A1 = 0;
uint16_t B0 = 32456;
uint16_t B1 = 0;
uint32_t C0 = 357913941;
uint32_t C1 = 0;
float D0 = 3.14159f;
float D1 = 0.0f;

/*----Активируйте CRC32 на МК, чтоб функция работала правильно----*/
flag_connect = AT24xx_Connect_test();//Проверка подключения
flag_write_A0 = AT24Cxx_write_data(A_ADDRESS, (uint8_t*) &A0, sizeof(A0)); //Запись по адресу 0
flag_read_A1 = AT24Cxx_read_data(A_ADDRESS, (uint8_t*) &A1, sizeof(A1)); //Чтение с адреса 0
flag_write_B0 = AT24Cxx_write_data(B_ADDRESS, (uint8_t*) &B0, sizeof(B0));  //Запись по адресу 8
flag_read_B1 = AT24Cxx_read_data(B_ADDRESS, (uint8_t*) &B1, sizeof(B1));  //Чтение с адреса 8
flag_write_C0 = AT24Cxx_write_data(C_ADDRESS, (uint8_t*) &C0, sizeof(C0));  //Запись по адресу 16
flag_read_C1 = AT24Cxx_read_data(C_ADDRESS, (uint8_t*) &C1, sizeof(C1));  //Чтение с адреса 16
flag_write_D0 = AT24Cxx_write_data(D_ADDRESS, (uint8_t*) &D0, sizeof(D0));  //Запись по адресу 24
flag_read_D1 = AT24Cxx_read_data(D_ADDRESS, (uint8_t*) &D1, sizeof(D1));  //Чтение с адреса 24
