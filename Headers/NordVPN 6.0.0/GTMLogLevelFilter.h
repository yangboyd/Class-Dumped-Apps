//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GoogleToolboxForMac/GTMLogFilter-Protocol.h>

@class NSString, NSUserDefaults;

@interface GTMLogLevelFilter : NSObject <GTMLogFilter>
{
    _Bool verboseLoggingEnabled_;
    NSUserDefaults *userDefaults_;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)filterAllowsMessage:(id)arg1 level:(int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

