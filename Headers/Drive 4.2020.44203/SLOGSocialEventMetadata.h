//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class SLOGSocialAffinityExtension, SLOGSocialEventMetadata_GuidedCreation, SLOGSocialEventMetadata_PeopleMergeSuggestion, SLOGSocialEventMetadata_PhotoBook, SLOGSocialEventMetadata_PhotoSearchResult, SLOGSocialEventMetadata_PhotosAssistantCard, SLOGSocialEventMetadata_PhotosMovieMakerSoundtrack, SLOGSocialEventMetadata_PromotionId, SLOGSocialEventMetadata_SharingTabActivity, SLOGSocialEventMetadata_SocialActivity, SLOGSocialEventMetadata_SocialBundle, SLOGSocialEventMetadata_SocialCircle, SLOGSocialEventMetadata_SocialCollection, SLOGSocialEventMetadata_SocialComment, SLOGSocialEventMetadata_SocialCommunity, SLOGSocialEventMetadata_SocialCustomStream, SLOGSocialEventMetadata_SocialDatedObject, SLOGSocialEventMetadata_SocialMediaCollection, SLOGSocialEventMetadata_SocialMediaItem, SLOGSocialEventMetadata_SocialMediaSuggestion, SLOGSocialEventMetadata_SocialNotification, SLOGSocialEventMetadata_SocialProfile, SLOGSocialEventMetadata_SocialRecommendation, SLOGSocialEventMetadata_SocialSharingTargetApplication, SLOGSocialEventMetadata_SocialSpace, SLOGSocialEventMetadata_Story, SLOGSocialEventMetadata_SuggestedAction;

@interface SLOGSocialEventMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialActivity *activity; // @dynamic activity;
@property(retain, nonatomic) SLOGSocialEventMetadata_PhotosAssistantCard *assistantCard; // @dynamic assistantCard;
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialBundle *bundle; // @dynamic bundle;
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialCircle *circle; // @dynamic circle;
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialCollection *collection; // @dynamic collection;
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialComment *comment; // @dynamic comment;
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialCommunity *community; // @dynamic community;
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialCustomStream *customStream; // @dynamic customStream;
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialDatedObject *datedObject; // @dynamic datedObject;
@property(retain, nonatomic) SLOGSocialEventMetadata_GuidedCreation *guidedCreation; // @dynamic guidedCreation;
@property(nonatomic) _Bool hasActivity; // @dynamic hasActivity;
@property(nonatomic) _Bool hasAssistantCard; // @dynamic hasAssistantCard;
@property(nonatomic) _Bool hasBundle; // @dynamic hasBundle;
@property(nonatomic) _Bool hasCircle; // @dynamic hasCircle;
@property(nonatomic) _Bool hasCollection; // @dynamic hasCollection;
@property(nonatomic) _Bool hasComment; // @dynamic hasComment;
@property(nonatomic) _Bool hasCommunity; // @dynamic hasCommunity;
@property(nonatomic) _Bool hasCustomStream; // @dynamic hasCustomStream;
@property(nonatomic) _Bool hasDatedObject; // @dynamic hasDatedObject;
@property(nonatomic) _Bool hasGuidedCreation; // @dynamic hasGuidedCreation;
@property(nonatomic) _Bool hasMediaCollection; // @dynamic hasMediaCollection;
@property(nonatomic) _Bool hasMediaItem; // @dynamic hasMediaItem;
@property(nonatomic) _Bool hasMediaSuggestion; // @dynamic hasMediaSuggestion;
@property(nonatomic) _Bool hasMovieMakerSoundtrack; // @dynamic hasMovieMakerSoundtrack;
@property(nonatomic) _Bool hasNotification; // @dynamic hasNotification;
@property(nonatomic) _Bool hasPeopleMergeSuggestion; // @dynamic hasPeopleMergeSuggestion;
@property(nonatomic) _Bool hasPhotoBook; // @dynamic hasPhotoBook;
@property(nonatomic) _Bool hasPhotoSearchResult; // @dynamic hasPhotoSearchResult;
@property(nonatomic) _Bool hasProfile; // @dynamic hasProfile;
@property(nonatomic) _Bool hasPromotionId; // @dynamic hasPromotionId;
@property(nonatomic) _Bool hasRecommendation; // @dynamic hasRecommendation;
@property(nonatomic) _Bool hasSharingTabActivity; // @dynamic hasSharingTabActivity;
@property(nonatomic) _Bool hasSharingTargetApplication; // @dynamic hasSharingTargetApplication;
@property(nonatomic) _Bool hasSocialAffinity; // @dynamic hasSocialAffinity;
@property(nonatomic) _Bool hasSpace; // @dynamic hasSpace;
@property(nonatomic) _Bool hasStory; // @dynamic hasStory;
@property(nonatomic) _Bool hasSuggestedAction; // @dynamic hasSuggestedAction;
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialMediaCollection *mediaCollection; // @dynamic mediaCollection;
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialMediaItem *mediaItem; // @dynamic mediaItem;
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialMediaSuggestion *mediaSuggestion; // @dynamic mediaSuggestion;
@property(retain, nonatomic) SLOGSocialEventMetadata_PhotosMovieMakerSoundtrack *movieMakerSoundtrack; // @dynamic movieMakerSoundtrack;
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialNotification *notification; // @dynamic notification;
@property(retain, nonatomic) SLOGSocialEventMetadata_PeopleMergeSuggestion *peopleMergeSuggestion; // @dynamic peopleMergeSuggestion;
@property(retain, nonatomic) SLOGSocialEventMetadata_PhotoBook *photoBook; // @dynamic photoBook;
@property(retain, nonatomic) SLOGSocialEventMetadata_PhotoSearchResult *photoSearchResult; // @dynamic photoSearchResult;
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialProfile *profile; // @dynamic profile;
@property(retain, nonatomic) SLOGSocialEventMetadata_PromotionId *promotionId; // @dynamic promotionId;
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialRecommendation *recommendation; // @dynamic recommendation;
@property(retain, nonatomic) SLOGSocialEventMetadata_SharingTabActivity *sharingTabActivity; // @dynamic sharingTabActivity;
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialSharingTargetApplication *sharingTargetApplication; // @dynamic sharingTargetApplication;
@property(retain, nonatomic) SLOGSocialAffinityExtension *socialAffinity; // @dynamic socialAffinity;
@property(retain, nonatomic) SLOGSocialEventMetadata_SocialSpace *space; // @dynamic space;
@property(retain, nonatomic) SLOGSocialEventMetadata_Story *story; // @dynamic story;
@property(retain, nonatomic) SLOGSocialEventMetadata_SuggestedAction *suggestedAction; // @dynamic suggestedAction;

@end

