//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol SPTNotificationCenter;

@interface SPTPlayerItemNotificationObservable : NSObject
{
    NSHashTable *_observers;
    id <SPTNotificationCenter> _notificationCenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTNotificationCenter> notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void)playerItemNewAccessLogEntry:(id)arg1;
- (void)playerItemNewErrorLogEntry:(id)arg1;
- (void)playerItemFailedToPlayToEndTime:(id)arg1;
- (void)playerItemDidPlayToEndTime:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1;

@end

