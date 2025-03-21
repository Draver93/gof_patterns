#include <iostream>
#include <vector>

#include "Creational/Singleton/Singleton.h"
#include "Creational/Prototype/Prototype.h"
#include "Creational/FactoryMethod/FactoryMethod.h"
#include "Creational/AbstractFactory/AbstractFactory.h"
#include "Creational/Builder/Builder.h"

#include "Behavioral/ChainOfResponsibility/ChainOfResponsibility.h"
#include "Behavioral/Command/Command.h"
#include "Behavioral/Interpreter/Interpreter.h"
#include "Behavioral/Observer/Observer.h"

#include "Structural/Proxy/Proxy.h"
#include "Structural/Adpater/Adapter.h"

int main() {
	int ret = 0;

	std::vector<std::shared_ptr<Pattern>> patterns;
	patterns.push_back(std::make_shared<SingletonPattern>());
	patterns.push_back(std::make_shared<PrototypePattern>());
	patterns.push_back(std::make_shared<FactoryMethodPattern>());
	patterns.push_back(std::make_shared<BuilderPattern>());
	patterns.push_back(std::make_shared<AbstractFactoryPattern>());

	patterns.push_back(std::make_shared<ChainOfResponsibilityPattern>());
	patterns.push_back(std::make_shared<CommandPattern>());
	patterns.push_back(std::make_shared<InterpreterPattern>());
	patterns.push_back(std::make_shared<ObserverPattern>());
	
	patterns.push_back(std::make_shared<ProxyPattern>());
	patterns.push_back(std::make_shared<AdapterPattern>());

	for (auto& pattern : patterns) 
	{
		std::cout << "\n" << pattern->get_info() << std::endl;
		ret = pattern->run();
		if (ret != 0) break;
	}

	patterns.clear();
	return ret;
}