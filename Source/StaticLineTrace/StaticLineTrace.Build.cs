// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StaticLineTrace : ModuleRules
{
	public StaticLineTrace(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
