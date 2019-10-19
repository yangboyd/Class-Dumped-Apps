//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class IMPShowProfileLaunchInfo, NSString, NSURL, UIColor;

@interface SCSearchPublisher : NSObject <NSCopying>
{
    _Bool _isSubscribed;
    _Bool _isHidden;
    _Bool _isNotificationOptedIn;
    _Bool _isShareable;
    _Bool _enableUnskippableAd;
    NSString *_name;
    NSString *_publisherName;
    NSString *_formalName;
    NSString *_publisherDescription;
    NSURL *_searchIconUrl;
    NSURL *_filledIconUrl;
    NSURL *_horizontalLogoUrl;
    long long _profileLogoDisplay;
    NSURL *_heroImageURL;
    NSString *_heroImageBitmojiTemplateId;
    NSURL *_editionDeeplinkUrl;
    NSURL *_publisherDeeplinkUrl;
    UIColor *_primaryColor;
    long long _editionId;
    long long _publisherId;
    IMPShowProfileLaunchInfo *_showLaunchInfo;
    NSString *_businessProfileId;
    NSURL *_websiteUrl;
}

@property(readonly, nonatomic) _Bool enableUnskippableAd; // @synthesize enableUnskippableAd=_enableUnskippableAd;
@property(readonly, copy, nonatomic) NSURL *websiteUrl; // @synthesize websiteUrl=_websiteUrl;
@property(readonly, copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
@property(readonly, copy, nonatomic) IMPShowProfileLaunchInfo *showLaunchInfo; // @synthesize showLaunchInfo=_showLaunchInfo;
@property(readonly, nonatomic) _Bool isShareable; // @synthesize isShareable=_isShareable;
@property(readonly, nonatomic) long long publisherId; // @synthesize publisherId=_publisherId;
@property(readonly, nonatomic) long long editionId; // @synthesize editionId=_editionId;
@property(readonly, nonatomic) _Bool isNotificationOptedIn; // @synthesize isNotificationOptedIn=_isNotificationOptedIn;
@property(readonly, nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(readonly, nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(readonly, copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, copy, nonatomic) NSURL *publisherDeeplinkUrl; // @synthesize publisherDeeplinkUrl=_publisherDeeplinkUrl;
@property(readonly, copy, nonatomic) NSURL *editionDeeplinkUrl; // @synthesize editionDeeplinkUrl=_editionDeeplinkUrl;
@property(readonly, copy, nonatomic) NSString *heroImageBitmojiTemplateId; // @synthesize heroImageBitmojiTemplateId=_heroImageBitmojiTemplateId;
@property(readonly, copy, nonatomic) NSURL *heroImageURL; // @synthesize heroImageURL=_heroImageURL;
@property(readonly, nonatomic) long long profileLogoDisplay; // @synthesize profileLogoDisplay=_profileLogoDisplay;
@property(readonly, copy, nonatomic) NSURL *horizontalLogoUrl; // @synthesize horizontalLogoUrl=_horizontalLogoUrl;
@property(readonly, copy, nonatomic) NSURL *filledIconUrl; // @synthesize filledIconUrl=_filledIconUrl;
@property(readonly, copy, nonatomic) NSURL *searchIconUrl; // @synthesize searchIconUrl=_searchIconUrl;
@property(readonly, copy, nonatomic) NSString *publisherDescription; // @synthesize publisherDescription=_publisherDescription;
@property(readonly, copy, nonatomic) NSString *formalName; // @synthesize formalName=_formalName;
@property(readonly, copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 publisherName:(id)arg2 formalName:(id)arg3 publisherDescription:(id)arg4 searchIconUrl:(id)arg5 filledIconUrl:(id)arg6 horizontalLogoUrl:(id)arg7 profileLogoDisplay:(long long)arg8 heroImageURL:(id)arg9 heroImageBitmojiTemplateId:(id)arg10 editionDeeplinkUrl:(id)arg11 publisherDeeplinkUrl:(id)arg12 primaryColor:(id)arg13 isSubscribed:(_Bool)arg14 isHidden:(_Bool)arg15 isNotificationOptedIn:(_Bool)arg16 editionId:(long long)arg17 publisherId:(long long)arg18 isShareable:(_Bool)arg19 showLaunchInfo:(id)arg20 businessProfileId:(id)arg21 websiteUrl:(id)arg22 enableUnskippableAd:(_Bool)arg23;

@end

