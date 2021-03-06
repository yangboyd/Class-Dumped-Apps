//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OMIDBytedanceAdSessionRegistry;
@protocol OMIDBytedanceStateWatcherDelegate;

@interface OMIDBytedanceStateWatcher : NSObject
{
    unsigned long long _appState;
    id <OMIDBytedanceStateWatcherDelegate> _delegate;
    OMIDBytedanceAdSessionRegistry *_adSessionRegistry;
}

@property(retain, nonatomic) OMIDBytedanceAdSessionRegistry *adSessionRegistry; // @synthesize adSessionRegistry=_adSessionRegistry;
@property(nonatomic) __weak id <OMIDBytedanceStateWatcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long appState; // @synthesize appState=_appState;
- (void).cxx_destruct;
- (void)onAppDidEnterBackground;
- (void)onAppWillResignActive;
- (void)onAppDidBecomeActive;
- (double)deviceVolume;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned long long)appStateFromUIApplicationState:(long long)arg1;
- (id)appStateString;
- (void)updateAppStateWithUIApplicationState:(long long)arg1;
- (void)adSessionDidBecomeActive:(id)arg1;
- (void)stop;
- (void)start;
@property(readonly, nonatomic) _Bool appIsActive;
- (id)initWithAdSessionRegistry:(id)arg1;

@end

