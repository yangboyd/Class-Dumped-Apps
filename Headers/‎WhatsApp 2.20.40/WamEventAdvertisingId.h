//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@class NSString;

@interface WamEventAdvertisingId : WamEvent
{
    NSString *_iphone_advertising_id;
}

@property(copy, nonatomic) NSString *iphone_advertising_id; // @synthesize iphone_advertising_id=_iphone_advertising_id;
- (void).cxx_destruct;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end

