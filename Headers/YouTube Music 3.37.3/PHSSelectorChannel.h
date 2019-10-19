//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PHSChannel.h"

@interface PHSSelectorChannel : PHSChannel
{
    id _target;
    SEL _selector;
}

+ (id)channelWithTargetMainThread:(id)arg1 selector:(SEL)arg2;
+ (id)channelWithTargetMainQueue:(id)arg1 selector:(SEL)arg2;
+ (id)channelWithTarget:(id)arg1 selector:(SEL)arg2;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)deliverMessage:(id)arg1;
- (id)initForMainThreadWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 queue:(id)arg3;

@end

