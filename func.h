/**
  @file ИЗМЕНЕНИЕ
  @brief ИЗМЕНЕНИЕ

  Содержит математические функции Add, Minus, Mult, Div, Pow, Mod.
*/

/**
  @brief ИЗМЕНЕНИЕ
  @param[in] a ИЗМЕНЕНИЕ
  @param[in] b ИЗМЕНЕНИЕ
  @return Результат сложения a + b
*/
int Plus(int a, int b);

/**
  @brief ИЗМЕНЕНИЕ
  @param[in] a Уменьшаемое
  @param[in] b Вычитаемое
  @return Результат вычитания a - b
*/
int Minus(int a, int b);

/**
  @brief Перемножает два числа
  @param[in] a Первое множимое
  @param[in] b Второе множимое
  @return Произведение чисел a * b
*/
int Mult(int a, int b);

/**
  @brief Делит одно число на второе
  @param[in] a Делимое
  @param[in] b Делитель
  @return Результат деления a / b.
  @note Если b = 0, функция возвращает 0.
*/
double Div(int a, int b);

/**
  @brief Возводит число в степень
  @param[in] a Основание степени
  @param[in] b Показатель степени
  @return Значение a в степени b
*/
double Pow(int a, int b);

/**
  @brief Ищет остаток от деления первого числа на второе
  @param[in] a Первое число
  @param[in] b Второе число
  @return Значение a % b
  @note Если b = 0, функция возвращает 0
*/
int Mod(int a, int b);