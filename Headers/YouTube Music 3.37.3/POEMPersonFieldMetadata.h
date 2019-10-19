//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBTimestamp, NSMutableArray, NSString;

@interface POEMPersonFieldMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *affinityArray; // @dynamic affinityArray;
@property(readonly, nonatomic) unsigned long long affinityArray_Count; // @dynamic affinityArray_Count;
@property(nonatomic) int container; // @dynamic container;
@property(nonatomic) long long containerId; // @dynamic containerId;
@property(nonatomic) _Bool containerPrimary; // @dynamic containerPrimary;
@property(nonatomic) int containerType; // @dynamic containerType;
@property(nonatomic) _Bool crossDeviceAllowed; // @dynamic crossDeviceAllowed;
@property(nonatomic) long long deprecatedContactContainerId; // @dynamic deprecatedContactContainerId;
@property(nonatomic) _Bool edgeKey; // @dynamic edgeKey;
@property(retain, nonatomic) NSMutableArray *edgeKeyInfoArray; // @dynamic edgeKeyInfoArray;
@property(readonly, nonatomic) unsigned long long edgeKeyInfoArray_Count; // @dynamic edgeKeyInfoArray_Count;
@property(copy, nonatomic) NSString *encodedContainerId; // @dynamic encodedContainerId;
@property(nonatomic) _Bool hasContainer; // @dynamic hasContainer;
@property(nonatomic) _Bool hasContainerId; // @dynamic hasContainerId;
@property(nonatomic) _Bool hasContainerPrimary; // @dynamic hasContainerPrimary;
@property(nonatomic) _Bool hasContainerType; // @dynamic hasContainerType;
@property(nonatomic) _Bool hasCrossDeviceAllowed; // @dynamic hasCrossDeviceAllowed;
@property(nonatomic) _Bool hasDeprecatedContactContainerId; // @dynamic hasDeprecatedContactContainerId;
@property(nonatomic) _Bool hasEdgeKey; // @dynamic hasEdgeKey;
@property(nonatomic) _Bool hasEncodedContainerId; // @dynamic hasEncodedContainerId;
@property(nonatomic) _Bool hasLastUpdateTime; // @dynamic hasLastUpdateTime;
@property(nonatomic) _Bool hasPrimary; // @dynamic hasPrimary;
@property(nonatomic) _Bool hasVerified; // @dynamic hasVerified;
@property(nonatomic) _Bool hasWriteable; // @dynamic hasWriteable;
@property(retain, nonatomic) GPBTimestamp *lastUpdateTime; // @dynamic lastUpdateTime;
@property(nonatomic) _Bool primary; // @dynamic primary;
@property(nonatomic) _Bool verified; // @dynamic verified;
@property(nonatomic) _Bool writeable; // @dynamic writeable;

@end

