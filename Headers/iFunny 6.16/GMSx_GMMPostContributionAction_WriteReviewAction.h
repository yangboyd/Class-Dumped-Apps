//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GMSx_GPBMessage.h>

@class GMSx_GMMTodoListItem_Place;

@interface GMSx_GMMPostContributionAction_WriteReviewAction : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPlace; // @dynamic hasPlace;
@property(nonatomic) _Bool hasStarRating; // @dynamic hasStarRating;
@property(retain, nonatomic) GMSx_GMMTodoListItem_Place *place; // @dynamic place;
@property(nonatomic) int starRating; // @dynamic starRating;

@end

