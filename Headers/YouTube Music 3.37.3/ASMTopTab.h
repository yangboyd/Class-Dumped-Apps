//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASMImage, ASMResourceKey, NSString;

@interface ASMTopTab : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasSelectedIcon; // @dynamic hasSelectedIcon;
@property(nonatomic) _Bool hasTarget; // @dynamic hasTarget;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) ASMImage *icon; // @dynamic icon;
@property(retain, nonatomic) ASMImage *selectedIcon; // @dynamic selectedIcon;
@property(retain, nonatomic) ASMResourceKey *target; // @dynamic target;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

