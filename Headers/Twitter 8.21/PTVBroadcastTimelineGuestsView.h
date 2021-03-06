//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeSDK/TAVHydraCoordinatorDelegate-Protocol.h>

@class NSMutableDictionary, PTVBroadcast, TAVHydraCoordinator;
@protocol PTVLoggedInUserProtocol;

@interface PTVBroadcastTimelineGuestsView : UIView <TAVHydraCoordinatorDelegate>
{
    NSMutableDictionary *_guestContainerViews;
    id <PTVLoggedInUserProtocol> _loggedInUser;
    PTVBroadcast *_broadcast;
    double _cornerRadius;
    double _shadowOpacity;
    TAVHydraCoordinator *_hydraCoordinator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVHydraCoordinator *hydraCoordinator; // @synthesize hydraCoordinator=_hydraCoordinator;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) PTVBroadcast *broadcast; // @synthesize broadcast=_broadcast;
@property(retain, nonatomic) id <PTVLoggedInUserProtocol> loggedInUser; // @synthesize loggedInUser=_loggedInUser;
- (id)hydraCoordinator:(id)arg1 playerStateForParticipant:(id)arg2;
- (void)hydraCoordinatorDidUpdateTargetRPO:(id)arg1;
- (void)hydraCoordinatorDidUpdateBandwidthConstrainedMode:(id)arg1;
- (void)hydraCoordinatorDidUpdateAudioLevels:(id)arg1;
- (void)hydraCoordinator:(id)arg1 didUpdateActiveGuestsWithAddedGuests:(id)arg2 removedGuests:(id)arg3;
- (void)removeAllGuestViews;
- (void)removeGuestViewsWithUserIDs:(id)arg1;
- (void)removeGuestViewWithUserID:(id)arg1;
- (void)addGuestView:(id)arg1;
- (_Bool)canAddGuestWithUserID:(id)arg1;
- (id)guestViewWithUserID:(id)arg1;
- (void)layoutSubviews;
- (void)hideCurrentAudioIndicators;
- (id)initWithFrame:(struct CGRect)arg1;

@end

