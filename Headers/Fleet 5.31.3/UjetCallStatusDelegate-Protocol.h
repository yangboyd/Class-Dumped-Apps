//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UJET/NSObject-Protocol.h>

@class UjetResponseCall;

@protocol UjetCallStatusDelegate <NSObject>
- (void)callDidRecover:(UjetResponseCall *)arg1;
- (void)callDidFail:(UjetResponseCall *)arg1;
- (void)callDidSwitching:(UjetResponseCall *)arg1;
- (void)callDidFinish:(UjetResponseCall *)arg1;
- (void)callDidConnect:(UjetResponseCall *)arg1;
- (void)callDidConnecting:(UjetResponseCall *)arg1;
- (void)callDidAssign:(UjetResponseCall *)arg1;
@end

