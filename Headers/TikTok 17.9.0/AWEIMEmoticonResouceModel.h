//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEIMEmoticonResouceModel : AWEBaseApiModel
{
    long long _resourceId;
    long long _createTime;
    long long _updateTime;
    NSString *_md5;
    NSString *_resourceUrl;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) long long updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long resourceId; // @synthesize resourceId=_resourceId;

@end

