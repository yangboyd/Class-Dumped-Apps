//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSMutableArray;

@interface GKBKeyboardViewDef : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRightToLeft; // @dynamic hasRightToLeft;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) NSMutableArray *keymappingArray; // @dynamic keymappingArray;
@property(readonly, nonatomic) unsigned long long keymappingArray_Count; // @dynamic keymappingArray_Count;
@property(retain, nonatomic) NSMutableArray *layoutPropertyArray; // @dynamic layoutPropertyArray;
@property(readonly, nonatomic) unsigned long long layoutPropertyArray_Count; // @dynamic layoutPropertyArray_Count;
@property(retain, nonatomic) NSMutableArray *layoutmappingArray; // @dynamic layoutmappingArray;
@property(readonly, nonatomic) unsigned long long layoutmappingArray_Count; // @dynamic layoutmappingArray_Count;
@property(retain, nonatomic) NSMutableArray *mergeKeymappingArray; // @dynamic mergeKeymappingArray;
@property(readonly, nonatomic) unsigned long long mergeKeymappingArray_Count; // @dynamic mergeKeymappingArray_Count;
@property(nonatomic) _Bool rightToLeft; // @dynamic rightToLeft;
@property(retain, nonatomic) NSMutableArray *softkeysArray; // @dynamic softkeysArray;
@property(readonly, nonatomic) unsigned long long softkeysArray_Count; // @dynamic softkeysArray_Count;
@property(retain, nonatomic) NSMutableArray *touchHandlersArray; // @dynamic touchHandlersArray;
@property(readonly, nonatomic) unsigned long long touchHandlersArray_Count; // @dynamic touchHandlersArray_Count;
@property(nonatomic) int type; // @dynamic type;

@end

