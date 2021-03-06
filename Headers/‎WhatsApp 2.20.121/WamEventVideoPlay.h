//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@class NSNumber;

@interface WamEventVideoPlay : WamEvent
{
    NSNumber *_video_play_origin_number;
    NSNumber *_video_play_result_number;
    NSNumber *_video_play_surface_number;
    NSNumber *_video_play_type_number;
    double _video_initial_buffering_t;
    double _video_age;
    double _video_duration;
    double _video_play_t;
    double _video_size;
}

- (void).cxx_destruct;
@property(nonatomic) double video_size; // @synthesize video_size=_video_size;
@property(nonatomic) double video_play_t; // @synthesize video_play_t=_video_play_t;
@property(nonatomic) double video_duration; // @synthesize video_duration=_video_duration;
@property(nonatomic) double video_age; // @synthesize video_age=_video_age;
@property(nonatomic) double video_initial_buffering_t_milliseconds; // @synthesize video_initial_buffering_t_milliseconds=_video_initial_buffering_t;
@property(nonatomic) long long video_play_type;
- (_Bool)is_video_play_type_set;
@property(nonatomic) long long video_play_surface;
- (_Bool)is_video_play_surface_set;
@property(nonatomic) long long video_play_result;
- (_Bool)is_video_play_result_set;
@property(nonatomic) long long video_play_origin;
- (_Bool)is_video_play_origin_set;
@property(nonatomic) double video_initial_buffering_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end

