//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGFBSDKGraphErrorRecoveryProcessor, NSError;

@protocol IGFBSDKGraphErrorRecoveryProcessorDelegate <NSObject>
- (void)processorDidAttemptRecovery:(IGFBSDKGraphErrorRecoveryProcessor *)arg1 didRecover:(_Bool)arg2 error:(NSError *)arg3;

@optional
- (_Bool)processorWillProcessError:(IGFBSDKGraphErrorRecoveryProcessor *)arg1 error:(NSError *)arg2;
@end

