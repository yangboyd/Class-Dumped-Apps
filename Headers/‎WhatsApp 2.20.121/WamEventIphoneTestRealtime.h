//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@interface WamEventIphoneTestRealtime : WamEvent
{
    double _is_connected_to_chatd;
}

@property(nonatomic) double is_connected_to_chatd; // @synthesize is_connected_to_chatd=_is_connected_to_chatd;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end

