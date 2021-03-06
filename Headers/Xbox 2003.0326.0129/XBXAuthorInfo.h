//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString, XBXGamertag, XBXPreferredColors;

@interface XBXAuthorInfo : NSObject <NSCoding>
{
    long long _authorType;
    NSString *_xuid;
    XBXGamertag *_gamertag;
    NSString *_realName;
    NSString *_gamerscore;
    XBXPreferredColors *_preferredColors;
    NSString *_gamerpicResizeUrl;
    unsigned long long _titleId;
    NSArray *_unfollowableTitles;
    NSString *_titleName;
    NSString *_titleImageResizeUrl;
    NSString *_pageId;
    NSString *_pageName;
    NSString *_pageImageResizeUrl;
}

+ (long long)authorTypeForString:(id)arg1;
@property(retain, nonatomic) NSString *pageImageResizeUrl; // @synthesize pageImageResizeUrl=_pageImageResizeUrl;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSString *titleImageResizeUrl; // @synthesize titleImageResizeUrl=_titleImageResizeUrl;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(retain, nonatomic) NSArray *unfollowableTitles; // @synthesize unfollowableTitles=_unfollowableTitles;
@property(nonatomic) unsigned long long titleId; // @synthesize titleId=_titleId;
@property(retain, nonatomic) NSString *gamerpicResizeUrl; // @synthesize gamerpicResizeUrl=_gamerpicResizeUrl;
@property(retain, nonatomic) XBXPreferredColors *preferredColors; // @synthesize preferredColors=_preferredColors;
@property(retain, nonatomic) NSString *gamerscore; // @synthesize gamerscore=_gamerscore;
@property(retain, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(retain, nonatomic) XBXGamertag *gamertag; // @synthesize gamertag=_gamertag;
@property(retain, nonatomic) NSString *xuid; // @synthesize xuid=_xuid;
@property(nonatomic) long long authorType; // @synthesize authorType=_authorType;
- (void).cxx_destruct;
- (id)createTitle;
- (id)createClubUser;
- (id)createUser;
@property(readonly, nonatomic) NSString *largePageImage;
@property(readonly, nonatomic) NSString *mediumPageImage;
@property(readonly, nonatomic) NSString *smallPageImage;
@property(readonly, nonatomic) NSString *largeTitleImage;
@property(readonly, nonatomic) NSString *mediumTitleImage;
@property(readonly, nonatomic) NSString *smallTitleImage;
@property(readonly, nonatomic) NSString *largeGamerpic;
@property(readonly, nonatomic) NSString *mediumGamerpic;
@property(readonly, nonatomic) NSString *mediumSmallGamerpic;
@property(readonly, nonatomic) NSString *smallGamerpic;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)userColor;

@end

