//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRCryptauth_DeviceClassifier, NSArray, NSNumber, NSString;

@interface GTLRCryptauth_SetupEnrollmentRequest : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(copy, nonatomic) NSString *applicationId; // @dynamic applicationId;
@property(retain, nonatomic) GTLRCryptauth_DeviceClassifier *deviceClassifier; // @dynamic deviceClassifier;
@property(retain, nonatomic) NSNumber *invocationReason; // @dynamic invocationReason;
@property(copy, nonatomic) NSString *origin; // @dynamic origin;
@property(retain, nonatomic) NSNumber *retryCount; // @dynamic retryCount;
@property(retain, nonatomic) NSArray *types; // @dynamic types;
@property(retain, nonatomic) NSNumber *useLegacyCrypto; // @dynamic useLegacyCrypto;

@end

