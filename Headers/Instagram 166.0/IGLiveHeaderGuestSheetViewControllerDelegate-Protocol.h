//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGLiveHeaderGuestSheetViewController, IGUser;

@protocol IGLiveHeaderGuestSheetViewControllerDelegate <NSObject>
- (void)guestSheetViewController:(IGLiveHeaderGuestSheetViewController *)arg1 didUnfollowUser:(IGUser *)arg2;
- (void)guestSheetViewController:(IGLiveHeaderGuestSheetViewController *)arg1 didFollowUser:(IGUser *)arg2;
- (void)guestSheetViewController:(IGLiveHeaderGuestSheetViewController *)arg1 didInspectUser:(IGUser *)arg2;
- (void)guestSheetViewControllerDidRequestToJoin:(IGLiveHeaderGuestSheetViewController *)arg1;
@end

