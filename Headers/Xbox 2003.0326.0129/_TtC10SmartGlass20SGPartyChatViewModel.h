//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC10SmartGlass19SGMessagesViewModel.h"

@class NSArray, NSString, SGPeopleItemDataContext, _TtC10SmartGlass22SGPartyTextChatMessage;

@interface _TtC10SmartGlass20SGPartyChatViewModel : _TtC10SmartGlass19SGMessagesViewModel
{
    // Error parsing type: , name: owner
    // Error parsing type: , name: members
    // Error parsing type: , name: partyMetadata
    // Error parsing type: , name: bannersCount
    // Error parsing type: , name: mostRecentReceivedText
    // Error parsing type: , name: unreadMessageCount
    // Error parsing type: , name: joinRestriction
    // Error parsing type: , name: banners
    // Error parsing type: , name: indexToXuidMap
    // Error parsing type: , name: xuidToMemberMap
    // Error parsing type: , name: ownerXuid
    // Error parsing type: , name: optInBroadcast
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)refresh;
- (void)onCurrentPartyChanged:(id)arg1;
- (void)onActivate;
- (void)onInitialize;
@property(nonatomic) long long unreadMessageCount; // @synthesize unreadMessageCount;
@property(nonatomic, retain) _TtC10SmartGlass22SGPartyTextChatMessage *mostRecentReceivedText; // @synthesize mostRecentReceivedText;
@property(nonatomic) long long bannersCount; // @synthesize bannersCount;
@property(nonatomic, copy) NSString *partyMetadata; // @synthesize partyMetadata;
@property(nonatomic, copy) NSArray *members; // @synthesize members;
@property(nonatomic, retain) SGPeopleItemDataContext *owner; // @synthesize owner;

@end

