//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSError;
@protocol IGIXTActivity;

@protocol IGIXTActivityListener <NSObject>
- (void)activity:(id <IGIXTActivity>)arg1 stopedWithError:(NSError *)arg2 cancelled:(_Bool)arg3;
- (void)activityDidStart:(id <IGIXTActivity>)arg1;
@end

