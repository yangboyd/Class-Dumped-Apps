//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SOJUSnapCreatorAttribution;

@interface SCMemoriesSharedSnapInfo : NSObject <NSCopying>
{
    _Bool _isPrivate;
    NSString *_externalId;
    NSString *_creatorUserId;
    NSString *_title;
    long long _entrySource;
    unsigned long long _source;
    SOJUSnapCreatorAttribution *_creatorAttribution;
}

@property(readonly, copy, nonatomic) SOJUSnapCreatorAttribution *creatorAttribution; // @synthesize creatorAttribution=_creatorAttribution;
@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
@property(readonly, nonatomic) long long entrySource; // @synthesize entrySource=_entrySource;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *creatorUserId; // @synthesize creatorUserId=_creatorUserId;
@property(readonly, copy, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExternalId:(id)arg1 creatorUserId:(id)arg2 title:(id)arg3 entrySource:(long long)arg4 source:(unsigned long long)arg5 isPrivate:(_Bool)arg6 creatorAttribution:(id)arg7;

@end

