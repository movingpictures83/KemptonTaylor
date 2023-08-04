#ifndef KEMPTONTAYLORPLUGIN_H
#define KEMPTONTAYLORPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class KemptonTaylorPlugin : public Plugin
{
public: 
 std::string toString() {return "KemptonTaylor";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
