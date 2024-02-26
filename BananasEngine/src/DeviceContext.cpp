#include "DeviceContext.h"

/// <summary>
/// This class clears the depth-stencil view
/// </summary>
/// <param name="pDepthStencilView"> A pointer to the depth stencil </param>
/// <param name="ClearFlags"> Clear blind flags? </param>
/// <param name="Depth"> Clear depth? </param>
/// <param name="Stencil"> Clear stencil? </param>
void DeviceContext::ClearDepthStencilView(ID3D11DepthStencilView* pDepthStencilView, 
                                         unsigned int ClearFlags,
                                         float Depth, 
                                         unsigned int Stencil) {
    if (pDepthStencilView == nullptr) {
        WARNING("ERROR: DeviceContext::ClearDepthStencilView : Error in data from params [CHECK FOR ID3D11DepthStencilView* pDepthStencilView]\n");
        exit(1);
    }
    else {
        m_deviceContext->ClearDepthStencilView(pDepthStencilView, ClearFlags, Depth, Stencil);
    }
}

/// <summary>
/// Set shader resources to device context
/// </summary>
/// <param name="StartSlot"> First slot to shader resources </param>
/// <param name="NumViews"> ??? </param>
/// <param name="ppShaderResourceViews"> A pointer to shader resource views </param>
void DeviceContext::PSSetShaderResources(unsigned int StartSlot,
                                         unsigned int NumViews, 
                                         ID3D11ShaderResourceView* const* ppShaderResourceViews) {
    if (ppShaderResourceViews == nullptr) {
        WARNING("ERROR: DeviceContext::ClearDepthStencilView : Error in data from params [CHECK FOR ID3D11ShaderResourceView* const* ppShaderResourceViews]\n");
        exit(1);
    }
    else {
        m_deviceContext->PSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    }
}

void 
DeviceContext::IASetInputLayout(ID3D11InputLayout* pInputLayout){
    m_deviceContext->IASetInputLayout(pInputLayout);
}

void DeviceContext::VSSetShader(ID3D11VertexShader* pVertexShader,
                                ID3D11ClassInstance* const* ppClassInstances, 
                                unsigned int NumClassInstances){
    m_deviceContext->VSSetShader(pVertexShader, ppClassInstances, NumClassInstances);
}

void DeviceContext::PSSetShader(ID3D11PixelShader* pPixelShader,
                                ID3D11ClassInstance* const* ppClassInstances, 
                                unsigned int NumClassInstances){
    m_deviceContext->PSSetShader(pPixelShader, ppClassInstances, NumClassInstances);
}
