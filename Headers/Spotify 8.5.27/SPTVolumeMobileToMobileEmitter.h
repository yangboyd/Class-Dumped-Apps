//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVolumeEventEmitter-Protocol.h"
#import "SPTVolumeFlagsManagerObserver-Protocol.h"

@class NSString;
@protocol SPTVolumeEventReceiver, SPTVolumeFlagsManager;

@interface SPTVolumeMobileToMobileEmitter : NSObject <SPTVolumeFlagsManagerObserver, SPTVolumeEventEmitter>
{
    id <SPTVolumeEventReceiver> delegate;
    id <SPTVolumeFlagsManager> _flagManager;
}

@property(readonly, nonatomic) id <SPTVolumeFlagsManager> flagManager; // @synthesize flagManager=_flagManager;
@property(nonatomic) __weak id <SPTVolumeEventReceiver> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (unsigned long long)eventForMobileToMobileEnabled:(_Bool)arg1;
- (void)mobileToMobileEnabledChanged;
- (void)emitInitialState;
- (void)dealloc;
- (void)setupObserving;
- (id)initWithFlagManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

