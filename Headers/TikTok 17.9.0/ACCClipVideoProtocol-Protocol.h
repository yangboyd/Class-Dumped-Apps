//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, UIViewController;

@protocol ACCClipVideoProtocol <NSObject>
- (UIViewController *)clipViewController:(NSArray *)arg1 maxClipDuration:(double)arg2 clipedResultSavePath:(NSString *)arg3 allowFastImport:(_Bool)arg4 allowSpeedControl:(_Bool)arg5 inputData:(NSDictionary *)arg6 completion:(void (^)(HTSVideoData *, ACCMusicModel *, UIImage *))arg7;
@end

