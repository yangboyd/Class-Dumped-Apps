//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCastManagerObserver-Protocol.h"
#import "SPTGaiaDevicePickerDevicesProviderDelegate-Protocol.h"
#import "SPTGaiaHomeDeviceTooltipManagerDelegate-Protocol.h"
#import "SPTGaiaWirelessRoutesObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSString, SPTCastManager, SPTGaiaConnectDevice, SPTGaiaDeviceAppearanceMapping, SPTGaiaDevicePickerAppearanceManager, SPTGaiaDevicePickerDevicesProvider, SPTGaiaEducationDetailModelManager, SPTGaiaHomeDeviceManager, SPTGaiaHomeDeviceTooltipManager, SPTGaiaLogger, SPTGaiaSocialListeningIntegrationManager, SPTPlayerState;
@protocol SPTGaiaContextMenuModelProvider, SPTGaiaDevicePickerFlagsProvider, SPTGaiaDevicePickerViewModelDelegate, SPTGaiaWirelessRoutesAPI, SPTPlayer;

@interface SPTGaiaDevicePickerViewModel : NSObject <SPTGaiaWirelessRoutesObserver, SPTGaiaDevicePickerDevicesProviderDelegate, SPTPlayerObserver, SPTCastManagerObserver, SPTGaiaHomeDeviceTooltipManagerDelegate>
{
    _Bool _playbackRestricted;
    id <SPTGaiaDevicePickerViewModelDelegate> _delegate;
    id <SPTGaiaWirelessRoutesAPI> _wirelessRoutesManager;
    SPTGaiaDevicePickerDevicesProvider *_devicesProvider;
    id <SPTGaiaContextMenuModelProvider> _contextMenuModelProvider;
    SPTCastManager *_castManager;
    id <SPTPlayer> _player;
    SPTGaiaDeviceAppearanceMapping *_deviceIconMapper;
    SPTGaiaLogger *_logger;
    id <SPTGaiaDevicePickerFlagsProvider> _flagsProvider;
    SPTGaiaDevicePickerAppearanceManager *_appearanceManager;
    SPTGaiaEducationDetailModelManager *_educationModelManager;
    SPTGaiaSocialListeningIntegrationManager *_socialListeningManager;
    SPTGaiaHomeDeviceTooltipManager *_homeDeviceEducationManager;
    SPTGaiaHomeDeviceManager *_homeDeviceManager;
    SPTPlayerState *_lastPlayedState;
}

@property(nonatomic, getter=isPlaybackRestricted) _Bool playbackRestricted; // @synthesize playbackRestricted=_playbackRestricted;
@property(retain, nonatomic) SPTPlayerState *lastPlayedState; // @synthesize lastPlayedState=_lastPlayedState;
@property(readonly, nonatomic) SPTGaiaHomeDeviceManager *homeDeviceManager; // @synthesize homeDeviceManager=_homeDeviceManager;
@property(readonly, nonatomic) SPTGaiaHomeDeviceTooltipManager *homeDeviceEducationManager; // @synthesize homeDeviceEducationManager=_homeDeviceEducationManager;
@property(readonly, nonatomic) SPTGaiaSocialListeningIntegrationManager *socialListeningManager; // @synthesize socialListeningManager=_socialListeningManager;
@property(readonly, nonatomic) SPTGaiaEducationDetailModelManager *educationModelManager; // @synthesize educationModelManager=_educationModelManager;
@property(readonly, nonatomic) SPTGaiaDevicePickerAppearanceManager *appearanceManager; // @synthesize appearanceManager=_appearanceManager;
@property(readonly, nonatomic) id <SPTGaiaDevicePickerFlagsProvider> flagsProvider; // @synthesize flagsProvider=_flagsProvider;
@property(readonly, nonatomic) SPTGaiaLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTGaiaDeviceAppearanceMapping *deviceIconMapper; // @synthesize deviceIconMapper=_deviceIconMapper;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) __weak SPTCastManager *castManager; // @synthesize castManager=_castManager;
@property(readonly, nonatomic) id <SPTGaiaContextMenuModelProvider> contextMenuModelProvider; // @synthesize contextMenuModelProvider=_contextMenuModelProvider;
@property(readonly, nonatomic) SPTGaiaDevicePickerDevicesProvider *devicesProvider; // @synthesize devicesProvider=_devicesProvider;
@property(readonly, nonatomic) id <SPTGaiaWirelessRoutesAPI> wirelessRoutesManager; // @synthesize wirelessRoutesManager=_wirelessRoutesManager;
@property(nonatomic) __weak id <SPTGaiaDevicePickerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)homeDeviceEducationManagerDeviceShowingTooltipChanged:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)devicesProviderActiveItemDidChange:(id)arg1;
- (void)devicesProviderConnectingItemDidChange:(id)arg1;
- (void)devicesProviderItemsDidChange:(id)arg1;
- (void)wirelessActiveDeviceDidChange;
- (void)wirelessRoutesDidChangeAvailability:(_Bool)arg1;
- (void)castManager:(id)arg1 deviceConnectivityDidChange:(id)arg2;
- (void)contextMenuButtonTapped:(id)arg1;
- (void)updateContextMenuCache;
- (_Bool)isAirplayActive;
- (void)didUpdateActiveItem;
- (void)selectEducationItemAtIndexPath:(id)arg1;
- (void)selectMoreDevicesAtIndexPath:(id)arg1;
- (void)selectDevice:(id)arg1 atIndexPath:(id)arg2;
- (void)selectLocalDeviceAtIndexPath:(id)arg1;
@property(readonly, nonatomic, getter=hasDevicesAvailable) _Bool devicesAvailable;
@property(readonly, nonatomic, getter=isOffline) _Bool offline;
- (void)prepareForDisplay;
@property(readonly, nonatomic) SPTGaiaConnectDevice *activeDevice;
- (void)selectItemAtIndexPath:(id)arg1;
- (_Bool)canSelectItemAtIndexPath:(id)arg1;
- (id)cellProviderForIndexPath:(id)arg1;
- (id)headerForSection:(long long)arg1;
- (_Bool)shouldShowSocialListeningSection;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)indexOfHomeDeviceEducationCellInSection:(long long)arg1;
- (long long)typeForRowAtIndexPath:(id)arg1;
- (long long)typeForSection:(long long)arg1;
- (id)cellProviderForHomeDeviceEducationWithDevice:(id)arg1;
- (id)cellProviderForDevice:(id)arg1;
- (long long)loggingIndexFromIndexPath:(id)arg1;
- (id)deviceIndexPathFromGlobalIndexPath:(id)arg1;
- (long long)deviceSectionFromGlobalSection:(long long)arg1;
- (void)dealloc;
- (id)initWithWirelessRoutesManager:(id)arg1 devicesProvider:(id)arg2 contextMenuModelProvider:(id)arg3 castManager:(id)arg4 player:(id)arg5 deviceIconMapper:(id)arg6 logger:(id)arg7 flagsProvider:(id)arg8 appearanceManager:(id)arg9 educationModelManager:(id)arg10 socialListeningManager:(id)arg11 homeDeviceEducationManager:(id)arg12 homeDeviceManager:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

