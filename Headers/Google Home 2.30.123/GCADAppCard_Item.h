//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GCADContentDetails, GCADImage, NSString;

@interface GCADAppCard_Item : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *contentId; // @dynamic contentId;
@property(retain, nonatomic) GCADContentDetails *details; // @dynamic details;
@property(nonatomic) _Bool hasContentId; // @dynamic hasContentId;
@property(nonatomic) _Bool hasDetails; // @dynamic hasDetails;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) GCADImage *image; // @dynamic image;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

