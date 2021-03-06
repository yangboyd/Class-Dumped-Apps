//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray;

@interface GAMDDragDropDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int dragCompletionStatus; // @dynamic dragCompletionStatus;
@property(retain, nonatomic) NSMutableArray *dragItemArray; // @dynamic dragItemArray;
@property(readonly, nonatomic) unsigned long long dragItemArray_Count; // @dynamic dragItemArray_Count;
@property(retain, nonatomic) NSMutableArray *dropItemArray; // @dynamic dropItemArray;
@property(readonly, nonatomic) unsigned long long dropItemArray_Count; // @dynamic dropItemArray_Count;
@property(nonatomic) int dropTarget; // @dynamic dropTarget;
@property(nonatomic) _Bool hasDragCompletionStatus; // @dynamic hasDragCompletionStatus;
@property(nonatomic) _Bool hasDropTarget; // @dynamic hasDropTarget;
@property(nonatomic) _Bool hasIsDropSessionDocumentLocal; // @dynamic hasIsDropSessionDocumentLocal;
@property(nonatomic) _Bool isDropSessionDocumentLocal; // @dynamic isDropSessionDocumentLocal;

@end

