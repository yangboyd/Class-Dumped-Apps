//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCUserVerificationContext, SCUserVerificationState, SCUserVerificationStateConfig;

@protocol SCUserVerificationStateTransition <NSObject>
- (SCUserVerificationStateConfig *)stateConfigForState:(SCUserVerificationState *)arg1 context:(SCUserVerificationContext *)arg2;
- (SCUserVerificationStateConfig *)nextStateConfigFromState:(SCUserVerificationState *)arg1 action:(unsigned long long)arg2 context:(SCUserVerificationContext *)arg3;
@end

