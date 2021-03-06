//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AmazonIVSPlayer/NSObject-Protocol.h>

@class IVSPlayer, IVSQuality, NSArray, NSData, NSError, NSString;

@protocol IVSPlayerDelegate <NSObject>

@optional
- (void)player:(IVSPlayer *)arg1 didOutputTextCues:(NSArray *)arg2;
- (void)player:(IVSPlayer *)arg1 didChangeVideoSize:(struct CGSize)arg2;
- (void)player:(IVSPlayer *)arg1 didSeekToTime:(CDStruct_1b6d18a9)arg2;
- (void)playerWillRebuffer:(IVSPlayer *)arg1;
- (void)player:(IVSPlayer *)arg1 didOutputMetadataWithType:(NSString *)arg2 content:(NSData *)arg3;
- (void)player:(IVSPlayer *)arg1 didChangeQuality:(IVSQuality *)arg2;
- (void)player:(IVSPlayer *)arg1 didFailWithError:(NSError *)arg2;
- (void)player:(IVSPlayer *)arg1 didChangeState:(long long)arg2;
- (void)player:(IVSPlayer *)arg1 didChangeDuration:(CDStruct_1b6d18a9)arg2;
@end

