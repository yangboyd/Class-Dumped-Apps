//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEFansPushNotificationModel : AWEBaseApiModel
{
    NSString *_content;
    long long _unreadCount;
    long long _blockUrgeSetting;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long blockUrgeSetting; // @synthesize blockUrgeSetting=_blockUrgeSetting;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;

@end

