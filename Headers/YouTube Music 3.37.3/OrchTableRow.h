//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, OrchUiField;

@interface OrchTableRow : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *cellArray; // @dynamic cellArray;
@property(readonly, nonatomic) unsigned long long cellArray_Count; // @dynamic cellArray_Count;
@property(copy, nonatomic) NSData *dataToken; // @dynamic dataToken;
@property(nonatomic) _Bool hasDataToken; // @dynamic hasDataToken;
@property(nonatomic) _Bool hasRowCheckbox; // @dynamic hasRowCheckbox;
@property(nonatomic) _Bool hasRowCheckboxType; // @dynamic hasRowCheckboxType;
@property(nonatomic) _Bool hasRowType; // @dynamic hasRowType;
@property(nonatomic) _Bool hasSemanticHint; // @dynamic hasSemanticHint;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(retain, nonatomic) OrchUiField *rowCheckbox; // @dynamic rowCheckbox;
@property(nonatomic) int rowCheckboxType; // @dynamic rowCheckboxType;
@property(nonatomic) int rowType; // @dynamic rowType;
@property(nonatomic) int semanticHint; // @dynamic semanticHint;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end

