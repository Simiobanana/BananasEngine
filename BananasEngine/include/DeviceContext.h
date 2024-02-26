#pragma once
#include "Prerequisites.h"

/// <summary>
/// This class representing manages rendering commands
/// </summary>
class DeviceContext
{
public:
    DeviceContext() = default;
    ~DeviceContext() { SAFE_RELEASE(m_deviceContext); };

    void
        init();

    void
        update();

    void
        render();

    void
        destroy();

    /// <summary>
    /// Clears the depth-stencil view with specified flags, depth, and stencil values?
    /// </summary>
    /// <param name="pDepthStencilView"> Is a pointer to the depth stencil view </param>
    /// <param name="ClearFlags"> Clear blind flags? </param>
    /// <param name="Depth"> Clear Depth? </param>
    /// <param name="Stencil"> Clear Stencil? </param>
    void 
    ClearDepthStencilView(ID3D11DepthStencilView* pDepthStencilView,
                               unsigned int ClearFlags,
                               float Depth,
                               unsigned int Stencil);

    /// <summary>
    /// Shader resources for textures 
    /// </summary>
    /// <param name="StartSlot"> Get starting slot to shaders </param>
    /// <param name="NumViews"> ??? </param>
    /// <param name="ppShaderResourceViews"> Array of shader resource views </param>
    void 
    PSSetShaderResources(unsigned int StartSlot,
                         unsigned int NumViews,
                         ID3D11ShaderResourceView* const* ppShaderResourceViews);

    void 
    OMSetRenderTargets(unsigned int NumViews,
                       ID3D11RenderTargetView* const* ppRenderTargetViews,
                       ID3D11DepthStencilView* pDepthStencilView);

    void
    IASetInputLayout(ID3D11InputLayout* pInputLayout);

    void 
    VSSetShader(ID3D11VertexShader* pVertexShader,
                ID3D11ClassInstance* const* ppClassInstances,
                unsigned int NumClassInstances);

    void 
    PSSetShader(ID3D11PixelShader* pPixelShader,
                ID3D11ClassInstance* const* ppClassInstances,
                unsigned int NumClassInstances);

public:
    /// <summary>
    /// This a pointer to the device context 
    /// </summary>
    ID3D11DeviceContext* m_deviceContext = nullptr;
};