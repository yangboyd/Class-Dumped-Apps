//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, YTDataSyncNotifier;
@protocol YTDataSyncObserver;

@interface YTDataSyncSubscription : NSObject
{
    NSArray *_subscribedPaths;
    YTDataSyncNotifier *_notifier;
    id <YTDataSyncObserver> _observer;
}

+ (id)subscriptionWithString:(id)arg1 observer:(id)arg2;
+ (id)subscriptionWithURL:(id)arg1 observer:(id)arg2;
+ (id)subscriptionWithURLs:(id)arg1 observer:(id)arg2;
@property(readonly, nonatomic) __weak id <YTDataSyncObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)notifier;
- (void)setNotifier:(id)arg1;
@property(readonly, nonatomic) NSArray *paths;
- (void)unsubscribe;
- (void)dealloc;
- (id)initWithString:(id)arg1 observer:(id)arg2;
- (id)initWithURL:(id)arg1 observer:(id)arg2;
- (id)initWithURLs:(id)arg1 observer:(id)arg2;

@end

