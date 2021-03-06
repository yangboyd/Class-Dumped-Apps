//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobileHome_Shelf_NavCardEventFactory, SPTUBIMobileHome_Shelf_PlayCardEventFactory, SPTUBIMobileHome_Shelf_SectionHeaderEventFactory, SPTUBIMobileHome_Shelf_TappableSectionHeaderEventFactory;

@protocol SPTUBIMobileHome_ShelfEventFactory <NSObject>
- (id <SPTUBIMobileHome_Shelf_NavCardEventFactory>)navCardFactoryWithIdentifier:(NSString *)arg1 position:(long long)arg2 uri:(NSURL *)arg3;
- (id <SPTUBIMobileHome_Shelf_PlayCardEventFactory>)playCardFactoryWithIdentifier:(NSString *)arg1 position:(long long)arg2 uri:(NSURL *)arg3;
- (id <SPTUBIMobileHome_Shelf_TappableSectionHeaderEventFactory>)tappableSectionHeaderFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIMobileHome_Shelf_SectionHeaderEventFactory>)sectionHeaderFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

