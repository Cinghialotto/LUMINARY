// ============================================================================================
//   AUTOGENERATED WITH BEEHIVE - DO NOT EDIT MANUALLY
// ============================================================================================
//   http://www.bigevilcorporation.co.uk
// ============================================================================================
//   Beehive and LUMINARY Engine (c) Matt Phillips 2020
// ============================================================================================


#include <Common.h>

struct ECSprite : ComponentBase
{
	unsigned int sheet;
	unsigned int currentFrame;
	unsigned int vRAMHndl;
	unsigned int animation;
	unsigned int animSubFrame;
	unsigned short animSpeed;
	unsigned char posX;
	unsigned char posY;
	unsigned char drawFlags;
	unsigned char stateFlags;
};

struct ECEnemy : ComponentBase
{
	unsigned short callbackOnHit;
};

struct Components
{
	ComponentHndl sprite;
	ComponentHndl sprite2;
	ComponentHndl enemy;
};

struct EMotobug : Entity
{
	unsigned short idleTimer;
	unsigned short velX;

	Components components;

	template <typename T>
	inline __attribute__((always_inline)) T& GetComponent(ComponentHndl hndl)
	{
		return *((T*)((unsigned int)0x00FF0000 | (unsigned int)hndl));
	}

	void OnStart();
	void OnShutdown();
	void OnUpdate();
};
