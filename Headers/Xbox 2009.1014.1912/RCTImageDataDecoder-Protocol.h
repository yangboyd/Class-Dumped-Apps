//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTBridgeModule-Protocol.h"

@class NSData;

@protocol RCTImageDataDecoder <RCTBridgeModule>
- (void (^)(void))decodeImageData:(NSData *)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 completionHandler:(void (^)(NSError *, UIImage *))arg5;
- (_Bool)canDecodeImageData:(NSData *)arg1;

@optional
- (float)decoderPriority;
@end

