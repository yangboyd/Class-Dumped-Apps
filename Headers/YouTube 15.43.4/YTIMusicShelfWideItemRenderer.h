//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIMusicEntityRef, YTIMusicEntityReference;

@interface YTIMusicShelfWideItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMusicEntityRef *containerEntityRef; // @dynamic containerEntityRef;
@property(retain, nonatomic) YTIMusicEntityReference *containerEntityReference; // @dynamic containerEntityReference;
@property(retain, nonatomic) YTIMusicEntityRef *entityRef; // @dynamic entityRef;
@property(retain, nonatomic) YTIMusicEntityReference *entityReference; // @dynamic entityReference;
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasContainerEntityRef; // @dynamic hasContainerEntityRef;
@property(nonatomic) _Bool hasContainerEntityReference; // @dynamic hasContainerEntityReference;
@property(nonatomic) _Bool hasEntityRef; // @dynamic hasEntityRef;
@property(nonatomic) _Bool hasEntityReference; // @dynamic hasEntityReference;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;

@end

