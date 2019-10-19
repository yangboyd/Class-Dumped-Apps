//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCFriendsFeedFetcher, SCFriendsFeedsComparisonManager, SCLazy;

@interface SCFriendsFeedServices : NSObject
{
    SCLazy *_friendsFeedDataCoordinator;
    SCLazy *_friendsFeedChatMediaPrefetcher;
    SCLazy *_loadingStatusManager;
    SCFriendsFeedFetcher *_friendsFeedFetcher;
    SCFriendsFeedsComparisonManager *_comparisonManager;
}

@property(readonly, nonatomic) SCFriendsFeedsComparisonManager *comparisonManager; // @synthesize comparisonManager=_comparisonManager;
@property(readonly, nonatomic) SCFriendsFeedFetcher *friendsFeedFetcher; // @synthesize friendsFeedFetcher=_friendsFeedFetcher;
@property(readonly, nonatomic) SCLazy *loadingStatusManager; // @synthesize loadingStatusManager=_loadingStatusManager;
@property(readonly, nonatomic) SCLazy *friendsFeedChatMediaPrefetcher; // @synthesize friendsFeedChatMediaPrefetcher=_friendsFeedChatMediaPrefetcher;
@property(readonly, nonatomic) SCLazy *friendsFeedDataCoordinator; // @synthesize friendsFeedDataCoordinator=_friendsFeedDataCoordinator;
- (void).cxx_destruct;
- (id)initWithFriendsFeedDataCoordinator:(id)arg1 friendsFeedChatMediaPrefetcher:(id)arg2 loadingStatusManager:(id)arg3 friendsFeedFetcher:(id)arg4 comparisonManager:(id)arg5;

@end

