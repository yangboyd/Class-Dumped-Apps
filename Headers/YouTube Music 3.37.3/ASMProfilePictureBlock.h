//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASMImage, ASMResourceKey, NSMutableArray, NSString;

@interface ASMProfilePictureBlock : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *descriptionText; // @dynamic descriptionText;
@property(nonatomic) _Bool hasDescriptionText; // @dynamic hasDescriptionText;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasProfilePictureImage; // @dynamic hasProfilePictureImage;
@property(nonatomic) _Bool hasTarget; // @dynamic hasTarget;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(retain, nonatomic) ASMImage *profilePictureImage; // @dynamic profilePictureImage;
@property(retain, nonatomic) ASMResourceKey *target; // @dynamic target;
@property(retain, nonatomic) NSMutableArray *textEntriesArray; // @dynamic textEntriesArray;
@property(readonly, nonatomic) unsigned long long textEntriesArray_Count; // @dynamic textEntriesArray_Count;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

