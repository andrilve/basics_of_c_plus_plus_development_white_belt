### Задание по программированию: A + B ###

На вход программе через стандартный ввод передаются два целых числа, по модулю не превышающие 100000. Выведите в стандартный вывод их сумму.

|     stdin    |    stdout    |
|:------------:|:------------:|
| 2 3          | 5            |
| -4 -9        | - 13         |
| -1 2         | 1            |

##### Подсказки #####
*Ваша программа должна выводить в cout только одно число — сумму введённых чисел (т.е. не надо выводить в cout входные числа или строки типа "A = ")
*Вам не надо проверять, что входные числа не превышают по модулю 100000. Мы гарантируем, что в тестирующей системе вашей программе будут подаваться только числа, удовлетворяющие указанным ограничениям

##### Пояснение #####
Если вы не знаете, как компилировать и запускать программы на C++, вы можете просмотреть видео из блока "Компиляция, запуск, отладка" и, настроив среду разработки, вернуться к этой задаче.

### Задание по программированию: Минимальная строка ###

В стандартном потоке даны три строки, разделённые пробелом. Каждая строка состоит из строчных латинских букв и имеет длину не более 30 символов. Выведите в стандартный вывод лексикографически минимальную из них.

|             stdin              |             stdout             |
|:------------------------------:|:------------------------------:|
| milk milkshake month           | milk                           |
| c a b                          | a                              |
| fire fog wood                  | fire                           |

### Задание по программированию: Уравнение ###

На вход вашей программе в стандартном вводе даны действительные коэффициенты _A_, _B_ и C уравнения _Ax² + Bx + C = 0_. Выведите все его различные действительные корни в любом порядке. Гарантируется, что хотя бы один из коэффициентов не равен нулю.

|             stdin              |             stdout             |
|:------------------------------:|:------------------------------:|
| 2 5 2                          | -0.5 -2                        |
| 2 4 2                          | -1                             |
| 2 1 2                          |                                |
| 0 4 10                         | -2.5                           |

#####  Подсказка #####

Для вычисления квадратного корня используйте функцию _sqrt_ из библиотеки _cmath_. Чтобы подключить библиотеку, в начале программы напишите
```objectivec
#include <cmath>
```
### Тренировочное задание по программированию: Деление ###

Дано два натуральных числа A и B, не превышающих 1 000 000. Напишите программу, которая вычисляет целую часть частного от деления A на B.

Если B = 0, выведите "Impossible".

|             stdin              |             stdout             |
|:------------------------------:|:------------------------------:|
| 10 2                           | 5                              |
| 3 5                            | 0                              |
| 11 0                           | Impossible                     |

### 07 Задание по программированию: Второе вхождение ###

Дана строка. Найдите в этой строке второе вхождение буквы **f** и выведите индекс этого вхождения. Если буква **f** в данной строке встречается только один раз, выведите число -1, а если не встречается ни разу, выведите число -2. Индексы нумеруются с нуля.


|             stdin              |             stdout             |
|:------------------------------:|:------------------------------:|
| comfort                        | -1                             |
| coffee                         | 3                              |
| car                            | -2                             |

### 08 Задание по программированию: Наибольший общий делитель ###

В *stdin* даны два натуральных числа. Найти их наибольший общий делитель.

#### Пример ####
|             stdin              |             stdout             |
|:------------------------------:|:------------------------------:|
| 25 27                          | 1                              |
| 12 16                          | 4                              |
| 13 13                          | 13                             |

#### Подсказка ####

Если вам не удаётся сдать задачу, вы можете воспользоваться подсказкой. Но сначала попробуйте решить её сами :)

[Подсказка](https://github.com/Hitoku/basics-of-c-plus-plus-development-white-belt/blob/master/Week_1/08%20Programming%20Assignment/help.pdf)