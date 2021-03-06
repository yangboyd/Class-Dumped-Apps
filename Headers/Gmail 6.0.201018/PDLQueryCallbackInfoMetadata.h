//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDLQueryCallbackInfoMetadata : NSObject
{
    _Bool _nextCallbackRequiresRemoteData;
    long long _cacheStatus;
    long long _networkStatus;
    long long _callbackDelayedStatus;
    unsigned long long _dataProvenance;
    double _APILatency;
}

@property(readonly, nonatomic) double APILatency; // @synthesize APILatency=_APILatency;
@property(readonly, nonatomic) unsigned long long dataProvenance; // @synthesize dataProvenance=_dataProvenance;
@property(readonly, nonatomic) _Bool nextCallbackRequiresRemoteData; // @synthesize nextCallbackRequiresRemoteData=_nextCallbackRequiresRemoteData;
@property(readonly, nonatomic) long long callbackDelayedStatus; // @synthesize callbackDelayedStatus=_callbackDelayedStatus;
@property(readonly, nonatomic) long long networkStatus; // @synthesize networkStatus=_networkStatus;
@property(readonly, nonatomic) long long cacheStatus; // @synthesize cacheStatus=_cacheStatus;
- (id)initWithCacheStatus:(long long)arg1 networkStatus:(long long)arg2 callbackDelayedStatus:(long long)arg3 dataProvenance:(unsigned long long)arg4 nextCallbackRequiresRemoteData:(_Bool)arg5;
- (id)initWithCacheStatus:(long long)arg1 networkStatus:(long long)arg2 callbackDelayedStatus:(long long)arg3 dataProvenance:(unsigned long long)arg4 nextCallbackRequiresRemoteData:(_Bool)arg5 apiLatency:(double)arg6;

@end

