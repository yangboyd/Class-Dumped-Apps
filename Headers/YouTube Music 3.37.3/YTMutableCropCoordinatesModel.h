//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTCropCoordinatesModel.h"

@class NSData;

@interface YTMutableCropCoordinatesModel : YTCropCoordinatesModel
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) double bottom; // @dynamic bottom;
@property(nonatomic) double right; // @dynamic right;
@property(nonatomic) double top; // @dynamic top;
@property(nonatomic) double left; // @dynamic left;
- (id)initWithEntityStore:(id)arg1;

@end

