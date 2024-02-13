#pragma once
#include "Prerequisites.h"

class Device;
class DeviceContext;

/// <summary>
/// This class representing create Depth stencil view
/// </summary>
class DepthStencilView {
public:
    DepthStencilView() = default;
    ~DepthStencilView() { SAFE_RELEASE(m_depthStencilView); };

    /// <summary>
    /// This void initializes the depth stencil view 
    /// </summary>
    /// <param name="device"> ??? </param>
    /// <param name="depthStencil"> Is a pointer to depth stencil </param>
    /// <param name="format"> ??? </param>
    void
        init(Device device, ID3D11Resource* depthStencil, DXGI_FORMAT format);

    void
        update();

    /// <summary>
    /// This method renders using the specified device context
    /// </summary>
    /// <param name="deviceContext"> The device context is used for rendering </param>
    void
        render(DeviceContext& deviceContext);

    void
        destroy();

public:
    /// <summary>
    /// Is a pointer to the depth stencil view interface
    /// </summary>
    ID3D11DepthStencilView* m_depthStencilView = nullptr;

};