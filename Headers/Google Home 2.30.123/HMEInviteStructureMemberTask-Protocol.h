//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMESetupNavigationController, HMEStructureInvitation;
@protocol HMEInviteStructureMemberTaskDelegate;

@protocol HMEInviteStructureMemberTask <NSObject>
@property(nonatomic) __weak id <HMEInviteStructureMemberTaskDelegate> delegate;
- (void)startInNavigationController:(HMESetupNavigationController *)arg1 withInvitation:(HMEStructureInvitation *)arg2;
- (long long)taskType;
@end

