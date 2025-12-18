namespace offsets {
 
    // ===== Globals =====
    uintptr_t UWorld = 0x176869E8; // updated: 0x176B9A78 -> 0x176869E8
    uintptr_t UWorldXorKey = 0xBF4617A5ULL; // updated: 0xFFFFFFFFDC445031ULL -> 0xBF4617A5ULL
    uintptr_t GNames = 0x175746C0; // not updated
    uintptr_t GObjects = 0x176515C8; // not updated
    uintptr_t GObjectsXorKey = 0xBC0BA8E; // not updated
    uintptr_t GObjectsArrayXorKey = 0xFFFFFFFF91478091ULL; // not updated
    uintptr_t GObjectsCount = 0x176515C0; // not updated
    uintptr_t StaticFindObject = 0x64618E; // not updated
 
    uintptr_t ProcessEvent = 0x83A74;
    uintptr_t ProcessEventIndex = 0x78;
 
    // ===== Player / Controller =====
    uintptr_t LocalPlayers = 0x38;
    uintptr_t PlayerController = 0x30;
    uintptr_t PlayerCameraManager = 0x368;
    uintptr_t AcknowledgedPawn = 0x358;
    uintptr_t PlayerState = 0x2D0;
    uintptr_t TeamIndex = 0x11A9;
    uintptr_t bIsDying = 0x728;
    uintptr_t bIsDBNO = 0x841;
    uintptr_t bIsABot = 0x2BA;
 
    uintptr_t Platform = 0x440;
    uintptr_t TargetedFortPawn = 0x1840;
    uintptr_t KillScore = 0x11C0;
    uintptr_t RebootCount = 0x188C;
    uintptr_t PlayerName = 0xA00;
    uintptr_t CachedPreviousWorldPlayerId = 0x9F8;
    uintptr_t RankedProgress = 0xD8;
    uintptr_t PlayerAimOffset = 0x2BF8;
 
    // ===== World =====
    uintptr_t OwningGameInstance = 0x250; // updated: 0x240 -> 0x250
    uintptr_t GameState = 0x1D8; // updated: 0x1C8 -> 0x1D8
    uintptr_t PlayerArray = 0x2C8;
    uintptr_t WorldSettings = 0x2B8;
    uintptr_t WorldGravityZ = 0x330;
    uintptr_t WorldToMeters = 0x320;
    uintptr_t WorldTick = 0x198;
 
    uintptr_t PersistentLevel = 0x40; // updated: 0x38 -> 0x40
    uintptr_t Levels = 0x1F0; // updated: 0x1E0 -> 0x1F0
 
    // ===== Actor / Pawn =====
    uintptr_t AActor = 0x38;
    uintptr_t RootComponent = 0x1B0;
    uintptr_t PawnPrivate = 0x328;
    uintptr_t MoveIgnoreActors = 0x348;
    uintptr_t SuperField = 0x40;
 
    // ===== Mesh / Components =====
    uintptr_t Mesh = 0x330;
    uintptr_t BoneArray = 0x5F0;
    uintptr_t BoneCache = 0x5F8; // updated: 0x600 -> 0x5F8
    uintptr_t MeshDeformerInstances = 0x5C0;
    uintptr_t BonesTide = 0x60;
 
    uintptr_t ComponentToWorld = 0x1E0;
    uintptr_t RelativeLocation = 0x140;
    uintptr_t RelativeRotation = 0x158;
    uintptr_t RelativeScale3D = 0x170;
    uintptr_t ComponentVelocity = 0x188;
    uintptr_t AdditionalAimOffset = 0x2BC8;
    uintptr_t LastRenderTime = 0x32C;
    uintptr_t LocationUnderReticle = 0x2A78;
 
    // ===== Camera =====
    uintptr_t CameraLocation = 0x170;
    uintptr_t CameraRotation = 0x180;
    uintptr_t CameraFOV = 0x3B4;
 
    // ===== Vehicles =====
    uintptr_t CurrentVehicle = 0x2C48;
 
    // ===== Weapons =====
    uintptr_t CurrentWeapon = 0x990;
    uintptr_t WeaponData = 0x5D8; // updated: 0x5C0 -> 0x5D8
    uintptr_t WeaponOffsetCorrection = 0x2C28;
    uintptr_t AmmoCount = 0x150C; // updated: 0x1464 -> 0x150C
    uintptr_t ReloadAnimation = 0x1928;
    uintptr_t LWProjectile_ActivateRemovedTimestamp = 0x29F8;
 
    uintptr_t ProjectileSpeed = 0x24f4;
    uintptr_t ProjectileGravity = Offsets::ProjectileSpeed + 0x4;
    uintptr_t MaxTargetingAimAdjustPerSecond = 0x2338;
    uintptr_t ServerWorldTimeSecondsDelta = 0x2E8;
 
    // ===== Items / Loot =====
    uintptr_t PrimaryPickupItemEntry = 0x3A8;
    uintptr_t ItemName = 0x40;
    uintptr_t ItemType = 0xA8;
    uintptr_t ItemTier = 0xA2;
    uintptr_t ItemRarity = 0xAA;
    uintptr_t Rarity = 0xAA;
    uintptr_t bAlreadySearched = 0xD52;
 
    // ===== Misc =====
    uintptr_t HabaneroComponent = 0x940;
};

        // UFortClientSettingsRecord
	inline constexpr uintptr_t targeting_slow = 0x770;
	inline constexpr uintptr_t scoped_slow = 0x774;
	inline constexpr uintptr_t mouse_sensitivity_x = 0x7ac;
	inline constexpr uintptr_t mouse_sensitivity_y = 0x7b0;
 
	// AFortPlayerController
	inline constexpr uintptr_t targeted_fort_pawn = 0x1840;
	
	// AFortPlayerState
	inline constexpr uintptr_t habanero_component = 0xa88;
	inline constexpr uintptr_t player_name_private = 0xa00;
	
	// AFortPlayerStateAthena
	inline constexpr uintptr_t team_index = 0x11a9;
	
	// AFortPlayerStateZone
	inline constexpr uintptr_t spectators_spectator_array = 0xba0;
	
	// UFortPlayerStateComponent_Habanero
	inline constexpr uintptr_t ranked_progress = 0xd8;
	
	// FRankedProgressReplicatedData
	inline constexpr uintptr_t rank_type = 0x0;
	inline constexpr uintptr_t rank = 0x10;
	
	// AGameStateBase
	inline constexpr uintptr_t replicated_world_time_seconds_double = 0x2e0;
	
	// AFortGameState
	inline constexpr uintptr_t matchmaking_link_id = 0x3b8;
	inline constexpr uintptr_t game_session_id = 0x568;
	
	// AFortGameStateAthena
	inline constexpr uintptr_t default_battle_bus = 0x2078;
	inline constexpr uintptr_t team_flight_paths = 0x2080;
	
	// ULevel
	inline constexpr uintptr_t actors = 0x190;
	inline constexpr uintptr_t world_settings = 0x2b8;
	
	// AActor
	inline constexpr uintptr_t custom_time_dilation = 0x68;
	inline constexpr uintptr_t owner = 0x158;
	inline constexpr uintptr_t net_driver_name = 0x160;
	inline constexpr uintptr_t role = 0x164;
	inline constexpr uintptr_t net_dormancy = 0x165;
	inline constexpr uintptr_t spawn_collision_handling_method = 0x166;
	inline constexpr uintptr_t auto_receive_input = 0x167;
	inline constexpr uintptr_t children = 0x1a0;
	
	// AFortPlayerPawn
	inline constexpr uintptr_t cosmetic_loadout = 0x30a8;
	
	// AFortPlayerPawnAthena
	inline constexpr uintptr_t revive_from_dbno_time = 0x4fe0;
	inline constexpr uintptr_t cached_dbno_invulnerable_time = 0x4ff4;
	inline constexpr uintptr_t custom_depth_component = 0x5040;
	
	// UFortPawnComponent_CustomDepth
	inline constexpr uintptr_t b_enable_render_custom_depth = 0xd0;
	inline constexpr uintptr_t default_highlighting_data = 0xf0;
	
	// FFortAthenaLoadout
	inline constexpr uintptr_t character = 0xb0;
	
	// USceneComponent
	inline constexpr uintptr_t relative_scale_3d = 0x170;
	
	// UPrimitiveComponent
	inline constexpr uintptr_t last_render_time_on_screen = 0x32c;
	
	// AFortWeapon
	inline constexpr uintptr_t b_is_targeting = 0x1506;
	
	// AFortWeaponRanged
	inline constexpr uintptr_t b_use_scope_targeting = 0x2129;
	
	// UFortItemDefinition
	inline constexpr uintptr_t item_type = 0xa8;
	inline constexpr uintptr_t primary_asset_id_item_type_override = 0xa9;
	
	// AWorldSettings
	inline constexpr uintptr_t time_dilation = 0x3e0;
	inline constexpr uintptr_t cinematic_time_dilation = 0x3e4;
	inline constexpr uintptr_t demo_play_time_dilation = 0x3e8;
	inline constexpr uintptr_t min_global_time_dilation = 0x3ec;
	inline constexpr uintptr_t max_global_time_dilation = 0x3f0;
	
	// AFortWorldSettings
	inline constexpr uintptr_t vehicle_manager = 0xa10;
	
	// AFortVehicleManager
	inline constexpr uintptr_t vehicles = 0x2d8;
	
	// AHUD
	inline constexpr uintptr_t debug_text_list = 0x310;
	
	// ULineBatchComponent
	inline constexpr uintptr_t batched_lines = 0x518;
	inline constexpr uintptr_t batched_points = 0x528;
	inline constexpr uintptr_t default_life_time = 0x538;
	
	// UPlayerInput
	inline constexpr uintptr_t key_state_map = 0x2e0;
	
	// FKey
	inline constexpr uintptr_t key_details = 0x8;
	
	// FKeyDetails
	inline constexpr uintptr_t long_display_name = 0x58;
	
	// FText
	inline constexpr uintptr_t first_string = 0x20;
	
	// UObject
	inline constexpr uintptr_t outer_private = 0x8;
	
	// UEngine
	inline constexpr uintptr_t asset_manager = 0x2f0;
	
	// UFortAssetManager
	inline constexpr uintptr_t game_data_common = 0x5f0;
	inline constexpr uintptr_t game_data_cosmetics = 0x638;
	
	// UFortGameData
	inline constexpr uintptr_t quest_indicator_data = 0x408;
	
	// UFortQuestIndicatorData
	inline constexpr uintptr_t challenge_maps_poi_data = 0x160;
 
        // APlayerController
 
	inline constexpr uintptr_t my_hud = 0x360;
	inline constexpr uintptr_t local_player_cached_lod_distance_factor = 0x3b4;
	inline constexpr uintptr_t player_input = 0x428;
 
	// ULocalPlayer
	inline constexpr uintptr_t viewport_client = 0x78;
 
        // UWorld
         inline constexpr uintptr_t persistent_level = 0x40;
	 inline constexpr uintptr_t levels = 0x1f0;
 
	inline constexpr uintptr_t view_locations_rendered_last_frame = 0x180;
	inline constexpr uintptr_t cached_view_info_rendered_last_frame = 0x190;
