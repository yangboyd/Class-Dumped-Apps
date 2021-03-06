//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, WJ2Error;

@interface WJ2DSSDeviceRegistrationStatus : NSObject
{
    NSString *_registrationState;
    NSString *_lastRegisteredTime;
    long long _durationToWait;
    WJ2Error *_wj2Error;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) WJ2Error *wj2Error; // @synthesize wj2Error=_wj2Error;
@property(readonly, nonatomic) long long durationToWait; // @synthesize durationToWait=_durationToWait;
@property(readonly, nonatomic) NSString *lastRegisteredTime; // @synthesize lastRegisteredTime=_lastRegisteredTime;
@property(readonly, nonatomic) NSString *registrationState; // @synthesize registrationState=_registrationState;
- (void).cxx_destruct;
- (long long)getDurationFromString:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

