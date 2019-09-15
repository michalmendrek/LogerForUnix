all:
	g++ --std=c++11 -o main -lpthread ./main.cpp ./loger.cpp ./notification.cpp ./unix_crawler.cpp  -I ./ 
        #./loger_module.cpp -I ./
