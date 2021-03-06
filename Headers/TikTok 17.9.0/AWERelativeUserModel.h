//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSNumber, NSString;

@interface AWERelativeUserModel : AWEBaseApiModel
{
    NSNumber *_userID;
    AWEURLModel *_avatar;
    NSString *_nickname;
    NSString *_alias;
    AWEURLModel *_avatarThumb;
    long long _followStatus;
    NSString *_secUserID;
}

+ (id)followStatusJSONTransformer;
+ (id)avatarThumbJSONAdapter;
+ (id)avatarJSONAdapter;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *secUserID; // @synthesize secUserID=_secUserID;
@property(nonatomic) long long followStatus; // @synthesize followStatus=_followStatus;
@property(retain, nonatomic) AWEURLModel *avatarThumb; // @synthesize avatarThumb=_avatarThumb;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) AWEURLModel *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (id)getUserModel;
- (id)displayName;

@end

