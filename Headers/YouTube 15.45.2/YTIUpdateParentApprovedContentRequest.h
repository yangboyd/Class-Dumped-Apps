//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTIInnerTubeContext;

@interface YTIUpdateParentApprovedContentRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *addedItemsArray; // @dynamic addedItemsArray;
@property(readonly, nonatomic) unsigned long long addedItemsArray_Count; // @dynamic addedItemsArray_Count;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasKidGaiaId; // @dynamic hasKidGaiaId;
@property(copy, nonatomic) NSString *kidGaiaId; // @dynamic kidGaiaId;
@property(retain, nonatomic) NSMutableArray *removedItemsArray; // @dynamic removedItemsArray;
@property(readonly, nonatomic) unsigned long long removedItemsArray_Count; // @dynamic removedItemsArray_Count;

@end

