//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUScannableActionOpenUrl-Protocol.h"

@class NSString;

@interface SOJUScannableActionOpenUrl : NSObject <SOJUScannableActionOpenUrl>
{
    NSString *_header;
    NSString *_byline;
    NSString *_url;
    NSString *_iconUrl;
    NSString *_localIconAssetName;
    NSString *_actionHint;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *actionHint; // @synthesize actionHint=_actionHint;
@property(readonly, copy, nonatomic) NSString *localIconAssetName; // @synthesize localIconAssetName=_localIconAssetName;
@property(readonly, copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *byline; // @synthesize byline=_byline;
@property(readonly, copy, nonatomic) NSString *header; // @synthesize header=_header;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeader:(id)arg1 byline:(id)arg2 url:(id)arg3 iconUrl:(id)arg4 localIconAssetName:(id)arg5 actionHint:(id)arg6;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

