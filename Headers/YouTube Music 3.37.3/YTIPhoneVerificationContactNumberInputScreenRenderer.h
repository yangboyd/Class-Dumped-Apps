//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString, YTIPhoneVerificationContactNumberInputButtonSupportedRenderers, YTIPhoneVerificationContactNumberInputSelectSupportedRenderers, YTIPhoneVerificationContactNumberInputTextSupportedRenderers;

@interface YTIPhoneVerificationContactNumberInputScreenRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIPhoneVerificationContactNumberInputSelectSupportedRenderers *contactMethods; // @dynamic contactMethods;
@property(retain, nonatomic) YTIPhoneVerificationContactNumberInputSelectSupportedRenderers *countries; // @dynamic countries;
@property(retain, nonatomic) YTIFormattedString *countrySelectionTitle; // @dynamic countrySelectionTitle;
@property(retain, nonatomic) YTIFormattedString *errorMessage; // @dynamic errorMessage;
@property(nonatomic) _Bool hasContactMethods; // @dynamic hasContactMethods;
@property(nonatomic) _Bool hasCountries; // @dynamic hasCountries;
@property(nonatomic) _Bool hasCountrySelectionTitle; // @dynamic hasCountrySelectionTitle;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasInstructions; // @dynamic hasInstructions;
@property(nonatomic) _Bool hasPhoneNumber; // @dynamic hasPhoneNumber;
@property(nonatomic) _Bool hasSendCodeButton; // @dynamic hasSendCodeButton;
@property(retain, nonatomic) YTIFormattedString *instructions; // @dynamic instructions;
@property(retain, nonatomic) YTIPhoneVerificationContactNumberInputTextSupportedRenderers *phoneNumber; // @dynamic phoneNumber;
@property(retain, nonatomic) YTIPhoneVerificationContactNumberInputButtonSupportedRenderers *sendCodeButton; // @dynamic sendCodeButton;

@end

