#ifndef LOGER_MODULE
#define LOGER_MODULE

#include <loger.h>
#include <notification.h>
#include <unix_crawler.h>
#include <string>
#include <vector>
#include <memory>
#include <functional>


class loger_module
{
  private:

         std::vector<std::string>                   ModulesPaths;
	 std::vector<std::shared_ptr<log_loger>>    ModuleLogers;
	 std::vector<std::shared_ptr<notify>>       ModuleCheckers;

  public:

  loger_module(std::string Name, std::string Path);
 ~loger_module();
 void RegisterCallback(std::function<void()> func,std::string FileName);
 void GetWholeLog(std::string FileName);

};


#endif
