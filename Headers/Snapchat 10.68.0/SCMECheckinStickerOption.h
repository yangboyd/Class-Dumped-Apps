//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMT1StickerID;

@interface SCMECheckinStickerOption : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSticker; // @dynamic hasSticker;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) int rank; // @dynamic rank;
@property(retain, nonatomic) SCMT1StickerID *sticker; // @dynamic sticker;

@end

