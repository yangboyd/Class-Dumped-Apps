//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, PDLPersonFieldMetadata, PDLPersonName, PDLPersonPhoto;

@interface PDLPersonEmail : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *canonicalizedValue; // @dynamic canonicalizedValue;
@property(retain, nonatomic) NSMutableArray *canonicalizedValueSubtokensArray; // @dynamic canonicalizedValueSubtokensArray;
@property(readonly, nonatomic) unsigned long long canonicalizedValueSubtokensArray_Count; // @dynamic canonicalizedValueSubtokensArray_Count;
@property(retain, nonatomic) NSMutableArray *certificateInternalArray; // @dynamic certificateInternalArray;
@property(readonly, nonatomic) unsigned long long certificateInternalArray_Count; // @dynamic certificateInternalArray_Count;
@property(copy, nonatomic) NSData *extendedDataInternal; // @dynamic extendedDataInternal;
@property(nonatomic) _Bool hasCanonicalizedValue; // @dynamic hasCanonicalizedValue;
@property(nonatomic) _Bool hasExtendedDataInternal; // @dynamic hasExtendedDataInternal;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPhoto; // @dynamic hasPhoto;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) PDLPersonFieldMetadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) PDLPersonName *name; // @dynamic name;
@property(retain, nonatomic) PDLPersonPhoto *photo; // @dynamic photo;
@property(copy, nonatomic) NSString *value; // @dynamic value;
@property(retain, nonatomic) NSMutableArray *valueSubtokensArray; // @dynamic valueSubtokensArray;
@property(readonly, nonatomic) unsigned long long valueSubtokensArray_Count; // @dynamic valueSubtokensArray_Count;

@end

