//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@class NSNumber;

@interface WamEventIphonePjpegEncoding : WamEvent
{
    NSNumber *_iphone_pjpeg_encoding_result_type_number;
}

- (void).cxx_destruct;
@property(nonatomic) long long iphone_pjpeg_encoding_result_type;
- (_Bool)is_iphone_pjpeg_encoding_result_type_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end

