//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSSet, NSString;

@interface AWEIMSocialRelationModel : NSObject <NSCoding, NSCopying>
{
    long long _relationType;
    NSString *_trackFlag;
    NSSet *_secUids;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *secUids; // @synthesize secUids=_secUids;
@property(copy, nonatomic) NSString *trackFlag; // @synthesize trackFlag=_trackFlag;
@property(nonatomic) long long relationType; // @synthesize relationType=_relationType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

