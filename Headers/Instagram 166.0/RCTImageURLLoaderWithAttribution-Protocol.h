//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/RCTImageLoaderLoggable-Protocol.h>
#import <InstagramAppCoreFramework/RCTImageURLLoader-Protocol.h>

@class NSString, NSURL, RCTImageURLLoaderRequest, UIView;

@protocol RCTImageURLLoaderWithAttribution <RCTImageURLLoader, RCTImageLoaderLoggable>
- (void)trackURLImageDidDestroy:(RCTImageURLLoaderRequest *)arg1;
- (void)trackURLImageRequestDidDestroy:(RCTImageURLLoaderRequest *)arg1;
- (void)trackURLImageVisibilityForRequest:(RCTImageURLLoaderRequest *)arg1 imageView:(UIView *)arg2;
- (RCTImageURLLoaderRequest *)loadImageForURL:(NSURL *)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 requestId:(NSString *)arg5 priority:(unsigned long long)arg6 attribution:(const struct ImageURLLoaderAttribution *)arg7 progressHandler:(void (^)(long long, long long))arg8 partialLoadHandler:(void (^)(UIImage *))arg9 completionHandler:(void (^)(NSError *, UIImage *, id))arg10;
@end

