//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASMImage, NSMutableArray, NSString;

@interface ASMSignInBlock : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalParagraphsArray; // @dynamic additionalParagraphsArray;
@property(readonly, nonatomic) unsigned long long additionalParagraphsArray_Count; // @dynamic additionalParagraphsArray_Count;
@property(retain, nonatomic) NSMutableArray *descriptionParagraphsArray; // @dynamic descriptionParagraphsArray;
@property(readonly, nonatomic) unsigned long long descriptionParagraphsArray_Count; // @dynamic descriptionParagraphsArray_Count;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasLargeImage; // @dynamic hasLargeImage;
@property(nonatomic) _Bool hasSignInCtaText; // @dynamic hasSignInCtaText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) ASMImage *image; // @dynamic image;
@property(retain, nonatomic) ASMImage *largeImage; // @dynamic largeImage;
@property(copy, nonatomic) NSString *signInCtaText; // @dynamic signInCtaText;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

