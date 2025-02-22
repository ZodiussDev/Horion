#pragma once
#include "Module.h"
class Xray : public IModule {
public:
	bool* smoothLightningSetting = nullptr;
	bool gotSmoothInfo = false;
	bool wasSmooth = false;

	Xray();
	~Xray();

	// Inherited via IModule
	virtual const char* getModuleName() override;
	virtual void onLevelRender() override;
	virtual void onDisable() override;
};
