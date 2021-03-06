//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterAVCore/TAVAnalyticsEvent.h>

#import <TwitterAVCore/TAVAnalyticsClientEvent-Protocol.h>
#import <TwitterAVCore/TAVAnalyticsEventWithScribeParameters-Protocol.h>
#import <TwitterAVCore/TAVAnalyticsVASTTrackingEvent-Protocol.h>

@class NSDictionary, NSError, NSString, TAVAnalyticsSessionState;
@protocol TAVPlaylistItemKey;

@interface TAVAnalyticsEventError : TAVAnalyticsEvent <TAVAnalyticsVASTTrackingEvent, TAVAnalyticsEventWithScribeParameters, TAVAnalyticsClientEvent>
{
    _Bool _isFatal;
    NSError *_error;
    unsigned long long _retryCount;
}

+ (id)private_valueKeys;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) _Bool isFatal; // @synthesize isFatal=_isFatal;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithAnalyticsSessionState:(id)arg1 error:(id)arg2 isFatal:(_Bool)arg3 retryCount:(unsigned long long)arg4;
- (id)initWithPlaylistItemKey:(id)arg1 analyticsSessionState:(id)arg2 error:(id)arg3 isFatal:(_Bool)arg4 retryCount:(unsigned long long)arg5;
@property(readonly, copy, nonatomic) NSString *VASTTrackingMetric;
- (void)updateScribeParameters:(id)arg1;
@property(readonly, copy, nonatomic) NSString *clientEventAction;

// Remaining properties
@property(readonly, copy, nonatomic) TAVAnalyticsSessionState *analyticsSessionState;
@property(readonly, copy, nonatomic) NSString *clientEventCategory;
@property(readonly, copy, nonatomic) NSDictionary *clientEventParameters;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) id <TAVPlaylistItemKey> playlistItemKey;
@property(readonly) Class superclass;

@end

