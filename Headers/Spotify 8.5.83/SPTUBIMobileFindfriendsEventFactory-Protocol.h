//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobileFindfriends_ConnectToFacebookButtonEventFactory, SPTUBIMobileFindfriends_FilterTextEventFactory, SPTUBIMobileFindfriends_FollowAllButtonEventFactory, SPTUBIMobileFindfriends_UserListEventFactory;

@protocol SPTUBIMobileFindfriendsEventFactory <NSObject>
- (id <SPTUBIMobileFindfriends_UserListEventFactory>)userListFactory;
- (id <SPTUBIMobileFindfriends_FollowAllButtonEventFactory>)followAllButtonFactory;
- (id <SPTUBIMobileFindfriends_ConnectToFacebookButtonEventFactory>)connectToFacebookButtonFactory;
- (id <SPTUBIMobileFindfriends_FilterTextEventFactory>)filterTextFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

