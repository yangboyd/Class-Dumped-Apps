//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/PHSChannel.h>

@class NSHashTable;

@interface PHSBroadcast : PHSChannel
{
    NSHashTable *_channels;
    unsigned long long _options;
    id _lastKnownValue;
}

- (void).cxx_destruct;
- (void)deliverMessage:(id)arg1;
- (id)subscribe:(CDUnknownBlockType)arg1;
- (void)removeSubchannel:(id)arg1;
- (void)addSubchannel:(id)arg1;
@property(readonly, nonatomic) unsigned long long subscriberCount;
- (id)initForMainThread;
- (id)initWithQueue:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1 queue:(id)arg2;
- (id)init;

@end

