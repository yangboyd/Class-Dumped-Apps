//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OMIDHuluAdSessionRegistryStateObserver-Protocol.h"
#import "OMIDHuluStateWatcherDelegate-Protocol.h"

@class NSString, OMIDHuluAdSessionRegistry, OMIDHuluStateWatcher, OMIDHuluTreeWalker;

@interface OMIDHuluSDK : NSObject <OMIDHuluAdSessionRegistryStateObserver, OMIDHuluStateWatcherDelegate>
{
    _Bool _active;
    OMIDHuluAdSessionRegistry *_adSessionRegistry;
    OMIDHuluStateWatcher *_stateWatcher;
    OMIDHuluTreeWalker *_treeWalker;
}

+ (id)sharedInstance;
+ (id)versionString;
@property(retain, nonatomic) OMIDHuluTreeWalker *treeWalker; // @synthesize treeWalker=_treeWalker;
@property(retain, nonatomic) OMIDHuluStateWatcher *stateWatcher; // @synthesize stateWatcher=_stateWatcher;
@property(retain, nonatomic) OMIDHuluAdSessionRegistry *adSessionRegistry; // @synthesize adSessionRegistry=_adSessionRegistry;
@property(readonly, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)adSessionDidBecomeActive:(id)arg1;
- (void)adSessionRegistryDidResignActive;
- (void)adSessionRegistryDidBecomeActive;
- (void)appDidResignActive;
- (void)appDidBecomeActive;
- (void)stop;
- (void)start;
- (_Bool)activate;
- (id)appInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

