//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface GRWALIntentsKit_MappingVersion : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool isInStoreVersion; // @dynamic isInStoreVersion;
@property(retain, nonatomic) NSMutableArray *mappingArray; // @dynamic mappingArray;
@property(readonly, nonatomic) unsigned long long mappingArray_Count; // @dynamic mappingArray_Count;
@property(copy, nonatomic) NSString *versionDescription; // @dynamic versionDescription;
@property(copy, nonatomic) NSString *versionScheme; // @dynamic versionScheme;

@end

