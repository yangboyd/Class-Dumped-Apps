//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedItemRenderingTracker, IGFeedItemTracker, IGSponsoredSupportConfiguration, IGUserSession, NSMutableSet, NSString;

@interface IGFeedItemRenderingLoggingManager : NSObject
{
    IGUserSession *_userSession;
    NSString *_module;
    IGFeedItemTracker *_feedItemTracker;
    IGFeedItemRenderingTracker *_activeRenderingSession;
    NSMutableSet *_componentList;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    _Bool _onlyLogSponsoredLabel;
}

- (void).cxx_destruct;
- (void)_startRenderingLoggingSession;
- (void)_resetRenderingLoggingSession;
- (_Bool)_didLogRenderingInfoForAllComponents;
- (id)_missingComponent;
- (void)logShopsRenderingEventWithName:(id)arg1 withModule:(id)arg2 forFeedItem:(id)arg3 withExtra:(id)arg4;
- (id)viewpointActionForMedia:(id)arg1;
- (id)viewpointActionForStoryItemView:(id)arg1 viewModel:(id)arg2 media:(id)arg3;
- (id)viewpointActionForMedia:(id)arg1 cellType:(long long)arg2 textType:(long long)arg3 collectionViewCell:(id)arg4;
- (id)viewpointActionForShopsCell:(id)arg1 cellType:(unsigned long long)arg2 componentKey:(id)arg3 modelKey:(id)arg4;
- (void)addStoryItemViewToComponentListForView:(id)arg1;
- (void)addFeedItemCellToComponentListForCellType:(long long)arg1 textType:(long long)arg2;
- (void)addShoppingCellToComponentListForCellType:(id)arg1 inSection:(long long)arg2 atIndex:(long long)arg3;
- (id)initWithFeedItemTracker:(id)arg1 sponsoredSupportConfiguration:(id)arg2 userSession:(id)arg3 module:(id)arg4;

@end

