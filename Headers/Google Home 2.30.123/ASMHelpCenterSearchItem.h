//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASMHelpCenterSearchItem_Target, ASMHelpCenterSearchItem_Title, ASMImage;

@interface ASMHelpCenterSearchItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasTarget; // @dynamic hasTarget;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) ASMImage *icon; // @dynamic icon;
@property(retain, nonatomic) ASMImage *image; // @dynamic image;
@property(retain, nonatomic) ASMHelpCenterSearchItem_Target *target; // @dynamic target;
@property(retain, nonatomic) ASMHelpCenterSearchItem_Title *title; // @dynamic title;

@end

