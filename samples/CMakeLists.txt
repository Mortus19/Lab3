file(GLOB hdrs "*.h*") #Добавляем в переменную hdrs все файлы с расширением .h
file(GLOB srcs "*.cpp")#Добавляем в переменную srcs все файлы с расширением .cpp
add_executable(samples ${srcs} ${hdrs} MyQueue.h MyStack.h) #Создаем проект с именем main в него добавляются файлы из переменных ${srcs} , ${hdrs} и тд