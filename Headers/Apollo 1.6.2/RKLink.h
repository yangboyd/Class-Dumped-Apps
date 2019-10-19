//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RKVotable.h"

@class NSArray, NSDate, NSDictionary, NSString, NSURL, RKGilding, RKLinkPreviewMedia, RKMedia, RKVideo;

@interface RKLink : RKVotable
{
    _Bool _isAuthorCakeday;
    _Bool _archived;
    _Bool _removed;
    _Bool _spam;
    _Bool _spoiler;
    _Bool _isOC;
    _Bool _approved;
    _Bool _hidden;
    _Bool _contestMode;
    _Bool _NSFW;
    _Bool _saved;
    _Bool _selfPost;
    _Bool _stickied;
    _Bool _visited;
    _Bool _locked;
    _Bool _ignoringReports;
    _Bool _canModPost;
    _Bool _sendReplies;
    NSURL *_thumbnailURL;
    NSURL *_URL;
    NSString *_title;
    NSURL *_permalink;
    NSString *_author;
    NSString *_subreddit;
    NSString *_subredditFullName;
    NSString *_domain;
    double _upvoteRatio;
    NSDate *_edited;
    long long _gilded;
    RKGilding *_gildings;
    unsigned long long _distinguished;
    NSString *_approvedBy;
    NSString *_bannedBy;
    NSString *_subredditType;
    NSString *_modNote;
    NSString *_modReasonTitle;
    NSString *_modReasonBy;
    NSDate *_bannedAt;
    NSString *_selfText;
    long long _suggestedSort;
    NSString *_selfTextHTML;
    NSArray *_userReports;
    NSArray *_moderatorReports;
    RKVideo *_videoPreview;
    RKMedia *_normalMedia;
    RKMedia *_crosspostMedia;
    NSArray *_imageURLs;
    NSDictionary *_redditMP4Info;
    NSDictionary *_sourceURL;
    long long _totalComments;
    NSString *_whitelistStatus;
    long long _totalReports;
    RKLinkPreviewMedia *_previewMedia;
    long long _viewCount;
    NSString *_authorFlairClass;
    NSString *_authorFlairText;
    NSString *_linkFlairClass;
    NSString *_linkFlairText;
}

