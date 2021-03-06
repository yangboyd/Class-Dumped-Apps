//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TAGContainerCallback-Protocol.h"

@class NSString, TAGContainer, TAGManager;

@interface HMEOpenAppTracker : NSObject <TAGContainerCallback>
{
    _Bool _hasPushedAppLaunchEvent;
    TAGManager *_tagManager;
    TAGContainer *_container;
}

+ (id)containerID;
@property(nonatomic) _Bool hasPushedAppLaunchEvent; // @synthesize hasPushedAppLaunchEvent=_hasPushedAppLaunchEvent;
@property(retain, nonatomic) TAGContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) TAGManager *tagManager; // @synthesize tagManager=_tagManager;
- (void).cxx_destruct;
- (void)containerRefreshSuccess:(id)arg1 refreshType:(int)arg2;
- (void)containerRefreshFailure:(id)arg1 failure:(int)arg2 refreshType:(int)arg3;
- (void)containerRefreshBegin:(id)arg1 refreshType:(int)arg2;
- (void)trackAppStart;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

