//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString, POEMPersonFieldMetadata, WHTSafeHtmlProto;

@interface POEMAbout : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int contentType; // @dynamic contentType;
@property(nonatomic) _Bool hasContentType; // @dynamic hasContentType;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasSafeHtmlValue; // @dynamic hasSafeHtmlValue;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) POEMPersonFieldMetadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) WHTSafeHtmlProto *safeHtmlValue; // @dynamic safeHtmlValue;
@property(copy, nonatomic) NSString *value; // @dynamic value;

@end

