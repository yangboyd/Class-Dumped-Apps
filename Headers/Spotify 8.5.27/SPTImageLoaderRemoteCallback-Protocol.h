//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSError, NSString, NSURL, UIImage;

@protocol SPTImageLoaderRemoteCallback <NSObject>
- (void)imageLoaded:(UIImage *)arg1 withDataKey:(NSString *)arg2 forURL:(NSURL *)arg3 startTime:(NSDate *)arg4 forEntity:(NSString *)arg5;
- (void)imageLoadError:(NSError *)arg1 forURL:(NSURL *)arg2 context:(id)arg3;
- (void)imageLoaded:(UIImage *)arg1 forURL:(NSURL *)arg2 startTime:(NSDate *)arg3 context:(id)arg4;
@end

