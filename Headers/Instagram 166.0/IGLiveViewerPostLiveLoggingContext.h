//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGTVThumbnailSectionLoggingContextType-Protocol.h>

@class IGLiveBroadcast, IGUser, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGLiveViewerPostLiveLoggingContext : NSObject <IGTVThumbnailSectionLoggingContextType>
{
    IGLiveBroadcast *_currentBroadcast;
    IGUser *_currentUser;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    NSString *_sessionId;
    long long _entryPoint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) NSString *analyticsModule;
- (void)logVideoTapWithBroadcast:(id)arg1 fromComponent:(long long)arg2 withSourceChannelType:(id)arg3 videoPosition:(id)arg4;
- (id)impressionLoggingExtrasForMedia:(id)arg1 component:(long long)arg2 sourceChannelType:(id)arg3 videoPosition:(id)arg4;
- (void)logVideoTapWithMedia:(id)arg1 fromComponent:(long long)arg2 withSourceChannelType:(id)arg3 videoPosition:(id)arg4;
- (id)_followStatusWithBroadcaster:(id)arg1;
- (id)_commonDictForSuggestedBroadcastsLogging;
- (void)_logEventWithName:(id)arg1 extraDict:(id)arg2 moduleName:(id)arg3;
- (void)notifyClickOfSuggestedBroadcast:(id)arg1 atIndex:(long long)arg2 suggestedLiveCount:(long long)arg3;
- (void)notifyImpressionOfSuggestedBroadcasts:(id)arg1 atPositions:(id)arg2;
- (void)notifyEndScreenImpression;
- (id)initWithAnalyticsLogger:(id)arg1 sessionId:(id)arg2 currentUser:(id)arg3 currentBroadcast:(id)arg4 entryPoint:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

