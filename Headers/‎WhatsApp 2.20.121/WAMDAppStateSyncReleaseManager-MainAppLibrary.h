//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMDAppStateSyncReleaseManager.h"

#import "WAWebClientSessionListener-Protocol.h"

@interface WAMDAppStateSyncReleaseManager (MainAppLibrary) <WAWebClientSessionListener>
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)serverPropertiesDidChange;
- (void)webClientDidSetPushName:(id)arg1;
- (void)webClientDidDeleteSessionWithBrowserID:(id)arg1;
- (void)webClientDidLoginWithSession:(id)arg1;
- (void)updateFeatureFlags:(id)arg1 forSession:(id)arg2 isResume:(_Bool)arg3;
@end

