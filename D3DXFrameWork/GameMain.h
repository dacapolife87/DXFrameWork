#pragma once
#include "d3dapp.h"
#include <d3dx9math.h>
#include <D3dx9shape.h>

class CGameMain : public CD3DApp
{
	virtual void OnInit();
	virtual void OnRender();
	virtual void OnUpdate();
	virtual void OnRelease();
	// ī�޶�
	D3DXMATRIX m_matView;
	D3DXMATRIX m_matProj;
	D3DXVECTOR3 m_Eye, m_At, m_Up;
	// ��Ʈ
	LPD3DXFONT m_pFont;


public:
	CGameMain(void);
	~CGameMain(void);
};

