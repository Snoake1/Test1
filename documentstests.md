

# Модуль [roots]  
## Метод [ASSERT_EQ]  
### Тест №1  
Цель: Проверить возвращаемое значение  
Входные данные 1,6,5,&x1,&x2  
Ожидаемый результат 2  
### Тест №2  
Цель: Проверить значение двух корней  
Входные данные: 1,6,5,&x1,&x2  
Ожидаемый результат: -1.0;-5.0  
Описание процесса: Необходимо создать x1 и x2 для работы функции  

# Модуль [roots]  
## Метод [ASSERT_EQ]  
### Тест №1  
Цель: Проверить возвращаемое значение  
Входные данные 1,2,1,&x1,&x2  
Ожидаемый результат 1  
### Тест №2  
Цель: Проверить значение двух корней  
Входные данные: 1,2,1,&x1,&x2  
Ожидаемый результат: -1.0;0.0  
Описание процесса: Необходимо создать x1 и x2 для работы функции  

# Модуль [roots]  
## Метод [ASSERT_EQ]  
### Тест №1  
Цель: Проверить возвращаемое значение  
Входные данные 0,3,-3,&x1,&x2  
Ожидаемый результат 1  
### Тест №2  
Цель: Проверить значение корня  
Входные данные: 1,3-3,,&x1,&x2  
Ожидаемый результат: 1.0;0.0  
Описание процесса: Необходимо создать x1 и x2 для работы функции  

# Модуль [roots]  
## Метод [ASSERT_EQ]  
### Тест №1  
Цель: Проверить возвращаемое значение    
Входные данные 0,0,3,&x1,&x2    
Ожидаемый результат 0  
### Тест №2    
Цель: Проверить что корней нет    
Входные данные: 0,0,3,&x1,&x2    
Ожидаемый результат: 0.0;0.0    
Описание процесса: Необходимо создать x1 и x2 для работы функции   

# Модуль [roots]  
## Метод [ASSERT_LT, ASSERT_GT]  
### Тест №1  
Цель: Проверить возвращаемое значение  
Входные данные 1,7,11,&x1,&x2  
Ожидаемый результат 2
### Тест №2  
Цель: Проверить значение двух корней  
Входные данные: 1,7,11,&x1,&x2  
Ожидаемый результат: >-3;<-4.0  
Описание процесса: Необходимо создать x1 и x2 для работы функции  

# Модуль [roots]  
## Метод [ASSERT_EQ]  
### Тест №1  
Цель: Проверить возвращаемое значение  
Входные данные 1,1,3,&x1,&x2  
Ожидаемый результат -1
### Тест №2  
Цель: Проверить что корней нет 
Входные данные: 1,1,3,&x1,&x2  
Ожидаемый результат: 0.0;0.0  
Описание процесса: Необходимо создать x1 и x2 для работы функции 

# Модуль [returnvalue]  
## Метод [ASSERT_EQ]  
### Тест №1  
Цель: Проверить возвращаемое значение, когда все аргументы 0  
Входные данные: 0,0,0,&x1,&x2  
Ожидаемый результат: -1.0  
Описание процесса: Необходимо создать x1 и x2 для работы функции  
