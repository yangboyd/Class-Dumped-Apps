//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BNCLinkCache, BNCLinkData, NSArray, NSDictionary, NSString;

@interface BranchShortUrlSyncRequest : NSObject
{
    NSArray *_tags;
    NSString *_alias;
    unsigned long long _type;
    long long _matchDuration;
    NSString *_channel;
    NSString *_feature;
    NSString *_stage;
    NSString *_campaign;
    NSDictionary *_params;
    BNCLinkCache *_linkCache;
    BNCLinkData *_linkData;
}

+ (id)createLongUrlWithBaseUrl:(id)arg1 tags:(id)arg2 alias:(id)arg3 type:(unsigned long long)arg4 matchDuration:(long long)arg5 channel:(id)arg6 feature:(id)arg7 stage:(id)arg8 params:(id)arg9;
+ (id)createLinkFromBranchKey:(id)arg1 tags:(id)arg2 alias:(id)arg3 type:(unsigned long long)arg4 matchDuration:(long long)arg5 channel:(id)arg6 feature:(id)arg7 stage:(id)arg8 params:(id)arg9;
- (void).cxx_destruct;
@property(retain, nonatomic) BNCLinkData *linkData; // @synthesize linkData=_linkData;
@property(retain, nonatomic) BNCLinkCache *linkCache; // @synthesize linkCache=_linkCache;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *campaign; // @synthesize campaign=_campaign;
@property(retain, nonatomic) NSString *stage; // @synthesize stage=_stage;
@property(retain, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(nonatomic) long long matchDuration; // @synthesize matchDuration=_matchDuration;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
- (id)createLongUrlForUserUrl:(id)arg1;
- (id)processResponse:(id)arg1;
- (id)makeRequest:(id)arg1 key:(id)arg2;
- (id)initWithTags:(id)arg1 alias:(id)arg2 type:(unsigned long long)arg3 matchDuration:(long long)arg4 channel:(id)arg5 feature:(id)arg6 stage:(id)arg7 campaign:(id)arg8 params:(id)arg9 linkData:(id)arg10 linkCache:(id)arg11;

@end

