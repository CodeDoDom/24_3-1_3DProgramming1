#include "stdafx.h"
#include "Menu.h"
#include "GraphicsPipeline.h"

void Menu::BuildObjects()
{
	CCubeMesh* pCubeMesh = new CCubeMesh(1.0f, 1.0f, 1.0f);

	m_nObjects = 47;
	m_ppObjects = new CGameObject * [m_nObjects];

	CExplosiveObject* pExplosiveObject = new CExplosiveObject();
	// S
	{
		pExplosiveObject->SetMesh(pCubeMesh);
		pExplosiveObject->SetColor(RGB(0, 0, 0));
		pExplosiveObject->SetPosition(-10.0f, 3.0f, 0.0f);
		pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
		pExplosiveObject->SetRotationSpeed(60.0f);
		pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
		pExplosiveObject->SetMovingSpeed(0.0f);
		m_ppObjects[0] = pExplosiveObject;

		pExplosiveObject = new CExplosiveObject();
		pExplosiveObject->SetMesh(pCubeMesh);
		pExplosiveObject->SetColor(RGB(0, 0, 0));
		pExplosiveObject->SetPosition(-9.0f, 3.0f, 0.0f);
		pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
		pExplosiveObject->SetRotationSpeed(60.0f);
		pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
		pExplosiveObject->SetMovingSpeed(0.0f);
		m_ppObjects[1] = pExplosiveObject;

		pExplosiveObject = new CExplosiveObject();
		pExplosiveObject->SetMesh(pCubeMesh);
		pExplosiveObject->SetColor(RGB(0, 0, 0));
		pExplosiveObject->SetPosition(-8.0f, 2.0f, 0.0f);
		pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 0.0f));
		pExplosiveObject->SetRotationSpeed(60.0f);
		pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
		pExplosiveObject->SetMovingSpeed(0.0f);
		m_ppObjects[2] = pExplosiveObject;

		pExplosiveObject = new CExplosiveObject();
		pExplosiveObject->SetMesh(pCubeMesh);
		pExplosiveObject->SetColor(RGB(0, 0, 0));
		pExplosiveObject->SetPosition(-9.0f, 1.0f, 0.0f);
		pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
		pExplosiveObject->SetRotationSpeed(60.0f);
		pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
		pExplosiveObject->SetMovingSpeed(0.0f);
		m_ppObjects[3] = pExplosiveObject;

		pExplosiveObject = new CExplosiveObject();
		pExplosiveObject->SetMesh(pCubeMesh);
		pExplosiveObject->SetColor(RGB(0, 0, 0));
		pExplosiveObject->SetPosition(-10.0f, 1.0f, 0.0f);
		pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
		pExplosiveObject->SetRotationSpeed(60.0f);
		pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
		pExplosiveObject->SetMovingSpeed(0.0f);
		m_ppObjects[4] = pExplosiveObject;

		pExplosiveObject = new CExplosiveObject();
		pExplosiveObject->SetMesh(pCubeMesh);
		pExplosiveObject->SetColor(RGB(0, 0, 0));
		pExplosiveObject->SetPosition(-10.0f, 4.0f, 0.0f);
		pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
		pExplosiveObject->SetRotationSpeed(60.0f);
		pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
		pExplosiveObject->SetMovingSpeed(0.0f);
		m_ppObjects[5] = pExplosiveObject;

		pExplosiveObject = new CExplosiveObject();
		pExplosiveObject->SetMesh(pCubeMesh);
		pExplosiveObject->SetColor(RGB(0, 0, 0));
		pExplosiveObject->SetPosition(-9.0f, 5.0f, 0.0f);
		pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
		pExplosiveObject->SetRotationSpeed(60.0f);
		pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
		pExplosiveObject->SetMovingSpeed(0.0f);
		m_ppObjects[6] = pExplosiveObject;

		pExplosiveObject = new CExplosiveObject();
		pExplosiveObject->SetMesh(pCubeMesh);
		pExplosiveObject->SetColor(RGB(0, 0, 0));
		pExplosiveObject->SetPosition(-10.0f, 5.0f, 0.0f);
		pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
		pExplosiveObject->SetRotationSpeed(60.0f);
		pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
		pExplosiveObject->SetMovingSpeed(0.0f);
		m_ppObjects[7] = pExplosiveObject;

		pExplosiveObject = new CExplosiveObject();
		pExplosiveObject->SetMesh(pCubeMesh);
		pExplosiveObject->SetColor(RGB(0, 0, 0));
		pExplosiveObject->SetPosition(-8.0f, 5.0f, 0.0f);
		pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
		pExplosiveObject->SetRotationSpeed(60.0f);
		pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
		pExplosiveObject->SetMovingSpeed(0.0f);
		m_ppObjects[8] = pExplosiveObject;

		pExplosiveObject = new CExplosiveObject();
		pExplosiveObject->SetMesh(pCubeMesh);
		pExplosiveObject->SetColor(RGB(0, 0, 0));
		pExplosiveObject->SetPosition(-8.0f, 3.0f, 0.0f);
		pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
		pExplosiveObject->SetRotationSpeed(60.0f);
		pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
		pExplosiveObject->SetMovingSpeed(0.0f);
		m_ppObjects[9] = pExplosiveObject;

		pExplosiveObject = new CExplosiveObject();
		pExplosiveObject->SetMesh(pCubeMesh);
		pExplosiveObject->SetColor(RGB(0, 0, 0));
		pExplosiveObject->SetPosition(-8.0f, 1.0f, 0.0f);
		pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
		pExplosiveObject->SetRotationSpeed(60.0f);
		pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
		pExplosiveObject->SetMovingSpeed(0.0f);
		m_ppObjects[10] = pExplosiveObject;
	}

	// T
	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(-5.0f, 1.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[11] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(-5.0f, 2.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[12] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(-5.0f, 3.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[13] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(-5.0f, 4.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[14] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(-5.0f, 5.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[15] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(-6.0f, 5.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[16] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(-4.0f, 5.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[17] = pExplosiveObject;

	// A
	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(-3.0f, 1.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[18] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(-3.0f, 2.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[19] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(-2.0f, 3.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[20] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(-2.0f, 4.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[21] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(-1.0f, 5.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[22] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(-1.0f, 3.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[23] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(0.0f, 3.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[24] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(0.0f, 4.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[25] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(1.0f, 1.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[26] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(1.0f, 2.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[27] = pExplosiveObject;

	// R
	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(3.0f, 1.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[28] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(3.0f, 2.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[29] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(3.0f, 3.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[30] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(3.0f, 4.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[31] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(3.0f, 5.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[32] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(4.0f, 5.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[33] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(5.0f, 5.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[34] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(6.0f, 4.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[35] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(5.0f, 3.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[36] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(4.0f, 3.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[37] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(6.0f, 2.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[38] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(6.0f, 1.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[39] = pExplosiveObject;

	// T
	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(9.0f, 1.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[40] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(9.0f, 2.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[41] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(9.0f, 3.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[42] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(9.0f, 4.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[43] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(9.0f, 5.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[44] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(8.0f, 5.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[45] = pExplosiveObject;

	pExplosiveObject = new CExplosiveObject();
	pExplosiveObject->SetMesh(pCubeMesh);
	pExplosiveObject->SetColor(RGB(0, 0, 0));
	pExplosiveObject->SetPosition(10.0f, 5.0f, 0.0f);
	pExplosiveObject->SetRotationAxis(XMFLOAT3(0.0f, 1.0f, 1.0f));
	pExplosiveObject->SetRotationSpeed(60.0f);
	pExplosiveObject->SetMovingDirection(XMFLOAT3(0.0f, 0.0f, 0.0f));
	pExplosiveObject->SetMovingSpeed(0.0f);
	m_ppObjects[46] = pExplosiveObject;

#ifdef _WITH_DRAW_AXIS
	m_pWorldAxis = new CGameObject();
	CAxisMesh* pAxisMesh = new CAxisMesh(0.5f, 0.5f, 0.5f);
	m_pWorldAxis->SetMesh(pAxisMesh);
#endif
}

void Menu::ReleaseObjects()
{
	if (CExplosiveObject::m_pExplosionMesh) CExplosiveObject::m_pExplosionMesh->Release();

	for (int i = 0; i < m_nObjects; i++) if (m_ppObjects[i]) delete m_ppObjects[i];
	if (m_ppObjects) delete[] m_ppObjects;

}

void Menu::Animate(float fElapsedTime)
{
	for (int i = 0; i < m_nObjects; i++) m_ppObjects[i]->Animate(fElapsedTime);
}

void Menu::Render(HDC hDCFrameBuffer, CCamera* pCamera)
{
	CGraphicsPipeline::SetViewport(&pCamera->m_Viewport);

	CGraphicsPipeline::SetViewPerspectiveProjectTransform(&pCamera->m_xmf4x4ViewPerspectiveProject);
	for (int i = 0; i < m_nObjects; i++) m_ppObjects[i]->Render(hDCFrameBuffer, pCamera);
}

CGameObject* Menu::PickObjectPointedByCursor(int xClient, int yClient, CCamera* pCamera)
{
	XMFLOAT3 xmf3PickPosition;
	xmf3PickPosition.x = (((2.0f * xClient) / (float)pCamera->m_Viewport.m_nWidth) - 1) / pCamera->m_xmf4x4PerspectiveProject._11;
	xmf3PickPosition.y = -(((2.0f * yClient) / (float)pCamera->m_Viewport.m_nHeight) - 1) / pCamera->m_xmf4x4PerspectiveProject._22;
	xmf3PickPosition.z = 1.0f;

	XMVECTOR xmvPickPosition = XMLoadFloat3(&xmf3PickPosition);
	XMMATRIX xmmtxView = XMLoadFloat4x4(&pCamera->m_xmf4x4View);

	int nIntersected = 0;
	float fNearestHitDistance = FLT_MAX;
	CGameObject* pNearestObject = NULL;
	for (int i = 0; i < m_nObjects; i++)
	{
		float fHitDistance = FLT_MAX;
		nIntersected = m_ppObjects[i]->PickObjectByRayIntersection(xmvPickPosition, xmmtxView, &fHitDistance);
		if ((nIntersected > 0) && (fHitDistance < fNearestHitDistance))
		{
			fNearestHitDistance = fHitDistance;
			pNearestObject = m_ppObjects[i];
		}
	}
	return(pNearestObject);
}
