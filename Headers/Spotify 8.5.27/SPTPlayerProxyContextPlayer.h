//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTAsyncScheduler;

@interface SPTPlayerProxyContextPlayer : NSObject
{
    id <SPTAsyncScheduler> _scheduler;
    weak_ptr_20886a9c _proxyContextPlayer;
}

@property(nonatomic) weak_ptr_20886a9c proxyContextPlayer; // @synthesize proxyContextPlayer=_proxyContextPlayer;
@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isLocalPlaybackEnabled) _Bool localPlaybackEnabled;
- (id)initWithProxyContextPlayer:(shared_ptr_fa30f844)arg1 scheduler:(id)arg2;

@end

