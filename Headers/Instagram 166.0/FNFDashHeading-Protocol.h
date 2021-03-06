//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FNFDashFetchable-Protocol.h>

@class NSDictionary, NSString;

@protocol FNFDashHeading <FNFDashFetchable>
@property(readonly, nonatomic) NSString *audioCodecDescription;
@property(readonly, nonatomic) NSDictionary *audioStreamExtraParameters;
@property(readonly, nonatomic) struct AudioStreamBasicDescription asbd;
@property(readonly, nonatomic) NSString *videoCodecDescription;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *videoFormatDescription;
@property(readonly, nonatomic) int timescale;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) int trackIndex;
@property(readonly, nonatomic) unsigned char parseState;
- (float)rotationAngle;
- (_Bool)hasEncodedData;
- (CDStruct_1b6d18a9)endTimePositionForSequenceIndex:(int)arg1;
- (CDStruct_1b6d18a9)startTimePositionForSequenceIndex:(int)arg1;
- (int)lengthForSequenceIndex:(int)arg1;
- (long long)offsetForSequenceIndex:(int)arg1;
- (int)numberOfChunks;
- (_Bool)parseSucceeded;
@end

