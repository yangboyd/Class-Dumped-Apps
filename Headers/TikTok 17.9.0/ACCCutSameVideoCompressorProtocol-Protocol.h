//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVURLAsset;
@protocol ACCCutSameVideoCompressConfigProtocol;

@protocol ACCCutSameVideoCompressorProtocol <NSObject>
- (void)compressAsset:(AVURLAsset *)arg1 withConfig:(id <ACCCutSameVideoCompressConfigProtocol>)arg2 progressHandler:(void (^)(double))arg3 completion:(void (^)(AVURLAsset *, NSError *))arg4;
- (void)cancelAllTasks;
@end

