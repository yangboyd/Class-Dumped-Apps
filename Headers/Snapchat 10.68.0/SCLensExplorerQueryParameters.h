//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCLensExplorerQueryParameters : NSObject <NSCopying, NSCoding>
{
    NSString *_queryType;
    NSString *_sectionIdentifier;
    NSString *_challengeId;
    NSString *_challengeName;
    unsigned long long _category;
}

@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *challengeName; // @synthesize challengeName=_challengeName;
@property(readonly, copy, nonatomic) NSString *challengeId; // @synthesize challengeId=_challengeId;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(readonly, copy, nonatomic) NSString *queryType; // @synthesize queryType=_queryType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQueryType:(id)arg1 sectionIdentifier:(id)arg2 challengeId:(id)arg3 challengeName:(id)arg4 category:(unsigned long long)arg5;
- (id)initWithCoder:(id)arg1;

@end

