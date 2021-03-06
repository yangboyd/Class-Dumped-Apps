//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGActivityToastData : NSObject
{
    _Bool _dotBadgeNotification;
    _Bool _campaignNotification;
    _Bool _copyrightNotification;
    _Bool _doubleToasting;
    _Bool _hasUnseenBadgeableBrandedContentNotification;
    _Bool _hasUnstaleBrandedContent;
    unsigned long long _comments;
    unsigned long long _likes;
    unsigned long long _relationships;
    unsigned long long _storyMentions;
    unsigned long long _userTags;
    unsigned long long _photosOfYou;
    unsigned long long _brandedContent;
    unsigned long long _shoppingNotifications;
    unsigned long long _otherActivityAlerts;
}

+ (id)dataWithDictionary:(id)arg1;
+ (id)initWithComments:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long otherActivityAlerts; // @synthesize otherActivityAlerts=_otherActivityAlerts;
@property(readonly, nonatomic) _Bool hasUnstaleBrandedContent; // @synthesize hasUnstaleBrandedContent=_hasUnstaleBrandedContent;
@property(readonly, nonatomic) _Bool hasUnseenBadgeableBrandedContentNotification; // @synthesize hasUnseenBadgeableBrandedContentNotification=_hasUnseenBadgeableBrandedContentNotification;
@property(readonly, nonatomic) _Bool doubleToasting; // @synthesize doubleToasting=_doubleToasting;
@property(readonly, nonatomic) _Bool copyrightNotification; // @synthesize copyrightNotification=_copyrightNotification;
@property(readonly, nonatomic) _Bool campaignNotification; // @synthesize campaignNotification=_campaignNotification;
@property(readonly, nonatomic) _Bool dotBadgeNotification; // @synthesize dotBadgeNotification=_dotBadgeNotification;
@property(readonly, nonatomic) unsigned long long shoppingNotifications; // @synthesize shoppingNotifications=_shoppingNotifications;
@property(readonly, nonatomic) unsigned long long brandedContent; // @synthesize brandedContent=_brandedContent;
@property(readonly, nonatomic) unsigned long long photosOfYou; // @synthesize photosOfYou=_photosOfYou;
@property(readonly, nonatomic) unsigned long long userTags; // @synthesize userTags=_userTags;
@property(readonly, nonatomic) unsigned long long storyMentions; // @synthesize storyMentions=_storyMentions;
@property(readonly, nonatomic) unsigned long long relationships; // @synthesize relationships=_relationships;
@property(readonly, nonatomic) unsigned long long likes; // @synthesize likes=_likes;
@property(readonly, nonatomic) unsigned long long comments; // @synthesize comments=_comments;
- (id)initWithComments:(unsigned long long)arg1 likes:(unsigned long long)arg2 relationships:(unsigned long long)arg3 storyMentions:(unsigned long long)arg4 userTags:(unsigned long long)arg5 photosOfYou:(unsigned long long)arg6 brandedContent:(unsigned long long)arg7 shoppingNotifications:(unsigned long long)arg8 dotBadgeNotification:(_Bool)arg9 campaignNotification:(_Bool)arg10 copyrightNotification:(_Bool)arg11 doubleToasting:(_Bool)arg12 hasUnseenBadgeableBrandedContentNotification:(_Bool)arg13 hasUnstaleBrandedContent:(_Bool)arg14 otherActivityAlerts:(unsigned long long)arg15;
- (id)activityDict;
- (_Bool)isValidToShow:(id)arg1;
- (unsigned long long)platformActivityCount;
- (unsigned long long)activityCount;

@end

