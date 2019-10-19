//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PHSChannel.h"

@class NSHashTable;

@interface PHSBroadcast : PHSChannel
{
    NSHashTable *_channels;
}

- (void).cxx_destruct;
- (void)deliverMessage:(id)arg1;
- (id)subscribe:(CDUnknownBlockType)arg1;
- (void)removeSubchannel:(id)arg1;
- (void)addSubchannel:(id)arg1;
@property(readonly, nonatomic) unsigned long long subscriberCount;
- (id)initForMainThread;
- (id)initWithQueue:(id)arg1;

@end

