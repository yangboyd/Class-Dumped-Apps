//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTUnpluggedVideoPlaybackPositionModel.h"

@class NSData, YTUnpluggedStreamChunkBasedPositionModel, YTUnpluggedVideoTimeBasedPositionModel;

@interface YTMutableUnpluggedVideoPlaybackPositionModel : YTUnpluggedVideoPlaybackPositionModel
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) YTUnpluggedStreamChunkBasedPositionModel *chunkPosition; // @dynamic chunkPosition;
@property(retain, nonatomic) YTUnpluggedVideoTimeBasedPositionModel *utcTimePosition; // @dynamic utcTimePosition;
@property(retain, nonatomic) YTUnpluggedVideoTimeBasedPositionModel *streamTimePosition; // @dynamic streamTimePosition;
- (id)initWithEntityStore:(id)arg1;

@end

