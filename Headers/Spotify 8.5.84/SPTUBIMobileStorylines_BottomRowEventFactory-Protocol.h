//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobileStorylines_BottomRow_AttributionLabelEventFactory, SPTUBIMobileStorylines_BottomRow_FollowButtonEventFactory;

@protocol SPTUBIMobileStorylines_BottomRowEventFactory <NSObject>
- (id <SPTUBIMobileStorylines_BottomRow_FollowButtonEventFactory>)followButtonFactory;
- (id <SPTUBIMobileStorylines_BottomRow_AttributionLabelEventFactory>)attributionLabelFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

