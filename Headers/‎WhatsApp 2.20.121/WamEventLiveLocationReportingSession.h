//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@interface WamEventLiveLocationReportingSession : WamEvent
{
    double _session_t;
    double _battery_level_change;
    double _number_of_updates;
}

@property(nonatomic) double number_of_updates; // @synthesize number_of_updates=_number_of_updates;
@property(nonatomic) double battery_level_change; // @synthesize battery_level_change=_battery_level_change;
@property(nonatomic) double session_t_milliseconds; // @synthesize session_t_milliseconds=_session_t;
@property(nonatomic) double session_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end

