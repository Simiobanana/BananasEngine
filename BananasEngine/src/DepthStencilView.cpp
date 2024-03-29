#include "DepthStencilView.h"
#include "Device.h"
#include "DeviceContext.h"

/// <summary>
/// This class initializes a new instance of the DepthStencilView class
/// </summary>
/// <param name="device"> The device associated with the depth stencil view </param>
/// <param name="depthStencil"> A pointer to the depth stencil resource </param>
/// <param name="format"> The DXGI_FORMAT of the depth stencil view </param>
void DepthStencilView::init(Device device, 
                            ID3D11Resource* depthStencil, 
                            DXGI_FORMAT format) {
    if (device.m_device == nullptr) {
        WARNING("ERROR: Device::DepthStencilView::init : Error in data from params [CHECK FOR Device device]\n");
        exit(1);
    }
    else if (depthStencil == nullptr) {
        WARNING("ERROR: Device::DepthStencilView::init : Error in data from params [CHECK FOR ID3D11Resource* depthStencil]\n");
        exit(1);
    }
    else {
        D3D11_DEPTH_STENCIL_VIEW_DESC descDSV;
        memset(&descDSV, 0, sizeof(descDSV));
        descDSV.Format = format;
        descDSV.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;
        descDSV.Texture2D.MipSlice = 0;
        device.CreateDepthStencilView(depthStencil, &descDSV, &m_depthStencilView);
    }
}


void DepthStencilView::update() {
}

/// <summary>
/// Renders the depth stencil view
/// </summary>
/// <param name=" deviceContext"> The device context used for rendering </param>
void DepthStencilView::render(DeviceContext& deviceContext) {
    deviceContext.ClearDepthStencilView(m_depthStencilView, D3D11_CLEAR_DEPTH, 1.0f, 0);
}

/// <summary>
/// Destroys the depth stencil view
/// </summary>
void DepthStencilView::destroy() {
    SAFE_RELEASE(m_depthStencilView);
}
