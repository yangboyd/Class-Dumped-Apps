//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEFriendTabSettings : AWEBaseApiModel
{
    _Bool _isDefaultFollowTab;
    NSString *_tabTitle;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDefaultFollowTab; // @synthesize isDefaultFollowTab=_isDefaultFollowTab;
@property(copy, nonatomic) NSString *tabTitle; // @synthesize tabTitle=_tabTitle;

@end

