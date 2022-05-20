#pragma once
#include "../DXEngine.h"

class DX_API VEGraphicsDevice
{
public:
	virtual ~VEGraphicsDevice() noexcept = default;

	static VEGraphicsDevice* CreateGraphicsDevice();

protected:
	// User에게 상속을 허용하지 않는다.
	VEGraphicsDevice() = default;
};
