//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGVideoPlaybackLogging;

@interface IGFeedVideoViewSession : NSObject
{
    _Bool _tracking;
    _Bool _playing;
    double _viewThreshold;
    NSString *_eventName;
    double _videoViewStartTime;
    long long _videoViewStartLoopCount;
    id <IGVideoPlaybackLogging> _logger;
}

@property(readonly, nonatomic) id <IGVideoPlaybackLogging> logger; // @synthesize logger=_logger;
@property(nonatomic) long long videoViewStartLoopCount; // @synthesize videoViewStartLoopCount=_videoViewStartLoopCount;
@property(nonatomic) double videoViewStartTime; // @synthesize videoViewStartTime=_videoViewStartTime;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) _Bool tracking; // @synthesize tracking=_tracking;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(readonly, nonatomic) double viewThreshold; // @synthesize viewThreshold=_viewThreshold;
- (void).cxx_destruct;
- (void)updateWithCellPercentVisible:(double)arg1 player:(id)arg2;
- (void)videoDidStopForPlayer:(id)arg1 cellPercentVisible:(double)arg2;
- (void)videoDidStartForPlayer:(id)arg1 cellPercentVisible:(double)arg2;
- (id)initWithViewThreshold:(double)arg1 logger:(id)arg2 eventName:(id)arg3;

@end

