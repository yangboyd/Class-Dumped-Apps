//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WACallSingleVideoView, WACallVideoView, WAUserJID;

@protocol WACallVideoViewDelegate <NSObject>
- (void)callVideoViewDidMaximizeSingleVideoVew;
- (void)callVideoViewWillMaximizeSingleVideoView;
- (void)callVideoView:(WACallVideoView *)arg1 willChangeSingleVideoView:(WACallSingleVideoView *)arg2 forParticipantJID:(WAUserJID *)arg3;
- (void)callVideoView:(WACallVideoView *)arg1 didChangeSingleVideoView:(WACallSingleVideoView *)arg2 forParticipantJID:(WAUserJID *)arg3;
- (void)callVideoView:(WACallVideoView *)arg1 didRequestCancelGroupCallInviteToPaticipantJID:(WAUserJID *)arg2;
- (void)callVideoViewDidRequestCancelUpgrade:(WACallVideoView *)arg1;
@end

