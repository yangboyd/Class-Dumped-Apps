//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GPBMessage.h>

@class GMSx_PCCPlaceFilterLogProto, GMSx_PCCRectProto, NSString;

@interface GMSx_PCCPlacesAutocompleteQueryLogProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_PCCRectProto *bound; // @dynamic bound;
@property(retain, nonatomic) GMSx_PCCPlaceFilterLogProto *filter; // @dynamic filter;
@property(nonatomic) _Bool hasBound; // @dynamic hasBound;
@property(nonatomic) _Bool hasFilter; // @dynamic hasFilter;
@property(nonatomic) _Bool hasQuery; // @dynamic hasQuery;
@property(copy, nonatomic) NSString *query; // @dynamic query;

@end

