//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPerformanceComponent, IGPerformanceNavigationLogger;

@interface IGActivityFeedNavigationPerfComponents : NSObject
{
    IGPerformanceNavigationLogger *_logger;
    IGPerformanceComponent *_feed;
    IGPerformanceComponent *_feedListUpdate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGPerformanceComponent *feedListUpdate; // @synthesize feedListUpdate=_feedListUpdate;
@property(readonly, nonatomic) IGPerformanceComponent *feed; // @synthesize feed=_feed;
@property(readonly, nonatomic) IGPerformanceNavigationLogger *logger; // @synthesize logger=_logger;
- (id)initWithLauncherSetProvider:(id)arg1 networkingActiveJoinerAnnouncer:(id)arg2;

@end

