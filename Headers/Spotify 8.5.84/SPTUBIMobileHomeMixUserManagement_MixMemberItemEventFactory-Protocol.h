//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIInteractionEvent, SPTUBIMobileHomeMixUserManagement_MixMemberItem_MixMemberToggleEventFactory;

@protocol SPTUBIMobileHomeMixUserManagement_MixMemberItemEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)hitTuneEnabled;
- (id <SPTUBIMobileHomeMixUserManagement_MixMemberItem_MixMemberToggleEventFactory>)mixMemberToggleFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

