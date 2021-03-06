//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEDeviceCapabilities-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface CastDeviceCapabilities : NSObject <HMEDeviceCapabilities, NSCopying>
{
    NSDictionary *_capabilities;
    long long _deviceType;
}

+ (_Bool)hasValidValues:(id)arg1;
+ (_Bool)hasValidKeys:(id)arg1;
+ (_Bool)isValidKey:(id)arg1;
+ (id)validKeys;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)hasValueForKey:(id)arg1;
@property(readonly, nonatomic, getter=isDisableGoogleDNSSupported) _Bool disableGoogleDNSSupported;
@property(readonly, nonatomic, getter=isRenamingSupported) _Bool renamingSupported;
@property(readonly, nonatomic, getter=isSurroundSoundSupported) _Bool surroundSoundSupported;
@property(readonly, nonatomic, getter=isCloudSettingsSupported) _Bool cloudSettingsSupported;
@property(readonly, nonatomic, getter=isReverseControlsSupported) _Bool reverseControlsSupported;
@property(readonly, nonatomic, getter=isWifiSupported) _Bool wifiSupported;
@property(readonly, nonatomic, getter=isWifiRegulatoryDomainLocked) _Bool wifiRegulatoryDomainLocked;
@property(readonly, nonatomic, getter=isMultichannelGroupSupported) _Bool multichannelGroupSupported;
@property(readonly, nonatomic, getter=isTTSVolumeOffsetSupported) _Bool ttsVolumeOffsetSupported;
@property(readonly, nonatomic, getter=isSeparateTTSVolumeSupported) _Bool separateTTSVolumeSupported;
@property(readonly, nonatomic, getter=isRoomEQSupported) _Bool roomEQSupported;
@property(readonly, nonatomic, getter=isUserEQSupported) _Bool userEQSupported;
@property(readonly, nonatomic, getter=areSystemSoundEffectsSupported) _Bool systemSoundEffectsSupported;
@property(readonly, nonatomic, getter=isStatsSupported) _Bool statsSupported;
@property(readonly, nonatomic, getter=isSetupSupported) _Bool setupSupported;
@property(readonly, nonatomic, getter=isDisplayThemeSupported) _Bool displayThemeSupported;
@property(readonly, nonatomic, getter=isAdaptiveBrightnessSupported) _Bool adaptiveBrightnessSupported;
@property(readonly, nonatomic, getter=isRemoteDuckingSupported) _Bool remoteDuckingSupported;
@property(readonly, nonatomic, getter=isRebootSupported) _Bool rebootSupported;
@property(readonly, nonatomic, getter=isPreviewChannelSupported) _Bool previewChannelSupported;
@property(readonly, nonatomic, getter=isOpencastSupported) _Bool opencastSupported;
@property(readonly, nonatomic, getter=isNightModeSupported) _Bool nightModeSupported;
@property(readonly, nonatomic, getter=isMultizoneSupported) _Bool multizoneSupported;
@property(readonly, nonatomic, getter=isMultiUserSupported) _Bool multiUserSupported;
@property(readonly, nonatomic, getter=isHotspotSupported) _Bool hotspotSupported;
@property(readonly, nonatomic, getter=isHTTPSSupported) _Bool HTTPSSupported;
@property(readonly, nonatomic, getter=isHiResAudioSupported) _Bool hiResAudioSupported;
@property(readonly, nonatomic, getter=isHDMIPreferHighFPSSupported) _Bool HDMIPreferHighFPSSupported;
@property(readonly, nonatomic, getter=isHDMIPrefer50HzSupported) _Bool HDMIPrefer50HzSupported;
@property(readonly, nonatomic, getter=isFDRSupported) _Bool FDRSupported;
@property(readonly, nonatomic, getter=isWeaveSupported) _Bool weaveSupported;
@property(readonly, nonatomic, getter=isHD4kVideoSupported) _Bool HD4kVideoSupported;
@property(readonly, nonatomic, getter=isLimitedDisplaySupported) _Bool limitedDisplaySupported;
@property(readonly, nonatomic, getter=isDisplaySupported) _Bool displaySupported;
@property(readonly, nonatomic, getter=isCloudcastSupported) _Bool cloudcastSupported;
@property(readonly, nonatomic, getter=isBluetoothSourceSupported) _Bool bluetoothSourceSupported;
@property(readonly, nonatomic, getter=isBluetoothManagementSupported) _Bool bluetoothManagementSupported;
@property(readonly, nonatomic, getter=isBLESupported) _Bool BLESupported;
@property(readonly, nonatomic, getter=isAudioHDRSupported) _Bool audioHDRSupported;
@property(readonly, nonatomic, getter=isFaceMatchSupported) _Bool faceMatchSupported;
@property(readonly, nonatomic, getter=isCameraAvailable) _Bool cameraAvailable;
@property(readonly, nonatomic, getter=isAssistantDisplay) _Bool assistantDisplay;
@property(readonly, nonatomic, getter=isAssistantSupported) _Bool assistantSupported;
@property(readonly, nonatomic, getter=isAssistantMuteCheckDuringOOBESupported) _Bool assistantMuteCheckDuringOOBESupported;
@property(readonly, nonatomic, getter=isAOGHSupported) _Bool AOGHSupported;
- (id)initWithJSONObject:(id)arg1 deviceType:(long long)arg2;
- (id)initWithBluetoothCapabilitiesBitMap:(unsigned char)arg1 deviceType:(long long)arg2;
- (id)initWithDeviceType:(long long)arg1;
- (id)initWithCapabilities:(id)arg1 deviceType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

