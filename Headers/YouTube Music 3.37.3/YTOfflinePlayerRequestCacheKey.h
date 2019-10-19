//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, YTIPlaybackContext;

@interface YTOfflinePlayerRequestCacheKey : NSObject
{
    NSString *_videoID;
    YTIPlaybackContext *_playbackContext;
    NSData *_clickTrackingParams;
    NSString *_identityID;
}

@property(retain, nonatomic) NSString *identityID; // @synthesize identityID=_identityID;
@property(retain, nonatomic) NSData *clickTrackingParams; // @synthesize clickTrackingParams=_clickTrackingParams;
@property(retain, nonatomic) YTIPlaybackContext *playbackContext; // @synthesize playbackContext=_playbackContext;
@property(retain, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithVideoID:(id)arg1 playbackContext:(id)arg2 clickTrackingParams:(id)arg3 identityID:(id)arg4;

@end

