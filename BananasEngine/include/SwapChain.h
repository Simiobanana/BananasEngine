#pragma once
#include "Prerequisites.h"
class Device;
class DeviceContext;
class Window;
class Texture;

/// <summary>
/// This class responsible to presents rendered images to the screen
/// </summary>
class SwapChain {
public:
    SwapChain() = default;
    ~SwapChain() { SAFE_RELEASE(m_swapChain); };

    /// <summary>
    /// The metod is in charge to initializes the swap chain.
    /// </summary>
    /// <param name="device"> Get device used for rendering </param>
    /// <param name="deviceContext"> Get device context used for rendering </param>
    /// <param name="backBuffer"> Get back texture to use </param>
    /// <param name="window"> Get window associated with the swap chain </param>
    void
        init(Device& device,
            DeviceContext& deviceContext,
            Texture& backBuffer,
            Window window);

    void
        update();

    void
        render();

    void
        destroy();

    void
        present();

public:
    /// <summary>
    /// Pointer to the DXGI swap chain interface
    /// </summary>
    IDXGISwapChain* m_swapChain = nullptr;
    /// <summary>
    /// The type of driver used for rendering
    /// </summary>
    D3D_DRIVER_TYPE m_driverType = D3D_DRIVER_TYPE_NULL;

private:
    /// <summary>
    /// Feature level of the hardware device
    /// </summary>
    D3D_FEATURE_LEVEL m_featureLevel = D3D_FEATURE_LEVEL_11_0;

};
