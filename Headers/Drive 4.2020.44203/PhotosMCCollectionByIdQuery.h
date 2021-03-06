//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, NSString, PhotosMCCollectionId, PhotosMCItemSortOrder, PhotosMCRequestedCommentData, PhotosMCSquareStreamInfo;

@interface PhotosMCCollectionByIdQuery : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *authkey; // @dynamic authkey;
@property(retain, nonatomic) NSMutableArray *collectionRecipientGroupArray; // @dynamic collectionRecipientGroupArray;
@property(readonly, nonatomic) unsigned long long collectionRecipientGroupArray_Count; // @dynamic collectionRecipientGroupArray_Count;
@property(retain, nonatomic) PhotosMCRequestedCommentData *commentData; // @dynamic commentData;
@property(nonatomic) _Bool groupDuplicateItems; // @dynamic groupDuplicateItems;
@property(nonatomic) _Bool hasAuthkey; // @dynamic hasAuthkey;
@property(nonatomic) _Bool hasCommentData; // @dynamic hasCommentData;
@property(nonatomic) _Bool hasGroupDuplicateItems; // @dynamic hasGroupDuplicateItems;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasItemsToReturn; // @dynamic hasItemsToReturn;
@property(nonatomic) _Bool hasMaxItems; // @dynamic hasMaxItems;
@property(nonatomic) _Bool hasSortOrder; // @dynamic hasSortOrder;
@property(nonatomic) _Bool hasSquareStreamInfo; // @dynamic hasSquareStreamInfo;
@property(retain, nonatomic) PhotosMCCollectionId *id_p; // @dynamic id_p;
@property(nonatomic) int itemsToReturn; // @dynamic itemsToReturn;
@property(nonatomic) int maxItems; // @dynamic maxItems;
@property(retain, nonatomic) PhotosMCItemSortOrder *sortOrder; // @dynamic sortOrder;
@property(retain, nonatomic) PhotosMCSquareStreamInfo *squareStreamInfo; // @dynamic squareStreamInfo;

@end

