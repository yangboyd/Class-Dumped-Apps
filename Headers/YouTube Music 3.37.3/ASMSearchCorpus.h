//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASMHelpCenterSearchItem, ASMImage, NSMutableArray;

@interface ASMSearchCorpus : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHelpCenterSearchItem; // @dynamic hasHelpCenterSearchItem;
@property(nonatomic) _Bool hasNoResultsImage; // @dynamic hasNoResultsImage;
@property(retain, nonatomic) ASMHelpCenterSearchItem *helpCenterSearchItem; // @dynamic helpCenterSearchItem;
@property(retain, nonatomic) ASMImage *noResultsImage; // @dynamic noResultsImage;
@property(retain, nonatomic) NSMutableArray *searchItemsArray; // @dynamic searchItemsArray;
@property(readonly, nonatomic) unsigned long long searchItemsArray_Count; // @dynamic searchItemsArray_Count;

@end

