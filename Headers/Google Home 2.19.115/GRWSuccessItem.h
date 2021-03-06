//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GRWMessageID;

@interface GRWSuccessItem : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _wasCounterfactual;
    GRWMessageID *_messageID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool wasCounterfactual; // @synthesize wasCounterfactual=_wasCounterfactual;
@property(readonly, nonatomic) GRWMessageID *messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToSuccessItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessageID:(id)arg1 wasCounterfactual:(_Bool)arg2;

@end

