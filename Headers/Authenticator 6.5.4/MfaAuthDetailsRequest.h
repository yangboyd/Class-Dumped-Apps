//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PhoneAppAuthentication;

@interface MfaAuthDetailsRequest : NSObject
{
    PhoneAppAuthentication *_phoneAppAuthentication;
}

- (void).cxx_destruct;
- (void)phoneAppAuthenticationComplete:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)executeAsync:(CDUnknownBlockType)arg1;
- (id)initForCheckForAuthWithOathCode:(id)arg1 url:(id)arg2;
- (id)initForNotificationWithGuid:(id)arg1 url:(id)arg2 isBackground:(_Bool)arg3 notificationReceivedTime:(id)arg4;

@end

