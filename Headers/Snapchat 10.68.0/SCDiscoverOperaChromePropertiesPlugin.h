//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaPlaylistFeaturePlugin.h"

#import "SCOperaPlaylistItemExtraPropertiesProvider-Protocol.h"

@class NSString;

@interface SCDiscoverOperaChromePropertiesPlugin : SCOperaPlaylistFeaturePlugin <SCOperaPlaylistItemExtraPropertiesProvider>
{
    _Bool _isDownArrowExperimentEnabled;
}

- (void)_checkAndFireOperaDownButtonToggledOffEventIfNeccesary;
- (void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)extraPropertiesProvider;
- (void)setPlaylistItemController:(id)arg1;
- (void)addEventListenersWithEventAnnouncer:(id)arg1;
- (void)setExtraInfo:(id)arg1;
- (id)playlistDataSource;
- (id)type;
- (id)initWithExperimentManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

