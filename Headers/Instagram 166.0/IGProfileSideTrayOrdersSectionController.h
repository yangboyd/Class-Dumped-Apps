//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGSideTrayItemSectionController-Protocol.h>

@class IGSideTrayRowItemModel, IGUserSession, NSString;
@protocol IGSideTrayItemSectionControllerDelegate, IGSideTrayLoggingController;

@interface IGProfileSideTrayOrdersSectionController : IGListSectionController <IGSideTrayItemSectionController>
{
    IGSideTrayRowItemModel *_item;
    long long _badgeCount;
    IGUserSession *_userSession;
    id <IGSideTrayLoggingController> _loggingController;
    _Bool _profileIsInTabBar;
    id <IGSideTrayItemSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGSideTrayItemSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleTapWithNavigationController:(id)arg1 session:(id)arg2;
- (void)_updateBadgeCount:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)badgeCount;
- (_Bool)isBadged;
- (id)initWithUserSession:(id)arg1 profileIsInTabBar:(_Bool)arg2 delegate:(id)arg3 loggingController:(id)arg4;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 loggingController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

