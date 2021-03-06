//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCQuotaForecastInputs, PhotosMCStorageGuardrails;

@interface PhotosMCStorageQuota : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long currentPhotosUsageBytes; // @dynamic currentPhotosUsageBytes;
@property(nonatomic) long long currentUsageBytes; // @dynamic currentUsageBytes;
@property(retain, nonatomic) PhotosMCStorageGuardrails *guardrails; // @dynamic guardrails;
@property(nonatomic) _Bool hasCurrentPhotosUsageBytes; // @dynamic hasCurrentPhotosUsageBytes;
@property(nonatomic) _Bool hasCurrentUsageBytes; // @dynamic hasCurrentUsageBytes;
@property(nonatomic) _Bool hasGuardrails; // @dynamic hasGuardrails;
@property(nonatomic) _Bool hasIsUnlimited; // @dynamic hasIsUnlimited;
@property(nonatomic) _Bool hasLimitBytes; // @dynamic hasLimitBytes;
@property(nonatomic) _Bool hasQuotaForecastInputs; // @dynamic hasQuotaForecastInputs;
@property(nonatomic) _Bool isUnlimited; // @dynamic isUnlimited;
@property(nonatomic) long long limitBytes; // @dynamic limitBytes;
@property(retain, nonatomic) PhotosMCQuotaForecastInputs *quotaForecastInputs; // @dynamic quotaForecastInputs;

@end

