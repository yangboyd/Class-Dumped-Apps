//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GDKBlockAndQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue_5;
    id _block_5;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id block; // @synthesize block=_block_5;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue_5;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithQueue:(id)arg1 block:(id)arg2;

@end

