//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@interface CHRPrivacyScreenEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int authenticateErrorCode; // @dynamic authenticateErrorCode;
@property(nonatomic) int authenticationType; // @dynamic authenticationType;
@property(nonatomic) int biometryAvailable; // @dynamic biometryAvailable;
@property(nonatomic) _Bool hasAuthenticateErrorCode; // @dynamic hasAuthenticateErrorCode;
@property(nonatomic) _Bool hasAuthenticationType; // @dynamic hasAuthenticationType;
@property(nonatomic) _Bool hasBiometryAvailable; // @dynamic hasBiometryAvailable;
@property(nonatomic) _Bool hasQueuedActionsCount; // @dynamic hasQueuedActionsCount;
@property(nonatomic) _Bool hasTimeoutThreshold; // @dynamic hasTimeoutThreshold;
@property(nonatomic) int queuedActionsCount; // @dynamic queuedActionsCount;
@property(nonatomic) int timeoutThreshold; // @dynamic timeoutThreshold;

@end

