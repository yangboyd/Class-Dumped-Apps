//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGUser, IGUserListSectionController;

@protocol IGUserListSectionControllerFollowDelegate <NSObject>
- (void)userListSectionController:(IGUserListSectionController *)arg1 didRemoveUser:(IGUser *)arg2;
- (void)userListSectionController:(IGUserListSectionController *)arg1 followButtonStatusDidChangeForAccount:(IGUser *)arg2 withAction:(long long)arg3;
@end

