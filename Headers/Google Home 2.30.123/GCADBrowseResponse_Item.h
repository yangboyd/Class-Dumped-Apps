//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GCADAppCard, GCADBrowseResponse_DeviceSection, GCADCategoryCard, GCADContentShelf, GCADDiscoverCard, GCADDiscoverCardCollection, GCADPromoCard, GCADSeparator;

@interface GCADBrowseResponse_Item : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCADAppCard *appCard; // @dynamic appCard;
@property(retain, nonatomic) GCADCategoryCard *categoryCard; // @dynamic categoryCard;
@property(retain, nonatomic) GCADContentShelf *contentShelf; // @dynamic contentShelf;
@property(retain, nonatomic) GCADDiscoverCard *discoverCard; // @dynamic discoverCard;
@property(retain, nonatomic) GCADDiscoverCardCollection *discoverCardCollection; // @dynamic discoverCardCollection;
@property(readonly, nonatomic) int itemOneOfCase; // @dynamic itemOneOfCase;
@property(retain, nonatomic) GCADPromoCard *promoCard; // @dynamic promoCard;
@property(retain, nonatomic) GCADBrowseResponse_DeviceSection *section; // @dynamic section;
@property(retain, nonatomic) GCADSeparator *separator; // @dynamic separator;

@end

