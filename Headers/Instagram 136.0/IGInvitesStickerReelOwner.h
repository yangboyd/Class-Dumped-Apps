//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGReelOwnerType-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGInvitesStickerModel, NSString;

@interface IGInvitesStickerReelOwner : NSObject <IGReelOwnerType, NSCoding>
{
    IGInvitesStickerModel *_invite;
}

+ (id)ownerWithDictionary:(id)arg1 objectStores:(id)arg2;
@property(readonly, nonatomic) IGInvitesStickerModel *invite; // @synthesize invite=_invite;
- (void).cxx_destruct;
- (id)sharedStoriesStackedUsers;
- (id)coverImageURL;
- (id)coverImageAttributionUsername;
- (_Bool)allowProducerControls;
- (_Bool)useReplyMessagingFormat;
- (_Bool)allowViewingInsights;
- (_Bool)canNavigateToOwnerPage;
- (_Bool)shouldShowProfilePhotoAttribution;
- (_Bool)shouldShowBadge;
- (_Bool)isGroupStoryOwner;
- (_Bool)isMultiAuthorStoryOwner;
- (_Bool)isUser;
- (_Bool)isInvitesStickerOwner;
- (id)invitesSticker;
- (id)groupStoriesReelOwnerV2;
- (id)reelMultiAuthorStoryOwner;
- (id)reelLoggingInfo;
- (id)name;
- (id)reelUser;
- (id)pk;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInviteSticker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

