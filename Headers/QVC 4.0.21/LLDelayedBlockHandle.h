//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface LLDelayedBlockHandle : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)dispatchOnQueue:(id)arg1 withDelay:(double)arg2 block:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
- (void)cancelBlock;
- (void)runBlock;
- (void)scheduleWithDelay:(double)arg1;

@end

