//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMMediaTimeProvider-Protocol.h"
#import "NSObject-Protocol.h"

@protocol HAMRootMediaSource, HAMTrackRendererDelegate;

@protocol HAMTrackRenderer <NSObject, HAMMediaTimeProvider>
@property(nonatomic) float rate;
@property(readonly, nonatomic) id <HAMRootMediaSource> rootMediaSource;
@property(readonly, nonatomic) _Bool allowsBackgroundPlayback;
@property(readonly, nonatomic) int mediaContentType;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) CDStruct_e83c9415 seekableTimeRange;
@property(readonly, nonatomic) CDStruct_576a8307 currentTime;
@property(nonatomic) __weak id <HAMTrackRendererDelegate> delegate;
- (_Bool)doWorkAtTime:(CDStruct_576a8307)arg1 error:(id *)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)terminate;
- (_Bool)disableAndReturnError:(id *)arg1;
- (_Bool)stopAndReturnError:(id *)arg1;
- (_Bool)startAndReturnError:(id *)arg1;
- (_Bool)primeAndReturnError:(id *)arg1;
- (_Bool)enableAndReturnError:(id *)arg1;
- (_Bool)prepareAndReturnError:(id *)arg1;
@end

