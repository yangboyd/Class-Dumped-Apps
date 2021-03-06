//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEShareContext, NSArray, NSString;
@protocol AWEShareChannel, AWEShareTask;

@protocol AWEShareConfiguration <NSObject>
@property(readonly, nonatomic) AWEShareContext *context;
@property(readonly, nonatomic) id <AWEShareTask> task;
- (void)removeAllChannels;
- (void)removeChannelsMatching:(_Bool (^)(id <AWEShareChannel>))arg1;
- (void)removeChannelsWithCategory:(long long)arg1;
- (void)removeChannelsExceptWithTypes:(NSArray *)arg1;
- (void)removeChannelsExceptWithType:(NSString *)arg1;
- (void)removeChannelsWithTypes:(NSArray *)arg1;
- (id <AWEShareChannel>)removeChannelWithType:(NSString *)arg1;
- (void)addChannels:(NSArray *)arg1;
- (void)addChannel:(id <AWEShareChannel>)arg1;
- (id <AWEShareChannel>)channelForType:(NSString *)arg1;
- (NSArray *)allChannels;
@end

