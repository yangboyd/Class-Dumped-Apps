//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class NSString, PTVMergeParticipantUser;
@protocol PTVModalPresentationManagerDelegate, PTVUserModalFollowshipChangeDelegate;

@protocol PTVUserModal <NSObject>
@property(nonatomic) _Bool initiallyShowFollowers;
@property(nonatomic) _Bool presentedFromSuggestedFeed;
@property(retain, nonatomic) NSString *followSource;
@property(retain, nonatomic) NSString *broadcastCellClickThroughSource;
@property(nonatomic) _Bool isPresentingWhileBroadcasting;
@property(nonatomic) __weak id <PTVUserModalFollowshipChangeDelegate> followshipChangeDelegate;
@property(nonatomic) __weak id <PTVModalPresentationManagerDelegate> modalPresentationDelegate;
@property(copy, nonatomic) NSString *hostViewName;
@property(retain, nonatomic) NSString *broadcastID;
@property(retain, nonatomic) PTVMergeParticipantUser *user;
@end

