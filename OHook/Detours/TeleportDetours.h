#pragma once

#include <SDK/Palia_parameters.hpp>

class PaliaOverlay;

using namespace SDK;

class TeleportDetours final {
public:
	TeleportDetours() = default;

	enum class ETeleportDirection {
		None,
		Forward,
		Right,
		Back,
		Left,
		Upwards,
		Downwards
	};
	
	static void Func_DoTeleportToTargeted();
	static void Func_DoTeleportToWaypoint(void* Params);
	static void DoGCLogic(const AValeriaCharacter* ValeriaCharacter);
	
	// To Destination
	static void TeleportPlayer(const FVector& Dest, float Offset, ETeleportDirection Direction);
	static void TeleportPlayer(const FVector& Dest) {
		TeleportPlayer(Dest, 0.0f, ETeleportDirection::None);
	}

};