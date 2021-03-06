//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MLNetworkRequestBaseEvent.h>

@class MLFormat, NSURLResponse;

@interface MLNetworkRequestResponseEvent : MLNetworkRequestBaseEvent
{
    _Bool _streamable;
    _Bool _onesie;
    NSURLResponse *_response;
    long long _requestNumber;
    double _startAbsoluteTime;
    MLFormat *_format;
    double _predictedWallTime;
    long long _predictedSizeBytes;
    double _predictedMediaDuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double predictedMediaDuration; // @synthesize predictedMediaDuration=_predictedMediaDuration;
@property(readonly, nonatomic) long long predictedSizeBytes; // @synthesize predictedSizeBytes=_predictedSizeBytes;
@property(readonly, nonatomic) double predictedWallTime; // @synthesize predictedWallTime=_predictedWallTime;
@property(readonly, nonatomic) MLFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) _Bool onesie; // @synthesize onesie=_onesie;
@property(readonly, nonatomic) _Bool streamable; // @synthesize streamable=_streamable;
@property(readonly, nonatomic) double startAbsoluteTime; // @synthesize startAbsoluteTime=_startAbsoluteTime;
@property(readonly, nonatomic) long long requestNumber; // @synthesize requestNumber=_requestNumber;
@property(readonly, nonatomic) NSURLResponse *response; // @synthesize response=_response;
- (id)initWithRequest:(id)arg1 absoluteTime:(double)arg2 requestNumber:(long long)arg3 streamable:(_Bool)arg4 onesie:(_Bool)arg5 format:(id)arg6 predictedWallTime:(double)arg7 predictedSizeBytes:(long long)arg8 predictedMediaDuration:(double)arg9 response:(id)arg10 startAbsoluteTime:(double)arg11;

@end

