//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@class NSNumber;

@interface WamEventIphoneOpenedFromTodayExt : WamEvent
{
    NSNumber *_iphone_opened_from_today_ext_chat_type_number;
}

- (void).cxx_destruct;
@property(nonatomic) long long iphone_opened_from_today_ext_chat_type;
- (_Bool)is_iphone_opened_from_today_ext_chat_type_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end

