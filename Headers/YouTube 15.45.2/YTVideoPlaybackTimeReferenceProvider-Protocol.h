//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol YTVideoPlaybackTimeReferenceProvider <NSObject>
- (NSNumber *)getMediaTimeForVideoID:(NSString *)arg1;
- (void)removeFromVideoPlaybackTimeIndicesForVideoID:(NSString *)arg1;
- (void)updateVideoPlaybackTimeIndicesForVideoID:(NSString *)arg1 withTimeReference:(NSNumber *)arg2;
@end

