//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface OrchFilterCategory : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool alwaysShown; // @dynamic alwaysShown;
@property(copy, nonatomic) NSData *dataToken; // @dynamic dataToken;
@property(nonatomic) _Bool deletable; // @dynamic deletable;
@property(copy, nonatomic) NSString *deleteButtonText; // @dynamic deleteButtonText;
@property(nonatomic) long long deleteButtonUiReference; // @dynamic deleteButtonUiReference;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) _Bool hasAlwaysShown; // @dynamic hasAlwaysShown;
@property(nonatomic) _Bool hasDataToken; // @dynamic hasDataToken;
@property(nonatomic) _Bool hasDeletable; // @dynamic hasDeletable;
@property(nonatomic) _Bool hasDeleteButtonText; // @dynamic hasDeleteButtonText;
@property(nonatomic) _Bool hasDeleteButtonUiReference; // @dynamic hasDeleteButtonUiReference;
@property(nonatomic) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(nonatomic) _Bool hasInitialValue; // @dynamic hasInitialValue;
@property(nonatomic) _Bool hasPopupUiReference; // @dynamic hasPopupUiReference;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(nonatomic) _Bool hasViewMode; // @dynamic hasViewMode;
@property(copy, nonatomic) NSString *initialValue; // @dynamic initialValue;
@property(nonatomic) long long popupUiReference; // @dynamic popupUiReference;
@property(retain, nonatomic) NSMutableArray *simpleFormArray; // @dynamic simpleFormArray;
@property(readonly, nonatomic) unsigned long long simpleFormArray_Count; // @dynamic simpleFormArray_Count;
@property(nonatomic) long long uiReference; // @dynamic uiReference;
@property(nonatomic) int viewMode; // @dynamic viewMode;

@end