+ (id)suggestedSortJSONTransformer;
+ (id)distinguishedJSONTransformer;
+ (id)crosspostMediaJSONTransformer;
+ (id)gildingsJSONTransformer;
+ (id)normalMediaJSONTransformer;
+ (id)videoPreviewJSONTransformer;
+ (id)previewMediaJSONTransformer;
+ (id)sourceURLJSONTransformer;
+ (id)redditMP4InfoJSONTransformer;
+ (id)imageURLsJSONTransformer;
+ (id)bannedAtJSONTransformer;
+ (id)editedJSONTransformer;
+ (id)thumbnailURLJSONTransformer;
+ (id)permalinkJSONTransformer;
+ (id)URLJSONTransformer;
+ (id)viewCountJSONTransformer;
+ (id)bannedByJSONTransformer;
+ (id)totalReportsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *linkFlairText; // @synthesize linkFlairText=_linkFlairText;
@property(copy, nonatomic) NSString *linkFlairClass; // @synthesize linkFlairClass=_linkFlairClass;
@property(copy, nonatomic) NSString *authorFlairText; // @synthesize authorFlairText=_authorFlairText;
@property(copy, nonatomic) NSString *authorFlairClass; // @synthesize authorFlairClass=_authorFlairClass;
@property(nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(retain, nonatomic) RKLinkPreviewMedia *previewMedia; // @synthesize previewMedia=_previewMedia;
@property(nonatomic) long long totalReports; // @synthesize totalReports=_totalReports;
@property(copy, nonatomic) NSString *whitelistStatus; // @synthesize whitelistStatus=_whitelistStatus;
@property(nonatomic) long long totalComments; // @synthesize totalComments=_totalComments;
@property(readonly, copy, nonatomic) NSDictionary *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, copy, nonatomic) NSDictionary *redditMP4Info; // @synthesize redditMP4Info=_redditMP4Info;
@property(readonly, copy, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
@property(readonly, nonatomic) RKMedia *crosspostMedia; // @synthesize crosspostMedia=_crosspostMedia;
@property(readonly, nonatomic) RKMedia *normalMedia; // @synthesize normalMedia=_normalMedia;
@property(readonly, nonatomic) RKVideo *videoPreview; // @synthesize videoPreview=_videoPreview;
@property(nonatomic) _Bool sendReplies; // @synthesize sendReplies=_sendReplies;
@property(nonatomic) _Bool canModPost; // @synthesize canModPost=_canModPost;
@property(retain, nonatomic) NSArray *moderatorReports; // @synthesize moderatorReports=_moderatorReports;
@property(retain, nonatomic) NSArray *userReports; // @synthesize userReports=_userReports;
@property(copy, nonatomic) NSString *selfTextHTML; // @synthesize selfTextHTML=_selfTextHTML;
@property(nonatomic) _Bool ignoringReports; // @synthesize ignoringReports=_ignoringReports;
@property(nonatomic) long long suggestedSort; // @synthesize suggestedSort=_suggestedSort;
@property(copy, nonatomic) NSString *selfText; // @synthesize selfText=_selfText;
@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
@property(readonly, nonatomic) _Bool visited; // @synthesize visited=_visited;
@property(nonatomic) _Bool stickied; // @synthesize stickied=_stickied;
@property(nonatomic, getter=isSelfPost) _Bool selfPost; // @synthesize selfPost=_selfPost;
@property(nonatomic) _Bool saved; // @synthesize saved=_saved;
@property(nonatomic, getter=isNSFW) _Bool NSFW; // @synthesize NSFW=_NSFW;
@property(nonatomic) _Bool contestMode; // @synthesize contestMode=_contestMode;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSDate *bannedAt; // @synthesize bannedAt=_bannedAt;
@property(copy, nonatomic) NSString *modReasonBy; // @synthesize modReasonBy=_modReasonBy;
@property(copy, nonatomic) NSString *modReasonTitle; // @synthesize modReasonTitle=_modReasonTitle;
@property(copy, nonatomic) NSString *modNote; // @synthesize modNote=_modNote;
@property(copy, nonatomic) NSString *subredditType; // @synthesize subredditType=_subredditType;
@property(copy, nonatomic) NSString *bannedBy; // @synthesize bannedBy=_bannedBy;
@property(nonatomic, getter=isApproved) _Bool approved; // @synthesize approved=_approved;
@property(copy, nonatomic) NSString *approvedBy; // @synthesize approvedBy=_approvedBy;
@property(nonatomic) unsigned long long distinguished; // @synthesize distinguished=_distinguished;
@property(nonatomic) _Bool isOC; // @synthesize isOC=_isOC;
@property(nonatomic, getter=isSpoiler) _Bool spoiler; // @synthesize spoiler=_spoiler;
@property(nonatomic, getter=isSpam) _Bool spam; // @synthesize spam=_spam;
@property(nonatomic, getter=isRemoved) _Bool removed; // @synthesize removed=_removed;
@property(readonly, nonatomic, getter=isArchived) _Bool archived; // @synthesize archived=_archived;
@property(nonatomic) _Bool isAuthorCakeday; // @synthesize isAuthorCakeday=_isAuthorCakeday;
@property(retain, nonatomic) RKGilding *gildings; // @synthesize gildings=_gildings;
@property(nonatomic) long long gilded; // @synthesize gilded=_gilded;
@property(readonly, nonatomic) NSDate *edited; // @synthesize edited=_edited;
@property(readonly, nonatomic) double upvoteRatio; // @synthesize upvoteRatio=_upvoteRatio;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *subreddit; // @synthesize subreddit=_subreddit;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (_Bool)hasGildings;
@property(readonly, nonatomic) RKMedia *media;
@property(readonly, copy, nonatomic) NSString *subredditFullName; // @synthesize subredditFullName=_subredditFullName;
@property(readonly, copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSURL *permalink; // @synthesize permalink=_permalink;
@property(readonly, copy, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
- (_Bool)isImageLink;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

