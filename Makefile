all:
	g++ --std=c++11 -o main -lpthread ./main.cpp ./loger.cpp ./notification.cpp ./unix_crawler.cpp ./loger_module.cpp -I ./
