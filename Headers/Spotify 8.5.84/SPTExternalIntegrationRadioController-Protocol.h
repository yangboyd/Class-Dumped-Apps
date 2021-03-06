//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SPTLoggingParams, SPTPlayOrigin, SPTPlayerState;
@protocol SPTExternalIntegrationExternalActionOrigin, SPTExternalIntegrationRadioControllerObserver;

@protocol SPTExternalIntegrationRadioController <NSObject>
- (void)removeObserver:(id <SPTExternalIntegrationRadioControllerObserver>)arg1;
- (void)addObserver:(id <SPTExternalIntegrationRadioControllerObserver>)arg1;
- (_Bool)thumbIsDownForTrackWithURI:(NSURL *)arg1;
- (_Bool)thumbIsUpForTrackWithURI:(NSURL *)arg1;
- (_Bool)canThumbTrackInPlayerState:(SPTPlayerState *)arg1;
- (void)thumbDownTrackInPlayerState:(SPTPlayerState *)arg1 externalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)thumbUpTrackInPlayerState:(SPTPlayerState *)arg1 externalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg2 completionHandler:(void (^)(NSError *))arg3;
- (_Bool)isPlayingRadioInPlayerState:(SPTPlayerState *)arg1;
- (_Bool)canStartRadioSeededByTrackURI:(NSURL *)arg1;
- (_Bool)canStartTrackRadioSeededByPlayerState:(SPTPlayerState *)arg1;
- (void)startRadioForTrackURI:(NSURL *)arg1 playOrigin:(SPTPlayOrigin *)arg2 loggingParams:(SPTLoggingParams *)arg3 externalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg4 completionHandler:(void (^)(NSError *))arg5;
@end

