//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MAJResourceSet, NSMutableArray;

@interface MAJActionPrompts : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *confirmSetArray; // @dynamic confirmSetArray;
@property(readonly, nonatomic) unsigned long long confirmSetArray_Count; // @dynamic confirmSetArray_Count;
@property(nonatomic) _Bool hasNoAppAvailableSet; // @dynamic hasNoAppAvailableSet;
@property(retain, nonatomic) MAJResourceSet *noAppAvailableSet; // @dynamic noAppAvailableSet;
@property(retain, nonatomic) NSMutableArray *performSetArray; // @dynamic performSetArray;
@property(readonly, nonatomic) unsigned long long performSetArray_Count; // @dynamic performSetArray_Count;
@property(retain, nonatomic) NSMutableArray *promptArray; // @dynamic promptArray;
@property(readonly, nonatomic) unsigned long long promptArray_Count; // @dynamic promptArray_Count;

@end

