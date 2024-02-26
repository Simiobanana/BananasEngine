#pragma once
#include "Prerequisites.h";
class Device;

class InputLayout
{
public:
	InputLayout() = default;
	~InputLayout() {};

	void init(Device device,
		 std::vector<D3D11_INPUT_ELEMENT_DESC> layout,
		 ID3DBlob* VertexShaderData);
	
	void update();

	void render(DeviceContext& deviceContext);

	void destroy();

public:
	ID3D11InputLayout* m_inputLayout = nullptr;

};

