//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMMediaSource-Protocol.h"

@class HAMRootMediaSourceEventCenter, NSArray;
@protocol HAMFormat;

@protocol HAMRootMediaSource <HAMMediaSource>
@property(readonly, nonatomic) HAMRootMediaSourceEventCenter *mediaSourceEventCenter;
@property(readonly, nonatomic) id <HAMFormat> format;
@property(readonly, nonatomic) CDStruct_1b6d18a9 bufferedTime;
@property(readonly, nonatomic) _Bool isLive;
- (void)continueBuffering;
- (NSArray *)optimalSeekPositionsWithinRange:(CDStruct_e83c9415)arg1;
@end

