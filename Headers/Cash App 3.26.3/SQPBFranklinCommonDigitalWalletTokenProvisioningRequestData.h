//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SQPBFranklinCommonDigitalWalletTokenProvisioningRequestData_ApplePayRequest, SQPBFranklinCommonDigitalWalletTokenProvisioningRequestData_GooglePayRequest;

@interface SQPBFranklinCommonDigitalWalletTokenProvisioningRequestData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SQPBFranklinCommonDigitalWalletTokenProvisioningRequestData_ApplePayRequest *applePayRequest; // @dynamic applePayRequest;
@property(nonatomic) int digitalWalletIssuer; // @dynamic digitalWalletIssuer;
@property(retain, nonatomic) SQPBFranklinCommonDigitalWalletTokenProvisioningRequestData_GooglePayRequest *googlePayRequest; // @dynamic googlePayRequest;
@property(nonatomic) _Bool hasDigitalWalletIssuer; // @dynamic hasDigitalWalletIssuer;
@property(readonly, nonatomic) int providerRequestOneOfCase; // @dynamic providerRequestOneOfCase;

@end

