//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobileCollectionArtist_EmptyViewEventFactory, SPTUBIMobileCollectionArtist_HeaderEventFactory, SPTUBIMobileCollectionArtist_ItemListEventFactory, SPTUBIMobileCollectionArtist_ToolbarEventFactory;

@protocol SPTUBIMobileCollectionArtistEventFactory <NSObject>
- (id <SPTUBIMobileCollectionArtist_EmptyViewEventFactory>)emptyViewFactoryWithReason:(NSString *)arg1;
- (id <SPTUBIMobileCollectionArtist_ItemListEventFactory>)itemListFactory;
- (id <SPTUBIMobileCollectionArtist_HeaderEventFactory>)headerFactory;
- (id <SPTUBIMobileCollectionArtist_ToolbarEventFactory>)toolbarFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

