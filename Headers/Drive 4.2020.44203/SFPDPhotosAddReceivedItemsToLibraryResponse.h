//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray;

@interface SFPDPhotosAddReceivedItemsToLibraryResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *copiedItemIdArray; // @dynamic copiedItemIdArray;
@property(readonly, nonatomic) unsigned long long copiedItemIdArray_Count; // @dynamic copiedItemIdArray_Count;
@property(nonatomic) _Bool hasItemsCopied; // @dynamic hasItemsCopied;
@property(retain, nonatomic) NSMutableArray *itemIdArray; // @dynamic itemIdArray;
@property(readonly, nonatomic) unsigned long long itemIdArray_Count; // @dynamic itemIdArray_Count;
@property(nonatomic) int itemsCopied; // @dynamic itemsCopied;

@end

