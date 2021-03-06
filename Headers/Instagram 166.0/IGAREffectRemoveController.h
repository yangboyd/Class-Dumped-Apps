//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol IGAPIClient, IGAREffectRemoveAnnouncer, IGUserLauncherSet;

@interface IGAREffectRemoveController : NSObject
{
    NSMutableSet *_removedEffectIDs;
    id <IGAREffectRemoveAnnouncer> _announcer;
    id <IGAPIClient> _networker;
    id <IGUserLauncherSet> _launcherSet;
}

- (void).cxx_destruct;
- (void)unremoveEffectWithIdentifier:(id)arg1;
- (void)removeEffectWithIdentifier:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) NSSet *blacklistedEffectIDs;
- (id)initWithNetworker:(id)arg1 launcherSet:(id)arg2;

@end

