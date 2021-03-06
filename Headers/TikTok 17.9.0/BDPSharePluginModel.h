//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDPBasePluginModel.h"

@class NSDictionary, NSString;

@interface BDPSharePluginModel : BDPBasePluginModel
{
    _Bool _withShareTicket;
    NSString *_imageUrl;
    NSString *_miniImageUrl;
    NSString *_title;
    NSString *_token;
    NSString *_ugUrl;
    NSString *_query;
    NSString *_appName;
    NSString *_appIcon;
    NSString *_appId;
    NSString *_shareID;
    NSString *_schema;
    NSString *_ttid;
    long long _appType;
    NSDictionary *_extra;
    NSString *_desc;
}

@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(nonatomic) long long appType; // @synthesize appType=_appType;
@property(nonatomic) _Bool withShareTicket; // @synthesize withShareTicket=_withShareTicket;
@property(copy, nonatomic) NSString *ttid; // @synthesize ttid=_ttid;
@property(copy, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) NSString *shareID; // @synthesize shareID=_shareID;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *appIcon; // @synthesize appIcon=_appIcon;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *ugUrl; // @synthesize ugUrl=_ugUrl;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *miniImageUrl; // @synthesize miniImageUrl=_miniImageUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

