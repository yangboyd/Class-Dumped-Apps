//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/GIPDelayedInvokerProtocol-Protocol.h>

@class NSString;

@interface GIPDelayedInvoker : NSObject <GIPDelayedInvokerProtocol>
{
}

- (void)cancelSelectorOnTarget:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3;
- (void)performSelectorOnTarget:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3 afterDelay:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

