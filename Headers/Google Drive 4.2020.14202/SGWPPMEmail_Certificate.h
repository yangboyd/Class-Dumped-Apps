//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString, SGWPPMEmail_Certificate_CertificateStatus, SGWPPMPersonFieldMetadata;

@interface SGWPPMEmail_Certificate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *configurationName; // @dynamic configurationName;
@property(nonatomic) _Bool hasConfigurationName; // @dynamic hasConfigurationName;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(retain, nonatomic) SGWPPMPersonFieldMetadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) SGWPPMEmail_Certificate_CertificateStatus *status; // @dynamic status;

@end

