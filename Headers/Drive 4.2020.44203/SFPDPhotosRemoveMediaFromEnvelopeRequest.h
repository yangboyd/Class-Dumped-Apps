//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, PhotosMCCollectionId, PhotosMCMediaCollectionMask;

@interface SFPDPhotosRemoveMediaFromEnvelopeRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCCollectionId *collectionId; // @dynamic collectionId;
@property(retain, nonatomic) PhotosMCMediaCollectionMask *collectionMask; // @dynamic collectionMask;
@property(nonatomic) _Bool hasCollectionId; // @dynamic hasCollectionId;
@property(nonatomic) _Bool hasCollectionMask; // @dynamic hasCollectionMask;
@property(retain, nonatomic) NSMutableArray *removeItemIdArray; // @dynamic removeItemIdArray;
@property(readonly, nonatomic) unsigned long long removeItemIdArray_Count; // @dynamic removeItemIdArray_Count;

@end

