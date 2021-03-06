//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDiscoveryNavigationTrayImpressionHandler-Protocol.h>

@class IGSessionTracker, NSMutableSet, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGExploreTopicSelectorLoggingContext : NSObject <IGDiscoveryNavigationTrayImpressionHandler>
{
    IGSessionTracker *_sessionTracker;
    NSString *_analyticsModule;
    NSMutableSet *_loggedTopicImpressionIds;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
}

- (void).cxx_destruct;
- (void)navigationTray:(id)arg1 willShowItem:(id)arg2 atSection:(long long)arg3;
- (void)logImpressionForTopic:(id)arg1 atSection:(long long)arg2;
- (id)initWithSessionTracker:(id)arg1 analyticsModule:(id)arg2 analyticsLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

