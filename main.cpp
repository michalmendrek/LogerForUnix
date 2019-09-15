#include <loger.h>
#include <notification.h>
#include <unix_crawler.h>
#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;


//log_loger logs(gdzie,"")
log_loger  *ptr;

void new_data(void)
{
 cout << "new data" << endl;
 ptr->UpdateData();
 cout << ptr->ReadNewData() << endl;
}

int main()
{
vector<string> paths;

crawler obiekt("modol","/home/pi/cpp/loger_full/*");
paths=obiekt.GetLinks();

log_loger logs(paths.at(0),"");

ptr=&logs;

notify checker(paths.at(0));



checker.RegisterCallback(new_data);

logs.ReadWholeLog();
cout << logs.ReadLog() << endl;

while(1)
{

checker.epolling();
}



}
