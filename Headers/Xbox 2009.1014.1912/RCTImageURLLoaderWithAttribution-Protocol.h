//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTImageURLLoader-Protocol.h"

@class NSURL;

@protocol RCTImageURLLoaderWithAttribution <RCTImageURLLoader>
- (void (^)(void))loadImageForURL:(NSURL *)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 attribution:(const struct ImageURLLoaderAttribution *)arg5 progressHandler:(void (^)(long long, long long))arg6 partialLoadHandler:(void (^)(UIImage *))arg7 completionHandler:(void (^)(NSError *, UIImage *))arg8;
@end

