//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSError;
@protocol IGDirectInboxPullToRefreshCoordinator;

@protocol IGDirectInboxPullToRefreshCoordinatorDelegate <NSObject>
- (void)inboxPullToRefreshCoordinatorFailedToFetchInbox:(id <IGDirectInboxPullToRefreshCoordinator>)arg1 triggeredFromPullToRefresh:(_Bool)arg2 error:(NSError *)arg3;
- (void)inboxPullToRefreshCoordinatorDidFetchInbox:(id <IGDirectInboxPullToRefreshCoordinator>)arg1 triggeredFromPullToRefresh:(_Bool)arg2;
@end

