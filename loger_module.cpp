#include <loger_module.h>
#include <memory>

loger_module::loger_module(std::string Name, std::string Path)
{
 crawler DirCrawler(Name,Path);
 ModulesPaths=DirCrawler.GetLinks();
 for(auto it:ModulesPaths)
 {
   ModuleLogers.push_back(std::make_shared<log_loger>(it));
   ModuleCheckers.push_back(std::make_shared<notify>(it));

 }

}



loger_module::~loger_module()
{
}

void loger_module::RegisterCallback(std::function<void()> func, std::string FileName)
{
for(auto it:ModuleCheckers)
{
if(it->GetFileName() == FileName)
{
 it->RegisterCallback(func);
}

}

}

void loger_module::GetWholeLog(std::string FileName)
{


}
