//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGVideoPlaybackLoggingConfig, NSString;

@interface IGVideoPreviewLogger : NSObject
{
    IGVideoPlaybackLoggingConfig *_loggingConfig;
    double _spriteSheetFetchStartTime;
    double _spriteSheetFetchFinishTime;
    double _spriteSheetFetchFailedTime;
    NSString *_mediaId;
    int _instanceKey;
    _Bool _firstRequest;
    _Bool _firstResponse;
}

- (void).cxx_destruct;
- (void)_annotateMarkerWithKey:(id)arg1 value:(id)arg2;
- (void)logStartDelay:(double)arg1;
- (void)notifyDidFailFetchingSpriteImages;
- (void)notifyDidFinishFetchingSpriteImages;
- (void)notifyDidStartFetchingSpriteImages;
- (void)notifyThumbnailResponseAtIndex:(long long)arg1 playbackTime:(double)arg2 delay:(double)arg3;
- (void)notifyThumbnailRequestAtIndex:(long long)arg1;
- (void)notifyScrubFinishWithNumberOfSeeks:(long long)arg1 numberOfThumbnailsServed:(long long)arg2 numberOfSeeksWithoutThumbnail:(long long)arg3;
- (void)notifyScrubStart;
@property(readonly, copy, nonatomic) NSString *module;
- (id)initWithMediaId:(id)arg1 loggingConfig:(id)arg2;

@end

