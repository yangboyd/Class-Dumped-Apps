//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTPlayerState;
@protocol SPTPlayer;

@protocol SPTPlayerObserver <NSObject>

@optional
- (void)player:(id <SPTPlayer>)arg1 didEncounterError:(NSError *)arg2;
- (void)player:(id <SPTPlayer>)arg1 stateDidChange:(SPTPlayerState *)arg2 fromState:(SPTPlayerState *)arg3;
- (void)player:(id <SPTPlayer>)arg1 stateDidChange:(SPTPlayerState *)arg2;
@end

