//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBAppState : FBValueObject <NSCopying, NSCoding>
{
    long long _applicationTerminationState;
    NSString *_applicationTerminationLastNotification;
    double _timestamp;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *applicationTerminationLastNotification; // @synthesize applicationTerminationLastNotification=_applicationTerminationLastNotification;
@property(readonly, nonatomic) long long applicationTerminationState; // @synthesize applicationTerminationState=_applicationTerminationState;
- (id)initWithApplicationTerminationState:(long long)arg1 applicationTerminationLastNotification:(id)arg2 timestamp:(double)arg3;

@end

