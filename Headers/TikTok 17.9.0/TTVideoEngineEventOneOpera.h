//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TTVideoEngineEventOneOperaProtocol-Protocol.h"

@class NSMutableDictionary, NSString, TTVideoEngineEventBase;
@protocol TTVideoEngineEventLoggerDelegate;

@interface TTVideoEngineEventOneOpera : NSObject <TTVideoEngineEventOneOperaProtocol>
{
    id <TTVideoEngineEventLoggerDelegate> _delegate;
    TTVideoEngineEventBase *_eventBase;
    NSString *_operaType;
    NSString *_endType;
    unsigned long long _startTime;
    unsigned long long _endTime;
    unsigned long long _costTime;
    NSMutableDictionary *_lastOperaTime;
    long long _fromVideoPos;
    long long _toVideoPos;
    NSString *_stateBefore;
    NSString *_stateAfter;
    long long _audioLenAfter;
    long long _videoLenAfter;
    long long _downloadSpeed;
    long long _isSeekInCache;
    long long _retryCount;
    long long _mIndex;
    NSString *_resolutionBefore;
    NSString *_resolutionAfter;
    long long _configBitrateBefore;
    long long _configBitrateAfter;
}

@property(nonatomic) long long configBitrateAfter; // @synthesize configBitrateAfter=_configBitrateAfter;
@property(nonatomic) long long configBitrateBefore; // @synthesize configBitrateBefore=_configBitrateBefore;
@property(copy, nonatomic) NSString *resolutionAfter; // @synthesize resolutionAfter=_resolutionAfter;
@property(copy, nonatomic) NSString *resolutionBefore; // @synthesize resolutionBefore=_resolutionBefore;
@property(nonatomic) long long mIndex; // @synthesize mIndex=_mIndex;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long isSeekInCache; // @synthesize isSeekInCache=_isSeekInCache;
@property(nonatomic) long long downloadSpeed; // @synthesize downloadSpeed=_downloadSpeed;
@property(nonatomic) long long videoLenAfter; // @synthesize videoLenAfter=_videoLenAfter;
@property(nonatomic) long long audioLenAfter; // @synthesize audioLenAfter=_audioLenAfter;
@property(copy, nonatomic) NSString *stateAfter; // @synthesize stateAfter=_stateAfter;
@property(copy, nonatomic) NSString *stateBefore; // @synthesize stateBefore=_stateBefore;
@property(nonatomic) long long toVideoPos; // @synthesize toVideoPos=_toVideoPos;
@property(nonatomic) long long fromVideoPos; // @synthesize fromVideoPos=_fromVideoPos;
@property(retain, nonatomic) NSMutableDictionary *lastOperaTime; // @synthesize lastOperaTime=_lastOperaTime;
@property(nonatomic) unsigned long long costTime; // @synthesize costTime=_costTime;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *endType; // @synthesize endType=_endType;
@property(copy, nonatomic) NSString *operaType; // @synthesize operaType=_operaType;
@property(retain, nonatomic) TTVideoEngineEventBase *eventBase; // @synthesize eventBase=_eventBase;
@property(nonatomic) __weak id <TTVideoEngineEventLoggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)endSeek:(id)arg1 isSeekInCache:(long long)arg2;
- (void)seekToTime:(double)arg1 toPos:(double)arg2;
- (void)sendOneOpera;
- (id)jsonDict;
- (void)moviePlayRetryWithError:(id)arg1 strategy:(long long)arg2 apiver:(unsigned long long)arg3;
- (id)initWithEventBase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

